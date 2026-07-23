/*
 * XREFs of EtwpGetPerfCounter @ 0x14032F3E0
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x140248F60 (KiLoadDirectoryTableBase.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032DD60 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     KiIpiProcessRequest @ 0x14032E310 (KiIpiProcessRequest.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     WmiGetClock @ 0x1406CA3F0 (WmiGetClock.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 EtwpGetPerfCounter()
{
  ULONG_PTR v0; // rsi
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r14
  signed __int64 v6; // rdx
  unsigned __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int32 v10; // edx
  unsigned __int32 v11; // edx
  __int64 v12; // rdi
  unsigned __int64 v13; // r9
  signed __int64 v14; // rax
  int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // r8
  __int64 v19; // r10
  unsigned __int64 v20; // r10
  _QWORD *v21; // r8
  __int64 CounterSafe; // rax
  __int64 v23; // r14
  signed __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned __int64 v26; // r9
  signed __int64 v27; // rax
  int v28; // r8d
  unsigned __int64 v29; // rcx
  __int64 v30; // r10
  unsigned __int64 v31; // r10
  signed __int32 v32[8]; // [rsp+0h] [rbp-48h] BYREF

  v0 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v1 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      while ( 1 )
      {
        v8 = *(unsigned int *)(v0 + 188);
        if ( (unsigned int)v8 < HalpTimerQueryCounterHandlerCount )
          break;
        v11 = 0;
        if ( HalpTimerQueryCounterHandlerCount )
        {
          v21 = &unk_140FBB7E8;
          do
          {
            if ( v0 == *v21 )
              break;
            ++v11;
            v21 += 2;
          }
          while ( v11 < HalpTimerQueryCounterHandlerCount );
        }
        if ( v11 >= HalpTimerQueryCounterHandlerCount
          || (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v0 + 188), v11, v8) )
        {
          KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v0, *(int *)(v0 + 228));
        }
      }
      if ( (*(_DWORD *)(v0 + 224) & 0x10000) != 0 )
        v9 = *(_QWORD *)(v0 + 72) + *(_DWORD *)(v0 + 80) * KeGetPcr()->Prcb.Number;
      else
        v9 = *(_QWORD *)(v0 + 72);
      result = MEMORY[0xFFFFF780000003B8]
             + (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v8])(v9)
               * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
        v23 = *(_QWORD *)(v0 + 208);
        v24 = CounterSafe;
      }
      else
      {
        do
        {
          v23 = *(_QWORD *)(v0 + 208);
          do
          {
            v25 = *(_QWORD *)(v0 + 200);
            v26 = HalpTimerQueryCounterSafe(v0);
            _InterlockedOr(v32, 0);
            v27 = *(_QWORD *)(v0 + 200);
          }
          while ( v25 != v27 );
        }
        while ( v23 != *(_QWORD *)(v0 + 208) );
        v28 = *(_DWORD *)(v0 + 220);
        v29 = v25 ^ v26;
        if ( _bittest64((const __int64 *)&v29, (unsigned __int8)(v28 - 1)) )
        {
          v30 = -1LL;
          if ( v28 != 64 )
            v30 = (1LL << v28) - 1;
          v31 = v25 & v30;
          v24 = (v26 | v25 ^ v31) + (1LL << v28);
          if ( v26 >= v31 )
            v24 = v26 | v25 ^ v31;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v24, v27);
        }
        else if ( v28 == 64 )
        {
          v24 = v26;
        }
        else
        {
          v24 = v26 | v25 & ~((1LL << v28) - 1);
        }
      }
      result = HalpTimerScaleCounter(v23 + v24, *(_QWORD *)(v0 + 192), 10000000LL);
    }
  }
  else
  {
    v1 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      while ( 1 )
      {
        v2 = *(unsigned int *)(v0 + 188);
        if ( (unsigned int)v2 < HalpTimerQueryCounterHandlerCount )
          break;
        v10 = 0;
        if ( HalpTimerQueryCounterHandlerCount )
        {
          v18 = &unk_140FBB7E8;
          do
          {
            if ( v0 == *v18 )
              break;
            ++v10;
            v18 += 2;
          }
          while ( v10 < HalpTimerQueryCounterHandlerCount );
        }
        if ( v10 >= HalpTimerQueryCounterHandlerCount
          || (_DWORD)v2 == _InterlockedCompareExchange((volatile signed __int32 *)(v0 + 188), v10, v2) )
        {
          KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v0, *(int *)(v0 + 228));
        }
      }
      if ( (*(_DWORD *)(v0 + 224) & 0x10000) != 0 )
        v3 = *(_QWORD *)(v0 + 72) + *(_DWORD *)(v0 + 80) * KeGetPcr()->Prcb.Number;
      else
        v3 = *(_QWORD *)(v0 + 72);
      v4 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v2])(v3);
      v5 = *(_QWORD *)(v0 + 208);
      v6 = v4;
    }
    else
    {
      do
      {
        v5 = *(_QWORD *)(v0 + 208);
        do
        {
          v12 = *(_QWORD *)(v0 + 200);
          v13 = HalpTimerQueryCounterSafe(v0);
          _InterlockedOr(v32, 0);
          v14 = *(_QWORD *)(v0 + 200);
        }
        while ( v12 != v14 );
      }
      while ( v5 != *(_QWORD *)(v0 + 208) );
      v15 = *(_DWORD *)(v0 + 220);
      v16 = v12 ^ v13;
      if ( _bittest64((const __int64 *)&v16, (unsigned __int8)(v15 - 1)) )
      {
        v19 = -1LL;
        if ( v15 != 64 )
          v19 = (1LL << v15) - 1;
        v20 = v12 & v19;
        v6 = (v13 | v12 ^ v20) + (1LL << v15);
        if ( v13 >= v20 )
          v6 = v13 | v12 ^ v20;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v6, v14);
      }
      else if ( v15 == 64 )
      {
        v6 = v13;
      }
      else
      {
        v6 = v13 | v12 & ~((1LL << v15) - 1);
      }
    }
    result = v5 + v6;
  }
  if ( v0 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v17 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v17 = 10000000LL;
    return HalpTimerScaleCounter(result, v1, v17);
  }
  return result;
}

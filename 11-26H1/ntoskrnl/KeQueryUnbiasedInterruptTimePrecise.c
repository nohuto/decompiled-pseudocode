/*
 * XREFs of KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0
 * Callers:
 *     MiGetSlabCurrentTime @ 0x1402073A0 (MiGetSlabCurrentTime.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402073C8 (MiCheckTrimUnusedPageFileRegions.c)
 *     IoDiskIoAttributionQuery @ 0x1402074B4 (IoDiskIoAttributionQuery.c)
 *     MiEmptyDecayClusterTimers @ 0x1402994DC (MiEmptyDecayClusterTimers.c)
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A5FD8 (MiRetryFileOnlyFailedReapPages.c)
 *     MiLogPeriodicTelemetry @ 0x1402A8770 (MiLogPeriodicTelemetry.c)
 *     MiRebuildLargePagesThread @ 0x1403C7830 (MiRebuildLargePagesThread.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403C8EC4 (MiPerformOnDemandLargePageCoalesce.c)
 *     MiAccumulateTimeBoundTime @ 0x1403C96CC (MiAccumulateTimeBoundTime.c)
 *     MiFlushAllPagesWorker @ 0x1403E0A6C (MiFlushAllPagesWorker.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckFreeModifiedReservations @ 0x140406B68 (MiCheckFreeModifiedReservations.c)
 *     MiModwriterIssueWrite @ 0x140408928 (MiModwriterIssueWrite.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     VmpQueryAccessedState @ 0x140464934 (VmpQueryAccessedState.c)
 *     MiTrimAllWorkingSets @ 0x140466450 (MiTrimAllWorkingSets.c)
 *     MiAdjustModifiedPageLoad @ 0x1404BC438 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPages @ 0x140504838 (MiFlushAllPages.c)
 *     MiDelayFaultingThread @ 0x1405053C4 (MiDelayFaultingThread.c)
 *     VmpProcessInvalidateList @ 0x140518B00 (VmpProcessInvalidateList.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     VmpAccessFault @ 0x14081C2B4 (VmpAccessFault.c)
 *     VmPinMemoryRanges @ 0x14081D290 (VmPinMemoryRanges.c)
 *     VmUnpinMemoryRanges @ 0x14081D680 (VmUnpinMemoryRanges.c)
 *     MiRememberUnloadedDriver @ 0x140AC7E58 (MiRememberUnloadedDriver.c)
 *     MmVerifierTrimMemory @ 0x140C437B8 (MmVerifierTrimMemory.c)
 *     MiInitializeKernelStacks @ 0x140CFC600 (MiInitializeKernelStacks.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140CFEB84 (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402085F0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208D00 (HalpTimerScaleCounter.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

ULONG64 __stdcall KeQueryUnbiasedInterruptTimePrecise(PULONG64 QpcTimeStamp)
{
  unsigned __int64 v1; // r8
  __int64 v2; // r13
  __int64 i; // rbx
  ULONG_PTR v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r12
  signed __int64 v12; // rdx
  unsigned __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int32 v19; // edx
  unsigned __int32 v20; // edx
  __int64 v21; // rdi
  unsigned __int64 v22; // r10
  signed __int64 v23; // rax
  int v24; // r9d
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 CounterSafe; // rax
  __int64 v29; // r12
  signed __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned __int64 v32; // r10
  signed __int64 v33; // rax
  int v34; // r9d
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r8
  signed __int32 v38[8]; // [rsp+0h] [rbp-68h] BYREF

  do
  {
    v2 = MEMORY[0xFFFFF780000003B0];
    while ( 1 )
    {
      for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
        _mm_pause();
      v4 = HalpPerformanceCounter;
      v5 = MEMORY[0xFFFFF78000000350];
      v6 = MEMORY[0xFFFFF78000000008];
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        v7 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          while ( 1 )
          {
            v17 = *(unsigned int *)(v4 + 188);
            if ( (unsigned int)v17 < HalpTimerQueryCounterHandlerCount )
              break;
            v20 = 0;
            if ( HalpTimerQueryCounterHandlerCount )
            {
              v1 = (unsigned __int64)&unk_140FBB448;
              do
              {
                if ( v4 == *(_QWORD *)v1 )
                  break;
                ++v20;
                v1 += 16LL;
              }
              while ( v20 < HalpTimerQueryCounterHandlerCount );
            }
            if ( v20 >= HalpTimerQueryCounterHandlerCount
              || (_DWORD)v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 188), v20, v17) )
            {
              KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v4, *(int *)(v4 + 228));
            }
          }
          v18 = (*(_DWORD *)(v4 + 224) & 0x10000) != 0
              ? *(_QWORD *)(v4 + 72) + *(_DWORD *)(v4 + 80) * KeGetPcr()->Prcb.Number
              : *(_QWORD *)(v4 + 72);
          v13 = (((unsigned __int64)((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))HalpTimerQueryCounterHandlers[2 * v17])(
                                      v18,
                                      HalpTimerQueryCounterHandlers[2 * v17],
                                      v1,
                                      10000000LL)
                * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
              + MEMORY[0xFFFFF780000003B8];
        }
        else
        {
          if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
          {
            CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
            v29 = *(_QWORD *)(v4 + 208);
            v30 = CounterSafe;
          }
          else
          {
            do
            {
              v29 = *(_QWORD *)(v4 + 208);
              do
              {
                v31 = *(_QWORD *)(v4 + 200);
                v32 = HalpTimerQueryCounterSafe(v4);
                _InterlockedOr(v38, 0);
                v33 = *(_QWORD *)(v4 + 200);
              }
              while ( v31 != v33 );
            }
            while ( v29 != *(_QWORD *)(v4 + 208) );
            v34 = *(_DWORD *)(v4 + 220);
            v35 = v31 ^ v32;
            if ( _bittest64((const __int64 *)&v35, (unsigned __int8)(v34 - 1)) )
            {
              v36 = -1LL;
              if ( v34 != 64 )
                v36 = (1LL << v34) - 1;
              v37 = v31 & v36;
              v30 = (v32 | v31 ^ v37) + (1LL << v34);
              if ( v32 >= v37 )
                v30 = v32 | v31 ^ v37;
              _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v30, v33);
            }
            else
            {
              v30 = v34 == 64 ? v32 : v32 | v31 & ~((1LL << v34) - 1);
            }
          }
          v13 = HalpTimerScaleCounter(v29 + v30, *(_QWORD *)(v4 + 192), 10000000LL);
        }
      }
      else
      {
        v7 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          while ( 1 )
          {
            v8 = *(unsigned int *)(v4 + 188);
            if ( (unsigned int)v8 < HalpTimerQueryCounterHandlerCount )
              break;
            v19 = 0;
            if ( HalpTimerQueryCounterHandlerCount )
            {
              v1 = (unsigned __int64)&unk_140FBB448;
              do
              {
                if ( v4 == *(_QWORD *)v1 )
                  break;
                ++v19;
                v1 += 16LL;
              }
              while ( v19 < HalpTimerQueryCounterHandlerCount );
            }
            if ( v19 >= HalpTimerQueryCounterHandlerCount
              || (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 188), v19, v8) )
            {
              KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v4, *(int *)(v4 + 228));
            }
          }
          v9 = (*(_DWORD *)(v4 + 224) & 0x10000) != 0
             ? *(_QWORD *)(v4 + 72) + *(_DWORD *)(v4 + 80) * KeGetPcr()->Prcb.Number
             : *(_QWORD *)(v4 + 72);
          v10 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))HalpTimerQueryCounterHandlers[2 * v8])(
                  v9,
                  HalpTimerQueryCounterHandlers[2 * v8],
                  v1,
                  10000000LL);
          v11 = *(_QWORD *)(v4 + 208);
          v12 = v10;
        }
        else
        {
          do
          {
            v11 = *(_QWORD *)(v4 + 208);
            do
            {
              v21 = *(_QWORD *)(v4 + 200);
              v22 = HalpTimerQueryCounterSafe(v4);
              _InterlockedOr(v38, 0);
              v23 = *(_QWORD *)(v4 + 200);
            }
            while ( v21 != v23 );
          }
          while ( v11 != *(_QWORD *)(v4 + 208) );
          v24 = *(_DWORD *)(v4 + 220);
          v25 = v21 ^ v22;
          if ( _bittest64((const __int64 *)&v25, (unsigned __int8)(v24 - 1)) )
          {
            v27 = -1LL;
            if ( v24 != 64 )
              v27 = (1LL << v24) - 1;
            v1 = v21 & v27;
            v12 = (v22 | v21 ^ v1) + (1LL << v24);
            if ( v22 >= v1 )
              v12 = v22 | v21 ^ v1;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v12, v23);
          }
          else
          {
            v12 = v24 == 64 ? v22 : v22 | v21 & ~((1LL << v24) - 1);
          }
        }
        v13 = v11 + v12;
      }
      if ( v4 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v26 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v26 = 10000000LL;
        v13 = HalpTimerScaleCounter(v13, v7, v26);
      }
      if ( MEMORY[0xFFFFF78000000340] == i )
        break;
      _mm_pause();
    }
    *QpcTimeStamp = v13;
    if ( v13 <= v5 )
    {
      v15 = 0LL;
    }
    else
    {
      v14 = v13 - v5 - 1;
      if ( MEMORY[0xFFFFF78000000369] )
        v14 <<= MEMORY[0xFFFFF78000000369];
      v15 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    }
  }
  while ( v2 != MEMORY[0xFFFFF780000003B0] );
  return v15 + v6 - v2;
}

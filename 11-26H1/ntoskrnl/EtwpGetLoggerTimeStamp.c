/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x14021D850
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402191F4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 *     EtwSendTraceBuffer @ 0x1406CA270 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406CC2F0 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1406CC34C (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x140AB2428 (EtwpInitializeTimeStamp.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpGetLoggerTimeStamp(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  char v6; // di
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // r15
  LONGLONG v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  signed __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int32 v23; // edx
  unsigned __int32 v24; // edx
  __int64 v25; // rdi
  unsigned __int64 v26; // r10
  signed __int64 v27; // rax
  int v28; // r9d
  unsigned __int64 v29; // rcx
  _QWORD *v30; // r8
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  _QWORD *v33; // r8
  __int64 CounterSafe; // rax
  __int64 v35; // r14
  signed __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // r10
  signed __int64 v39; // rax
  int v40; // r9d
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 v44; // r8
  signed __int32 v45[8]; // [rsp+0h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    v11 = v1 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          __fastfail(0x3Du);
        return __rdtsc();
      }
      else
      {
        return EtwpGetHostPerfCounter();
      }
    }
    else
    {
      v13 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        v14 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          while ( 1 )
          {
            v21 = *(unsigned int *)(v13 + 188);
            if ( (unsigned int)v21 < HalpTimerQueryCounterHandlerCount )
              break;
            v24 = 0;
            if ( HalpTimerQueryCounterHandlerCount )
            {
              v33 = &unk_140FBB7E8;
              do
              {
                if ( v13 == *v33 )
                  break;
                ++v24;
                v33 += 2;
              }
              while ( v24 < HalpTimerQueryCounterHandlerCount );
            }
            if ( v24 >= HalpTimerQueryCounterHandlerCount
              || (_DWORD)v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 188), v24, v21) )
            {
              KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v13, *(int *)(v13 + 228));
            }
          }
          if ( (*(_DWORD *)(v13 + 224) & 0x10000) != 0 )
            v22 = *(_QWORD *)(v13 + 72) + *(_DWORD *)(v13 + 80) * KeGetPcr()->Prcb.Number;
          else
            v22 = *(_QWORD *)(v13 + 72);
          result = MEMORY[0xFFFFF780000003B8]
                 + (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v21])(v22)
                   * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
        }
        else
        {
          if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
          {
            CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
            v35 = *(_QWORD *)(v13 + 208);
            v36 = CounterSafe;
          }
          else
          {
            do
            {
              v35 = *(_QWORD *)(v13 + 208);
              do
              {
                v37 = *(_QWORD *)(v13 + 200);
                v38 = HalpTimerQueryCounterSafe(v13);
                _InterlockedOr(v45, 0);
                v39 = *(_QWORD *)(v13 + 200);
              }
              while ( v37 != v39 );
            }
            while ( v35 != *(_QWORD *)(v13 + 208) );
            v40 = *(_DWORD *)(v13 + 220);
            v41 = v37 ^ v38;
            if ( _bittest64((const __int64 *)&v41, (unsigned __int8)(v40 - 1)) )
            {
              v43 = -1LL;
              if ( v40 != 64 )
                v43 = (1LL << v40) - 1;
              v44 = v37 & v43;
              v36 = (v38 | v37 ^ v44) + (1LL << v40);
              if ( v38 >= v44 )
                v36 = v38 | v37 ^ v44;
              _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 200), v36, v39);
            }
            else
            {
              if ( v40 == 64 )
                v42 = -1LL;
              else
                v42 = (1LL << v40) - 1;
              v36 = v38 | v37 & ~v42;
            }
          }
          result = HalpTimerScaleCounter(v35 + v36, *(_QWORD *)(v13 + 192), 10000000LL);
        }
      }
      else
      {
        v14 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          while ( 1 )
          {
            v15 = *(unsigned int *)(v13 + 188);
            if ( (unsigned int)v15 < HalpTimerQueryCounterHandlerCount )
              break;
            v23 = 0;
            if ( HalpTimerQueryCounterHandlerCount )
            {
              v30 = &unk_140FBB7E8;
              do
              {
                if ( v13 == *v30 )
                  break;
                ++v23;
                v30 += 2;
              }
              while ( v23 < HalpTimerQueryCounterHandlerCount );
            }
            if ( v23 >= HalpTimerQueryCounterHandlerCount
              || (_DWORD)v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 188), v23, v15) )
            {
              KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v13, *(int *)(v13 + 228));
            }
          }
          if ( (*(_DWORD *)(v13 + 224) & 0x10000) != 0 )
            v16 = *(_QWORD *)(v13 + 72) + *(_DWORD *)(v13 + 80) * KeGetPcr()->Prcb.Number;
          else
            v16 = *(_QWORD *)(v13 + 72);
          v17 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v15])(v16);
          v18 = *(_QWORD *)(v13 + 208);
          v19 = v17;
        }
        else
        {
          do
          {
            v18 = *(_QWORD *)(v13 + 208);
            do
            {
              v25 = *(_QWORD *)(v13 + 200);
              v26 = HalpTimerQueryCounterSafe(v13);
              _InterlockedOr(v45, 0);
              v27 = *(_QWORD *)(v13 + 200);
            }
            while ( v25 != v27 );
          }
          while ( v18 != *(_QWORD *)(v13 + 208) );
          v28 = *(_DWORD *)(v13 + 220);
          v29 = v25 ^ v26;
          if ( _bittest64((const __int64 *)&v29, (unsigned __int8)(v28 - 1)) )
          {
            v31 = -1LL;
            if ( v28 != 64 )
              v31 = (1LL << v28) - 1;
            v32 = v25 & v31;
            v19 = (v26 | v25 ^ v32) + (1LL << v28);
            if ( v26 >= v32 )
              v19 = v26 | v25 ^ v32;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 200), v19, v27);
          }
          else if ( v28 == 64 )
          {
            v19 = v26;
          }
          else
          {
            v19 = v26 | v25 & ~((1LL << v28) - 1);
          }
        }
        result = v18 + v19;
      }
      if ( v13 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v20 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v20 = 10000000LL;
        return HalpTimerScaleCounter(result, v14, v20);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
        _mm_pause();
      v3 = MEMORY[0xFFFFF78000000014];
      v4 = MEMORY[0xFFFFF78000000348];
      v5 = MEMORY[0xFFFFF78000000358];
      v6 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == i )
        break;
      _mm_pause();
    }
    v8 = 0LL;
    if ( PerformanceCounter.QuadPart > v4 )
    {
      v9 = PerformanceCounter.QuadPart - v4 - 1;
      if ( v6 )
        v9 <<= v6;
      v8 = ((unsigned __int64)v9 * (unsigned __int128)v5) >> 64;
    }
    return v8 + v3;
  }
  return result;
}

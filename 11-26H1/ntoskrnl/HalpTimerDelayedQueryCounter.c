/*
 * XREFs of HalpTimerDelayedQueryCounter @ 0x140584380
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerDelayedQueryCounter(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  signed __int64 v9; // rax
  int v10; // r10d
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r9
  signed __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 CounterSafe; // rax
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  ++HalpTimerHeavilyPenalizedQpcCalls;
  *(_DWORD *)(HalpPerformanceCounter + 188) = HalpTimerAlwaysOnQueryCounterIndex;
  HalpTimerAlwaysOnQueryCounterStall = 0;
  v3 = *(_QWORD *)(HalpTimerSavedPerformanceCounter + 16);
  if ( v3 )
  {
    do
    {
      v4 = HalpPerformanceCounter;
      v5 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
        v6 = *(_QWORD *)(v4 + 208);
        v14 = CounterSafe;
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)(v4 + 208);
          do
          {
            v7 = *(_QWORD *)(v4 + 200);
            v8 = HalpTimerQueryCounterSafe(v4);
            _InterlockedOr(v18, 0);
            v9 = *(_QWORD *)(v4 + 200);
          }
          while ( v7 != v9 );
        }
        while ( v6 != *(_QWORD *)(v4 + 208) );
        v10 = *(_DWORD *)(v4 + 220);
        v11 = v7 ^ v8;
        if ( _bittest64((const __int64 *)&v11, (unsigned __int8)(v10 - 1)) )
        {
          if ( v10 == 64 )
            v12 = -1LL;
          else
            v12 = (1LL << v10) - 1;
          v13 = v7 & v12;
          v14 = (v8 | v7 ^ v13) + (1LL << v10);
          if ( v8 >= v13 )
            v14 = v8 | v7 ^ v13;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v14, v9);
        }
        else
        {
          if ( v10 == 64 )
            v15 = -1LL;
          else
            v15 = (1LL << v10) - 1;
          v14 = v8 | v7 & ~v15;
        }
      }
    }
    while ( HalpTimerScaleCounter(v6 + v14, v5, *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192)) < v3 );
  }
  return guard_dispatch_icall_no_overrides(a1, a2);
}

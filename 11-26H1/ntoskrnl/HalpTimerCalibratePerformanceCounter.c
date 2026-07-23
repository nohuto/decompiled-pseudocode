/*
 * XREFs of HalpTimerCalibratePerformanceCounter @ 0x1404DED74
 * Callers:
 *     HalpTimerRestorePerformanceCounter @ 0x1404DEC68 (HalpTimerRestorePerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x140578FF0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerInitialize @ 0x140579E08 (HalpTimerInitialize.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140584B68 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1404DEEA0 (HalpTimerPropagateQpcBiasUpdate.c)
 */

__int64 __fastcall HalpTimerCalibratePerformanceCounter(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 CounterSafe; // rax
  __int64 v5; // rsi
  signed __int64 v6; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r11
  signed __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int64 v15; // r10
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(BugCheckParameter3 + 220) == 64 )
  {
    CounterSafe = HalpTimerQueryCounterSafe(BugCheckParameter3);
    v5 = *(_QWORD *)(BugCheckParameter3 + 208);
    v6 = CounterSafe;
  }
  else
  {
    do
    {
      v5 = *(_QWORD *)(BugCheckParameter3 + 208);
      do
      {
        v8 = *(_QWORD *)(BugCheckParameter3 + 200);
        v9 = HalpTimerQueryCounterSafe(BugCheckParameter3);
        _InterlockedOr(v16, 0);
        v10 = *(_QWORD *)(BugCheckParameter3 + 200);
      }
      while ( v8 != v10 );
    }
    while ( v5 != *(_QWORD *)(BugCheckParameter3 + 208) );
    v11 = *(_DWORD *)(BugCheckParameter3 + 220);
    v12 = v8 ^ v9;
    if ( _bittest64((const __int64 *)&v12, (unsigned __int8)(v11 - 1)) )
    {
      v14 = -1LL;
      if ( v11 != 64 )
        v14 = (1LL << v11) - 1;
      v15 = v8 & v14;
      v6 = (v9 | v8 ^ v15) + (1LL << v11);
      if ( v9 >= v15 )
        v6 = v9 | v8 ^ v15;
      _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 200), v6, v10);
    }
    else
    {
      if ( v11 == 64 )
        v13 = -1LL;
      else
        v13 = (1LL << v11) - 1;
      v6 = v9 | v8 & ~v13;
    }
  }
  *(_QWORD *)(BugCheckParameter3 + 208) = a2 + *(_QWORD *)(BugCheckParameter3 + 208) - v5 - v6;
  HalpTimerPropagateQpcBiasUpdate(BugCheckParameter3);
  return 0LL;
}

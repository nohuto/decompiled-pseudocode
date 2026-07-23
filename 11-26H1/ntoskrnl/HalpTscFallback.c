/*
 * XREFs of HalpTscFallback @ 0x140586130
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     RtlSetSystemGlobalData @ 0x1404B81B0 (RtlSetSystemGlobalData.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalCalibratePerformanceCounter @ 0x140578FF0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x140583ECC (HalpTimerCalculateMaximumAllowableDrift.c)
 */

__int64 __fastcall HalpTscFallback(ULONG_PTR Argument)
{
  bool v2; // di
  __int64 v3; // r8
  __int64 result; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  char Buffer; // [rsp+48h] [rbp+10h] BYREF

  Buffer = 0;
  v2 = HalpDisableInterrupts();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) == 1 )
  {
    *(LARGE_INTEGER *)(Argument + 8) = KeQueryPerformanceCounter(0LL);
    if ( !HalpFallbackPerformanceCounter )
      KeBugCheckEx(
        0x5Cu,
        0x1000uLL,
        HalpPerformanceCounter,
        (ULONG_PTR)&HalpRegisteredTimers,
        (unsigned int)HalpRegisteredTimerCount);
    HalpPerformanceCounter = HalpFallbackPerformanceCounter;
    if ( HalpAlwaysOnCounter )
      HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift();
    RtlSetSystemGlobalData(GlobalDataIdQpcShift, &Buffer, 1u);
    _InterlockedDecrement((volatile signed __int32 *)Argument);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument != -1 );
    _InterlockedOr(v5, 0);
  }
  result = HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 4), *(_QWORD *)(Argument + 8), v3);
  if ( v2 )
    _enable();
  return result;
}

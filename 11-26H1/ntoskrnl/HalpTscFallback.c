/*
 * XREFs of HalpTscFallback @ 0x140583C10
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     RtlSetSystemGlobalData @ 0x1404BE960 (RtlSetSystemGlobalData.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalCalibratePerformanceCounter @ 0x140576AC0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1405819AC (HalpTimerCalculateMaximumAllowableDrift.c)
 */

__int64 __fastcall HalpTscFallback(ULONG_PTR Argument)
{
  bool v2; // di
  __int64 v3; // r8
  __int64 result; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v6) = 0;
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
    RtlSetSystemGlobalData(16, &v6, 1);
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

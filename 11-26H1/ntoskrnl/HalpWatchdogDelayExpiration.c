/*
 * XREFs of HalpWatchdogDelayExpiration @ 0x140587C80
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimer @ 0x140208790 (HalpSetTimer.c)
 */

__int64 __fastcall HalpWatchdogDelayExpiration(_QWORD *a1)
{
  __int64 v1; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v1 = HalpWatchdogTimer;
  if ( a1 )
    *a1 = HalpTimerWatchdogResetCount;
  if ( !v1 || !HalpTimerWatchdogArmed )
    return 0LL;
  if ( HalpTimerProcessorsFrozen
    && HalpTimerWatchdogLastReset + 3000000000LL >= (unsigned __int64)RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart )
  {
    return HalpSetTimer(v1, 3u, HalpTimerWatchdogTimeout, 1, (unsigned __int64 *)&PerformanceCounter.QuadPart);
  }
  return 3221225473LL;
}

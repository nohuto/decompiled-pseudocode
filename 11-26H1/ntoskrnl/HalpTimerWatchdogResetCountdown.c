/*
 * XREFs of HalpTimerWatchdogResetCountdown @ 0x1404F5780
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1405970B0 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     HalpSetTimer @ 0x1402086B0 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1404F57DC (HalpTimerWatchdogWakeSetDueTime.c)
 */

__int64 HalpTimerWatchdogResetCountdown()
{
  __int64 result; // rax
  unsigned __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  if ( HalpWatchdogTimer )
  {
    if ( HalpTimerWatchdogArmed )
    {
      HalpSetTimer(HalpWatchdogTimer, 3u, HalpTimerWatchdogTimeout, 1, &v1);
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      return HalpTimerWatchdogWakeSetDueTime();
    }
  }
  return result;
}

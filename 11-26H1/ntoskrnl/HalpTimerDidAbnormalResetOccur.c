/*
 * XREFs of HalpTimerDidAbnormalResetOccur @ 0x1405853F4
 * Callers:
 *     HalpTimerWatchdogGeneratedLastReset @ 0x140781AD0 (HalpTimerWatchdogGeneratedLastReset.c)
 * Callees:
 *     <none>
 */

char HalpTimerDidAbnormalResetOccur()
{
  return HalpWatchdogAbnormalResetDetected;
}

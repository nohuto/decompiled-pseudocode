/*
 * XREFs of HalpTimerDidAbnormalResetOccur @ 0x140587914
 * Callers:
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1407845D0 (HalpTimerWatchdogGeneratedLastReset.c)
 * Callees:
 *     <none>
 */

char HalpTimerDidAbnormalResetOccur()
{
  return HalpWatchdogAbnormalResetDetected;
}

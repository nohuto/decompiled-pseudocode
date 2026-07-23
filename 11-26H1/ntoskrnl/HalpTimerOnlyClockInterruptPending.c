/*
 * XREFs of HalpTimerOnlyClockInterruptPending @ 0x140583C40
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14057F860 (HalpInterruptGetHighestPriorityInterrupt.c)
 */

char HalpTimerOnlyClockInterruptPending()
{
  int v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  HalpInterruptGetHighestPriorityInterrupt(&v1);
  return 0;
}

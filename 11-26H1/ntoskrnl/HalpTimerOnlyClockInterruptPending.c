/*
 * XREFs of HalpTimerOnlyClockInterruptPending @ 0x140581720
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14057D340 (HalpInterruptGetHighestPriorityInterrupt.c)
 */

char HalpTimerOnlyClockInterruptPending()
{
  int v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  HalpInterruptGetHighestPriorityInterrupt(&v1);
  return 0;
}

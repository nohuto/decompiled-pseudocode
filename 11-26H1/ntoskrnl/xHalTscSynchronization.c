/*
 * XREFs of xHalTscSynchronization @ 0x1405B8350
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x1403E592C (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}

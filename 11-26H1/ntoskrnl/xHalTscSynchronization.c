/*
 * XREFs of xHalTscSynchronization @ 0x1405BABC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x1403E8B1C (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}

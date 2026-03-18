/*
 * XREFs of xHalTscSynchronization @ 0x14057EC10
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x1404BFC58 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}

/*
 * XREFs of ExpTimeRefreshCallback @ 0x1406CB320
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpSysDbgLock.RelativeTimerBias, 0LL, 0LL, 0LL, 0);
}

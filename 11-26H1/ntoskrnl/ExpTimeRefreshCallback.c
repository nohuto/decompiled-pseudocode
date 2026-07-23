/*
 * XREFs of ExpTimeRefreshCallback @ 0x1406CF350
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpSysDbgLock.WaitBlockFill11[16], 0LL, 0LL, 0LL, 0);
}

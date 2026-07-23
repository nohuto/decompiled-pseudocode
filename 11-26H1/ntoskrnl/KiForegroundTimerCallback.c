/*
 * XREFs of KiForegroundTimerCallback @ 0x1405F91F0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.WriteOperationCount, 0LL, 0LL, 0LL, 0);
}

/*
 * XREFs of KiForegroundTimerCallback @ 0x1405F6830
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)KiSupervisorXStateFeaturesLock.PriorityFloorCounts, 0LL, 0LL, 0LL, 0);
}

/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x14060CAF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  BYTE4(stru_140F0F620.SchedulerAssistLastYieldBoostTime) = 0;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v0);
  _m_prefetchw((char *)stru_140F0F620.Padding + 4);
  if ( !_InterlockedOr((_DWORD *)stru_140F0F620.Padding + 1, 1u) )
  {
    PopDeepSleepSetDisengageReason(4u);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}

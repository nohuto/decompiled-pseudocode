/*
 * XREFs of PopThermalEventTransitionTimerCallback @ 0x140607BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 */

void PopThermalEventTransitionTimerCallback()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink);
  if ( stru_140F0F620.PriorityFloorCounts[0] )
  {
    PopDeepSleepClearDisengageReason(0xAu);
    *(_DWORD *)&stru_140F0F620.SchedulerApcFill5[36] = -1;
    stru_140F0F620.PriorityFloorCounts[0] = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink, v0);
}

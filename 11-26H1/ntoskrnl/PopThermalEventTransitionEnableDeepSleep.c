/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x140528ED8
 * Callers:
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 */

void __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  KIRQL v1; // bl

  if ( (unsigned int)(a1 - 3) <= 3 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink);
    KeCancelTimer2((__int64)&stru_140F0F620.SchedulerApc.Reserved[1]);
    stru_140F0F620.PriorityFloorCounts[0] = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink, v1);
  }
}

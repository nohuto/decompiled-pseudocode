/*
 * XREFs of PopPowerSettingPendingUpdateWatchdog @ 0x140606EA0
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x1407E3A00 (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall PopPowerSettingPendingUpdateWatchdog(unsigned __int64 a1)
{
  bool v2; // bl
  KIRQL v3; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10828.WriteTransferCount);
  if ( *(_QWORD *)&stru_140F10828.SchedulerAssistPriorityFloor )
    v2 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)&stru_140F10828.SchedulerAssistPriorityFloor >= a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F10828.WriteTransferCount, v3);
  return v2;
}

/*
 * XREFs of PopPowerSettingPendingUpdateWatchdog @ 0x1406099A0
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x1407E8D4C (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall PopPowerSettingPendingUpdateWatchdog(unsigned __int64 a1)
{
  bool v2; // bl
  KIRQL v3; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( PopPendingPowerSettingUpdateTime )
    v2 = MEMORY[0xFFFFF78000000008] - PopPendingPowerSettingUpdateTime >= a1;
  KeReleaseSpinLock(&PopPendingPowerSettingUpdateLock, v3);
  return v2;
}

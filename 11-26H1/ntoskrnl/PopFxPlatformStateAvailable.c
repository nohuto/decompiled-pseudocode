/*
 * XREFs of PopFxPlatformStateAvailable @ 0x14042C75C
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x1403B2278 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x14042C7DC (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x14042C978 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14042D038 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14042D294 (PopIdleWakeNotifyDevicesActive.c)
 */

void __fastcall PopFxPlatformStateAvailable(int a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  PpmIdleCsVetoAccountingDeviceUpdate();
  if ( a1 == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( a2 )
    {
      PopFxSetDripsBlockedByDeviceActivity(0LL);
      PopIdleWakeNotifyDevicesActive(0LL);
      PopUpdateNonAttributedCpuTimeReference(0LL);
      PopDeepSleepClearDisengageReason(6u);
    }
    else
    {
      LOBYTE(v4) = 1;
      PopFxSetDripsBlockedByDeviceActivity(v4);
      LOBYTE(v5) = 1;
      PopIdleWakeNotifyDevicesActive(v5);
      LOBYTE(v6) = 1;
      PopUpdateNonAttributedCpuTimeReference(v6);
      PopDeepSleepSetDisengageReason(6u);
    }
  }
}

/*
 * XREFs of PopFxPlatformStateAvailable @ 0x140420E2C
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x1403BBF88 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x140420EAC (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x140421048 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140421708 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140421964 (PopIdleWakeNotifyDevicesActive.c)
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

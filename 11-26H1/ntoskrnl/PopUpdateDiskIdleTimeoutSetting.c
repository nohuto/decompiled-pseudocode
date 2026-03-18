/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x140A3C4FC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404C32B4 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407CF360 (PopCoalescingPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x140943EA0 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140CD13D8 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (stru_140F11D08.AbWaitEntryCount & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4LL, &PopCurrentDiskIdleTimeout);
  }
  return result;
}

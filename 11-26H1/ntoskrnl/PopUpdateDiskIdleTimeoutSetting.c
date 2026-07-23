/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1409F7F1C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404BCB04 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407D2400 (PopCoalescingPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x1409BF810 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140CD7580 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4LL, &PopCurrentDiskIdleTimeout);
  }
  return result;
}

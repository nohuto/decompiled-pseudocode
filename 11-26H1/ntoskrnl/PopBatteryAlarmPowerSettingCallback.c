/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x1407CF880
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryUpdateAlarms @ 0x1409BEBA0 (PopBatteryUpdateAlarms.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryAlarmPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // ebx
  unsigned int updated; // ebx

  v4 = (unsigned int)Context;
  PopAcquirePolicyLock(SettingGuid, Value);
  updated = PopBatteryUpdateAlarms(0LL, v4);
  PopReleasePolicyLock();
  return updated;
}

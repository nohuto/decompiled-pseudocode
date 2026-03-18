/*
 * XREFs of PopChangeCapability @ 0x140943114
 * Callers:
 *     PopThermalZoneAdd @ 0x1407D1E00 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407D7814 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x1407D7CF0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1407D7E20 (PopBatteryRemove.c)
 *     PdcPoReportButton @ 0x1407DB6C0 (PdcPoReportButton.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x140943130 (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PopChangeCapability(_BYTE *a1, char a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    *a1 = a2;
    return PopResetCurrentPolicies();
  }
  return result;
}

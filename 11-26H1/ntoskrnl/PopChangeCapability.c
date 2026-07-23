/*
 * XREFs of PopChangeCapability @ 0x1409BEA8C
 * Callers:
 *     PopThermalZoneAdd @ 0x1407D4EA0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x1407D5000 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407DAE34 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x1407DB310 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1407DB440 (PopBatteryRemove.c)
 *     PdcPoReportButton @ 0x1407DF6D0 (PdcPoReportButton.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x1409BEAA8 (PopResetCurrentPolicies.c)
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

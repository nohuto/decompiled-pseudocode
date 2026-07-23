/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140CDB010
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x140603800 (PopReadUlongPowerKey.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1406066D8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407DB50C (PopBatteryTestExemptPolicyRegKeyAccess.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     PopBatteryReadOscBits @ 0x140CDB130 (PopBatteryReadOscBits.c)
 */

NTSTATUS PopBatteryInitPhaseTwo()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // [rsp+40h] [rbp+8h] BYREF

  PopReadUlongPowerKey(
    L"ChargerWeakDetectionThresholdPercent",
    (unsigned int *)&WeakChargerChargeDropMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(
    L"BatteryChargeTrajectoryThresholdPercent",
    (unsigned int *)&BatteryChargeTrajectoryThresholdMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  if ( (unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline() )
    PopBatteryTestExemptPolicyRegKeyAccess(0);
  result = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( result >= 0 )
  {
    PopBatteryEtwRegistered = 1;
    ExSubscribeWnfStateChange((__int64)&v3, (__int64)&WNF_USB_ERROR_NOTIFICATION);
    ExSubscribeWnfStateChange((__int64)&v3, (__int64)&WNF_PO_POWER_ADAPTER_REC_OVERRIDE);
    return PopBatteryReadOscBits(v2, v1);
  }
  return result;
}

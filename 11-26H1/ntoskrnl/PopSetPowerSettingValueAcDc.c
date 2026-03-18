/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x140A3E450
 * Callers:
 *     PopScanIdleList @ 0x1404C65A0 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x140503E20 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x140606E50 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407CCD40 (PopWnfMixedRealityCallback.c)
 *     PopSetAwayModeStatus @ 0x1407D130C (PopSetAwayModeStatus.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1407D14E0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopEsPublishStateV2 @ 0x1407DB984 (PopEsPublishStateV2.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140947BB0 (PopWnfSprActiveSessionChangeCallback.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A3C4FC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessBrightnessAction @ 0x140B25090 (PopMonitorProcessBrightnessAction.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(a1, 0xFFFFFFFFLL, 0LL, a2, a3);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(a1, 0xFFFFFFFFLL, 1LL, a2, a3);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}

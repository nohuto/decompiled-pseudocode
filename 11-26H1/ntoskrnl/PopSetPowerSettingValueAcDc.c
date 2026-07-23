/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1409F9E70
 * Callers:
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1404FD6F0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x140609950 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407CFDE0 (PopWnfMixedRealityCallback.c)
 *     PopSetAwayModeStatus @ 0x1407D43AC (PopSetAwayModeStatus.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1407D4580 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopEsPublishStateV2 @ 0x1407DFBA0 (PopEsPublishStateV2.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1409C3520 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409F7F1C (PopUpdateDiskIdleTimeoutSetting.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopMonitorProcessBrightnessAction @ 0x140B27220 (PopMonitorProcessBrightnessAction.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
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

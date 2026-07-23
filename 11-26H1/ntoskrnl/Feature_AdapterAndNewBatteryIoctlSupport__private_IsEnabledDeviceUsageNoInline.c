/*
 * XREFs of Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404DA8A4
 * Callers:
 *     PopConnectToPolicyDevice @ 0x1407DAA8C (PopConnectToPolicyDevice.c)
 *     PopBatteryAdd @ 0x1407DB310 (PopBatteryAdd.c)
 *     PopBatteryUpdateTestExempt @ 0x1407DB65C (PopBatteryUpdateTestExempt.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopBatteryQueryStatus @ 0x140B00C30 (PopBatteryQueryStatus.c)
 * Callees:
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledFallback @ 0x14053396C (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AdapterAndNewBatteryIoctlSupport__private_featureState & 0x10) != 0 )
    return Feature_AdapterAndNewBatteryIoctlSupport__private_featureState & 1;
  else
    return Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledFallback(
             (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_featureState,
             3LL);
}

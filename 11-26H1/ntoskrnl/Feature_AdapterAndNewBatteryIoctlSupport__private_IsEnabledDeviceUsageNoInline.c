/*
 * XREFs of Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404E11C4
 * Callers:
 *     PopConnectToPolicyDevice @ 0x1407D746C (PopConnectToPolicyDevice.c)
 *     PopBatteryAdd @ 0x1407D7CF0 (PopBatteryAdd.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopBatteryQueryStatus @ 0x140AFEBC0 (PopBatteryQueryStatus.c)
 * Callees:
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledFallback @ 0x14053146C (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledFallback.c)
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

/*
 * XREFs of Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck @ 0x140159D40
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_DispBroker_EmulateKernelSdcReset__private_featureState;
  if ( (Feature_DispBroker_EmulateKernelSdcReset__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_DispBroker_EmulateKernelSdcReset__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DispBroker_EmulateKernelSdcReset__private_descriptor,
      Feature_DispBroker_EmulateKernelSdcReset__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_DispBroker_EmulateKernelSdcReset__private_descriptor);
  }
  return 1LL;
}

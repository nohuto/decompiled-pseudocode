/*
 * XREFs of Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck @ 0x1400606B0
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_BrokeredDisplays_RotMgr__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_BrokeredDisplays_RotMgr__private_featureState;
  if ( (Feature_BrokeredDisplays_RotMgr__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_BrokeredDisplays_RotMgr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor,
      v1,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_BrokeredDisplays_RotMgr__private_descriptor);
  }
  return 1LL;
}

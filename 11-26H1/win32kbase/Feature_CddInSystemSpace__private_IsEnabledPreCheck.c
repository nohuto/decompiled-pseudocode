/*
 * XREFs of Feature_CddInSystemSpace__private_IsEnabledPreCheck @ 0x14000CA2C
 * Callers:
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401C56C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_CddInSystemSpace__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_CddInSystemSpace__private_featureState;
  if ( (Feature_CddInSystemSpace__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_CddInSystemSpace__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_CddInSystemSpace__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_CddInSystemSpace__private_descriptor);
  }
  return 1LL;
}

/*
 * XREFs of Feature_UpperThresholdInheritance__private_IsEnabledPreCheck @ 0x1404D5ECC
 * Callers:
 *     PopConfigureHeteroThresholds @ 0x140A9EEA8 (PopConfigureHeteroThresholds.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052D25C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140532A10 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_UpperThresholdInheritance__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_UpperThresholdInheritance__private_featureState;
  if ( (Feature_UpperThresholdInheritance__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_UpperThresholdInheritance__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_UpperThresholdInheritance__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_UpperThresholdInheritance__private_descriptor);
  }
  return 1LL;
}

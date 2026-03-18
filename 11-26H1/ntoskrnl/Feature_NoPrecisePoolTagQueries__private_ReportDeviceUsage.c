/*
 * XREFs of Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage @ 0x1406C9F14
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052D25C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140532A10 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage()
{
  unsigned __int8 v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_NoPrecisePoolTagQueries__private_featureState & 0x10) == 0 )
  {
    v0 = Feature_NoPrecisePoolTagQueries__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_NoPrecisePoolTagQueries__private_descriptor,
      Feature_NoPrecisePoolTagQueries__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_NoPrecisePoolTagQueries__private_descriptor);
  }
}

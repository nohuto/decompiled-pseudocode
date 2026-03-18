/*
 * XREFs of Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x1401A2124
 * Callers:
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401CB9C0 (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_BrokeredDisplays_ModeChanges__private_featureState;
  if ( (Feature_BrokeredDisplays_ModeChanges__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_BrokeredDisplays_ModeChanges__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_descriptor,
      Feature_BrokeredDisplays_ModeChanges__private_featureState | 1,
      3u,
      1LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_BrokeredDisplays_ModeChanges__private_descriptor);
  }
  return result;
}

/*
 * XREFs of WheaResumedFromHibernate @ 0x1406D871C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void WheaResumedFromHibernate()
{
  unsigned __int8 v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_featureState & 0x10) == 0 )
  {
    v0 = Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_descriptor,
      Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_descriptor);
  }
}

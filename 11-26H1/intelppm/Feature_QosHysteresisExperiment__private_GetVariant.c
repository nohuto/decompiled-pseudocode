/*
 * XREFs of Feature_QosHysteresisExperiment__private_GetVariant @ 0x140006A84
 * Callers:
 *     GetHwpPerfControlHandler @ 0x14002AA80 (GetHwpPerfControlHandler.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1400077A8 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x140007944 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 __fastcall Feature_QosHysteresisExperiment__private_GetVariant(__int64 a1)
{
  __int64 v1; // rbx

  v1 = Feature_QosHysteresisExperiment__private_featureState;
  if ( (Feature_QosHysteresisExperiment__private_featureState & 8) == 0 )
    v1 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
           a1,
           Feature_QosHysteresisExperiment__private_featureState);
  wil_details_FeatureReporting_ReportVariantUsageToService(a1, v1);
  return ((unsigned int)v1 >> 12) & 0x3F;
}

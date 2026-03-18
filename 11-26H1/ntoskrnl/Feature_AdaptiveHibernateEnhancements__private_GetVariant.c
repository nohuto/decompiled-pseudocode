/*
 * XREFs of Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x140610CA0
 * Callers:
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x140356C30 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x140611124 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 __fastcall Feature_AdaptiveHibernateEnhancements__private_GetVariant(__int64 a1)
{
  __int64 v1; // rbx

  v1 = Feature_AdaptiveHibernateEnhancements__private_featureState;
  if ( (Feature_AdaptiveHibernateEnhancements__private_featureState & 8) == 0 )
    v1 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
           a1,
           Feature_AdaptiveHibernateEnhancements__private_featureState);
  wil_details_FeatureReporting_ReportVariantUsageToService(a1, v1);
  return ((unsigned int)v1 >> 12) & 0x3F;
}

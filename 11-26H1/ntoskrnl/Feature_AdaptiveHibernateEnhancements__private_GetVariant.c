/*
 * XREFs of Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x14060E86C
 * Callers:
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407E38AC (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyUpdateRegions @ 0x1407E5F5C (PopAdaptiveStandbyUpdateRegions.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140B761C0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1403589D0 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x14060EAD4 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
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

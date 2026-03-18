/*
 * XREFs of Feature_HSHELL_IAM_Delivery__private_GetVariant @ 0x1401ADC30
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x1400237D0 (PostIAMShellHookMessageEx.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1401ADC7C (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x140281DD8 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 __fastcall Feature_HSHELL_IAM_Delivery__private_GetVariant(__int64 a1)
{
  __int64 v1; // rbx

  v1 = Feature_HSHELL_IAM_Delivery__private_featureState;
  if ( (Feature_HSHELL_IAM_Delivery__private_featureState & 8) == 0 )
    v1 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
           &Feature_HSHELL_IAM_Delivery__private_featureState,
           Feature_HSHELL_IAM_Delivery__private_featureState,
           &Feature_HSHELL_IAM_Delivery__private_descriptor);
  wil_details_FeatureReporting_ReportVariantUsageToService(a1, v1);
  return ((unsigned int)v1 >> 12) & 0x3F;
}

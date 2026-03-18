/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140270E40
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140270F84 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_GetCurrentVariantState @ 0x140281EEC (wil_details_GetCurrentVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140270E74 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1);
}

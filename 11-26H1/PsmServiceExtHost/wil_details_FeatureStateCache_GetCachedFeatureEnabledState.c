/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x180075AE0
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x180075D84 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_GetCurrentVariantState @ 0x180075EB8 (wil_details_GetCurrentVariantState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1);
}

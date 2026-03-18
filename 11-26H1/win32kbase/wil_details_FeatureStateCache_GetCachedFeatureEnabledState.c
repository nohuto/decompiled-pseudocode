/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1401C4560
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1401C964C (wil_details_GetCurrentFeatureEnabledState.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401D6CB4 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1401C9544 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1);
}

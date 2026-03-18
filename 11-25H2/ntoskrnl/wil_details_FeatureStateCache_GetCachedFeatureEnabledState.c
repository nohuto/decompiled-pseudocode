/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403F79A0
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1403F7AE8 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F79D8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  LODWORD(result) = *a1;
  if ( (*a1 & 2) != 0 )
    return (unsigned int)result;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, (unsigned int)result, a2);
}

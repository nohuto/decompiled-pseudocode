/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x14013A380
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x14013A2C8 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x14013A3BC (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x14013A3BC (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  LODWORD(result) = *a1;
  if ( (*a1 & 0x200) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(a1, (unsigned int)result, a2);
  else
    return (unsigned int)result;
}

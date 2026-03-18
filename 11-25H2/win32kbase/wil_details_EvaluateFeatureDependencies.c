/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1402C9EFC
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1402C9EE0 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1402E9618 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x14013EA14 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1402C9F3C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 *     wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1402C9F74 (wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates.c)
 */

_QWORD *wil_details_EvaluateFeatureDependencies()
{
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates();
  for ( i = &wil_details_featureDescriptors_a; ; i = v2 + 7 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v2 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}

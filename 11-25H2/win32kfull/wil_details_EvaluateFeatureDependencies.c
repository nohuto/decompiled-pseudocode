/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1403D3FAC
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1403D3F90 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1403EC3FC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1401F9A94 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1403D3058 (wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1403D3FEC (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
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

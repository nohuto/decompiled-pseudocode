/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1401D5B90
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x14040B74C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14041D090 (wil_details_UpdateFeatureConfiguredStates.c)
 */

__int64 wil_details_ReevaluateOnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}

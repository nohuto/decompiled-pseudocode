/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1407C69B0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1406ED914 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A9F348 (wil_details_UpdateFeatureConfiguredStates.c)
 */

__int64 *wil_details_ReevaluateOnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}

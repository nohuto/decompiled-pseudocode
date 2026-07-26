/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14013A540
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x14013A2C8 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14013A5E0 (wil_details_UpdateFeatureConfiguredStates.c)
 */

void __fastcall wil_details_ReevaluateOnFeatureConfigurationChange(PVOID a1)
{
  wil_details_UpdateFeatureConfiguredStates(a1);
  wil_details_EvaluateFeatureDependencies();
}

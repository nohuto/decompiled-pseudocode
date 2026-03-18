/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1404FE2F8
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1407700DC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1408551F8 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140B49C1C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x140B58170 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140CEDC08 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140CEDCD0 (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 *a1)
{
  while ( a1 < &wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}

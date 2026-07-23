/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1404F78A8
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1407730DC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x14085B514 (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x14085B590 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140B4B9AC (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x140B5AF90 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140CF3F84 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140CF404C (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
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

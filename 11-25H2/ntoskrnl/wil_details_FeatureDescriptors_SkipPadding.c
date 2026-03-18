/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1404BF6B0
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1406ED914 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1407C6950 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1407C6A40 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A9F348 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C38FDC (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140C3909C (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 *a1)
{
  while ( 1 )
  {
    if ( a1 >= &wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}

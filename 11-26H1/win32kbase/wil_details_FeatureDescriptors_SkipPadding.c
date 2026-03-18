/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1401750CC
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1402D32BC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1402D3338 (wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1402D33C8 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1402D37A0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_InitializeFeatureStaging @ 0x1402F1B48 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1402F1C34 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( a1 < wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}

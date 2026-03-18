/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x14005FBD0
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x140193CA4 (wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1401D5B20 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x14040B74C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14041D090 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x14044C810 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14044C8FC (wil_details_PopulateInitialConfiguredFeatureStates.c)
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

/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1400AE5D0
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x14018F71C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x14018F8E0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x14018F95C (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14018F9D0 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x1401C4078 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1401C4138 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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

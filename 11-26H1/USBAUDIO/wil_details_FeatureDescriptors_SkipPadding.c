/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x14000CC0C
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x140030128 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1400302F0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x14003036C (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400303E0 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x140043078 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14004313C (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}

/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x140051CCC
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x140077628 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1400777F0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14007786C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x140078078 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140078168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( a1 < wil_details_featureDescriptors_a )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}

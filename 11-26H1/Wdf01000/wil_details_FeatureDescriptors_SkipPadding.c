/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x140086154
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1400DA0C8 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1400DA290 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400DA31C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x1400E60AC (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1400E619C (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

const wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(
        const wil_details_FeatureDescriptor *p)
{
  while ( p < wil_details_featureDescriptors_z )
  {
    if ( p->featureStateCache )
      return p;
    p = (const wil_details_FeatureDescriptor *)((char *)p + 8);
  }
  return 0LL;
}

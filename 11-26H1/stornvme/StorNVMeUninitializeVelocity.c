/*
 * XREFs of StorNVMeUninitializeVelocity @ 0x140032144
 * Callers:
 *     DumpUninitialize @ 0x1400121C0 (DumpUninitialize.c)
 * Callees:
 *     <none>
 */

__int64 StorNVMeUninitializeVelocity()
{
  __int64 result; // rax

  if ( g_wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}

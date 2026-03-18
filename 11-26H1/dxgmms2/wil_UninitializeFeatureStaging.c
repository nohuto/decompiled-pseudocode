/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x14009BE70
 * Callers:
 *     DriverUnload @ 0x14004D040 (DriverUnload.c)
 *     DriverEntry @ 0x14012F078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
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

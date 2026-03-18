/*
 * XREFs of StorNVMeDriverUnload @ 0x1400320C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140032570 (_guard_dispatch_icall.c)
 */

__int64 StorNVMeDriverUnload()
{
  __int64 result; // rax

  result = ((__int64 (*)(void))StorPortDriverUnload)();
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

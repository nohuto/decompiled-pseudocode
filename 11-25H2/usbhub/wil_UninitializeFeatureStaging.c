/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x140077568
 * Callers:
 *     UsbhDriverUnload @ 0x14004FCB0 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  return result;
}

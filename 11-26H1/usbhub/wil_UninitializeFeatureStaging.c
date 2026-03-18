/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x14007863C
 * Callers:
 *     DriverEntry @ 0x14004F07C (DriverEntry.c)
 *     UsbhDriverUnload @ 0x140050180 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 0;
  return result;
}

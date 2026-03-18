/*
 * XREFs of CiDriverUnload @ 0x14000D390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1400043B0 (WPP_SF_.c)
 *     CsTerminate @ 0x14000D444 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  __int64 result; // rax

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  result = CsTerminate();
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

/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14004676C
 * Callers:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x140044CBC (Feature_EUSB2__private_IsEnabledFallback.c)
 *     Feature_O3BDH__private_IsEnabledFallback @ 0x140044D7C (Feature_O3BDH__private_IsEnabledFallback.c)
 *     Feature_RH1S__private_IsEnabledFallback @ 0x140044DD4 (Feature_RH1S__private_IsEnabledFallback.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140044E2C (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 *     Feature_UPD0__private_IsEnabledFallback @ 0x140044E84 (Feature_UPD0__private_IsEnabledFallback.c)
 *     Feature_USBEXSVPA__private_IsEnabledFallback @ 0x140044F48 (Feature_USBEXSVPA__private_IsEnabledFallback.c)
 *     Feature_USBEXSVPX__private_IsEnabledFallback @ 0x140044FA0 (Feature_USBEXSVPX__private_IsEnabledFallback.c)
 *     Feature_UXKTV__private_IsEnabledFallback @ 0x140044FF8 (Feature_UXKTV__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140046428 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400464B0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400465B8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  char v6; // di

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( (unsigned int)(a2 - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}

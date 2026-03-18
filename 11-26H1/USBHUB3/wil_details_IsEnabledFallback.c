/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140010680
 * Callers:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x14000C8B0 (Feature_EUSB2__private_IsEnabledFallback.c)
 *     Feature_RH1S__private_IsEnabledFallback @ 0x14000C908 (Feature_RH1S__private_IsEnabledFallback.c)
 *     Feature_RH5S__private_IsEnabledFallback @ 0x14000C960 (Feature_RH5S__private_IsEnabledFallback.c)
 *     Feature_U3RHDC__private_IsEnabledFallback @ 0x14000C9B8 (Feature_U3RHDC__private_IsEnabledFallback.c)
 *     Feature_UH3WET__private_IsEnabledFallback @ 0x140014BC8 (Feature_UH3WET__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140010074 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400103C8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140010624 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
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

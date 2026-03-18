/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1400144B8
 * Callers:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140012214 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback @ 0x1400230C8 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140014070 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140014220 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140014328 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
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
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}

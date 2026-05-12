/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140053138
 * Callers:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x14005C460 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback @ 0x14005D19C (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback.c)
 *     Feature_BrFixSteelixUfsIceRegression__private_IsEnabledFallback @ 0x140070B84 (Feature_BrFixSteelixUfsIceRegression__private_IsEnabledFallback.c)
 *     Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledFallback @ 0x140072344 (Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledFallback.c)
 *     Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledFallback @ 0x140078B64 (Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledFallback.c)
 *     Feature_SteelixSglModeFix__private_IsEnabledFallback @ 0x140078BBC (Feature_SteelixSglModeFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledFallback @ 0x140097FA8 (Feature_Servicing_perLunLockingEnable__private_IsEnabledFallback.c)
 *     Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback @ 0x1400AE1B4 (Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback.c)
 *     Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback @ 0x1400AE20C (Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback.c)
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledFallback @ 0x1400B27CC (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledFallback.c)
 *     Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback @ 0x1400B2824 (Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback.c)
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback @ 0x1400B287C (Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback.c)
 *     Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledFallback @ 0x1400E3254 (Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledFallback.c)
 *     Feature_DlrmFixInitRace__private_IsEnabledFallback @ 0x14012D568 (Feature_DlrmFixInitRace__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14006F9AC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14006FB24 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006FC2C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
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
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}

/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1800E3764
 * Callers:
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback @ 0x1800E370C (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback.c)
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback @ 0x1800E3720 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x1801212D0 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
 *     Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback @ 0x1801226C0 (Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback.c)
 *     Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback @ 0x1801253A0 (Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback.c)
 *     Feature_Arm64VcRedistRedirect__private_IsEnabledFallback @ 0x1801264D8 (Feature_Arm64VcRedistRedirect__private_IsEnabledFallback.c)
 *     Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback @ 0x180141DFC (Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback.c)
 *     Feature_ModernWpp__private_IsEnabledFallback @ 0x180158E40 (Feature_ModernWpp__private_IsEnabledFallback.c)
 *     Feature_2609059128__private_IsEnabledFallback @ 0x180159B00 (Feature_2609059128__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800E3800 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800E3C54 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800E3FA4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}

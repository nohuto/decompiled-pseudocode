/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1800E4E84
 * Callers:
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback @ 0x1800E4E2C (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback.c)
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback @ 0x1800E4E40 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback.c)
 *     Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback @ 0x180122460 (Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledFallback.c)
 *     Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback @ 0x180125110 (Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback.c)
 *     Feature_Arm64VcRedistRedirect__private_IsEnabledFallback @ 0x180126248 (Feature_Arm64VcRedistRedirect__private_IsEnabledFallback.c)
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback @ 0x18013B714 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback.c)
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback @ 0x18013B75C (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback.c)
 *     Feature_1811147066__private_IsEnabledFallback @ 0x18013F1D4 (Feature_1811147066__private_IsEnabledFallback.c)
 *     Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback @ 0x180141CFC (Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback.c)
 *     Feature_ModernWpp__private_IsEnabledFallback @ 0x180158D10 (Feature_ModernWpp__private_IsEnabledFallback.c)
 *     Feature_2609059128__private_IsEnabledFallback @ 0x1801599D0 (Feature_2609059128__private_IsEnabledFallback.c)
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback @ 0x18015DD6C (Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800E4F20 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800E5174 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800E54C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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

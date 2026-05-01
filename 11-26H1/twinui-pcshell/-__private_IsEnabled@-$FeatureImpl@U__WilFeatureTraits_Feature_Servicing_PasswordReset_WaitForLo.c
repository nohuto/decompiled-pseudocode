/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost@@@details@wil@@QEAA_NXZ @ 0x1803E6FA0
 * Callers:
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x180241300 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 *     ?v_ShutdownServices@LockScreenDirectorServiceProviderImpl@@MEAAJPEAUIProfferService@@@Z @ 0x180241580 (-v_ShutdownServices@LockScreenDirectorServiceProviderImpl@@MEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803E6720 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803E6C30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHos.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}

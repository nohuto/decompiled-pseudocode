/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x18048EBB8
 * Callers:
 *     ?Show@AccessibilityExperienceManager@@UEAAJH@Z @ 0x180251BC0 (-Show@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     _lambda_c3975a5b4ee2ba5280707fbe38be1371_::operator() @ 0x18048C2D4 (_lambda_c3975a5b4ee2ba5280707fbe38be1371_--operator().c)
 *     _lambda_fa553258777e9fe890f937adf5270d38_::operator() @ 0x18048C44C (_lambda_fa553258777e9fe890f937adf5270d38_--operator().c)
 *     ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18048D8B0 (-SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x18048DAB0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z.c)
 *     ?evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ @ 0x18048ECC4 (-evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18048CBEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18048D5FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}

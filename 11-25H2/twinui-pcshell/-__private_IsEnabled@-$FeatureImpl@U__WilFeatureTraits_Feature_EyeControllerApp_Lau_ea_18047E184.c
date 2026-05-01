/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip@@@details@wil@@QEAA_NXZ @ 0x18047E184
 * Callers:
 *     _lambda_bf5d83fa803ad7d3f77024964d972d50_::operator() @ 0x18047B908 (_lambda_bf5d83fa803ad7d3f77024964d972d50_--operator().c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18047D0FC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18047D808 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18047BFBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_LaunchT.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18047CBC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}

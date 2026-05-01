/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAA_NXZ @ 0x18047E108
 * Callers:
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180258A78 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180258B60 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180258EE0 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180259094 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     _lambda_593fbb47aeab52a54eb78728611100af_::operator() @ 0x18047B5CC (_lambda_593fbb47aeab52a54eb78728611100af_--operator().c)
 *     _lambda_5c1050bbbdc103999695eee0b16b4eb6_::operator() @ 0x18047B6F8 (_lambda_5c1050bbbdc103999695eee0b16b4eb6_--operator().c)
 *     _lambda_adc2f07ce144224db42416a33fd3cec5_::operator() @ 0x18047B810 (_lambda_adc2f07ce144224db42416a33fd3cec5_--operator().c)
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18047C630 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18047C6F0 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18047D0FC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18047DE00 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 *     ?evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ @ 0x18047E294 (-evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18047BED8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18047CB3C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

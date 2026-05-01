/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NXZ @ 0x1803B2844
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180248C00 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A9050 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AF404 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}

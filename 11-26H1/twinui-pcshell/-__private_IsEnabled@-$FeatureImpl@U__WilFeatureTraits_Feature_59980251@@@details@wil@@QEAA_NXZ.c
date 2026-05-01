/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAA_NXZ @ 0x180504E64
 * Callers:
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804F8EF4 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180500E90 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180501850 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB69C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180502BDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}

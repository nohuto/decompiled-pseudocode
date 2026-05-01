/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAA_NXZ @ 0x180491390
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18025AFA8 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18048FD7C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180490570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

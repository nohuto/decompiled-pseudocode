/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAA_NXZ @ 0x1804A1ED0
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180254148 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806ACFE4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BCC9C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804A0828 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804A1090 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}

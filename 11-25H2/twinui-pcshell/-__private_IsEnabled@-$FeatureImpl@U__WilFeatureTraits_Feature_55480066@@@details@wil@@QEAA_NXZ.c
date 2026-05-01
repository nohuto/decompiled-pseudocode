/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ @ 0x1805B720C
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805A4A04 (--$serialize@Vinput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVinpu.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805A5AF8 (--$serialize@Voutput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVout.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805B2880 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805B2880.c)
 *     ?evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ @ 0x1805B8030 (-evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805AC1DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805B2058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55480066>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55480066>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55480066>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

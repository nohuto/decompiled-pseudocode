/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAA_NXZ @ 0x18063657C
 * Callers:
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x1806336E0 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637760 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637CE0 (-unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180624130 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180633D40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}

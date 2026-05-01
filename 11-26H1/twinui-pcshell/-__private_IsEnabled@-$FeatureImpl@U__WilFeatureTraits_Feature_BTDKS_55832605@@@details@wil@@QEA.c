/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEAA_NXZ @ 0x180636678
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180632CA0 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806243AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180633EF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEAAX_NW4Re.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BTDKS_55832605>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BTDKS_55832605>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BTDKS_55832605>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}

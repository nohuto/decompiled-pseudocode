/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@QEAA_NXZ @ 0x180610A30
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x18060DB50 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805FF1E0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFix.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18060E9D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

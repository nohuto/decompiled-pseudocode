/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@QEAA_NXZ @ 0x1803C65C4
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803C6000 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803C25C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebuggin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803C4EAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}

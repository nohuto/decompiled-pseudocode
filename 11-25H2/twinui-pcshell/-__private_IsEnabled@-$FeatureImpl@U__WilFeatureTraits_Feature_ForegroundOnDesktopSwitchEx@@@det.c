/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx@@@details@wil@@QEAA_NXZ @ 0x1804529A8
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180451928 (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180451CB8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ForegroundOnDesktopSwitc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18045209C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}

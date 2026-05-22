/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix@@@details@wil@@QEAA_NXZ @ 0x180181664
 * Callers:
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV?$optional@W4GameInputGamepadButtons@@@std@@0@Z @ 0x18017D30C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV-$optional@W4GameInputGamepadButtons@@@st.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017F5A0 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18017DE60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_Deskt_ea_18017DE60.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017F480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix@@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::ReportUsage(
    (__int64)a1,
    v5 & 1,
    v3);
  return v2;
}

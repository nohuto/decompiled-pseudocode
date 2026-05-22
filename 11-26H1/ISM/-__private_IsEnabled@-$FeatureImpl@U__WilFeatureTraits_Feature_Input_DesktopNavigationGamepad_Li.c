/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix@@@details@wil@@QEAA_NXZ @ 0x1800CE0CC
 * Callers:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180063490 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C88 (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010A0B0 (-SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CD724 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationG.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CDF80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::ReportUsage(
    (__int64)a1,
    v5 & 1,
    v3);
  return v2;
}

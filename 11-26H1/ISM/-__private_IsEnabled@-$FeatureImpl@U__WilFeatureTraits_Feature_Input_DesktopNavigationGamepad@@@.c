/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801373B0
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x18002940C (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180085630 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180087280 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?CanNavigationModeBeEnabled@ControllerNavigationManager@@SAHXZ @ 0x1801791EC (-CanNavigationModeBeEnabled@ControllerNavigationManager@@SAHXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017E658 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x18017EEC0 (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x1801806E8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180180874 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x1801809D8 (-UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180135B40 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_Deskt_ea_180135B40.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180136B40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::ReportUsage(
    (__int64)a1,
    v5 & 1,
    v3);
  return v2;
}

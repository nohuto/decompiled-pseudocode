/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802B7828
 * Callers:
 *     ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x1800A2768 (--0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAU.c)
 *     ?RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ @ 0x180204A28 (-RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ.c)
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027AD34 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x180296E44 (--0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     ??$?0W4EventOptions@wil@@$$V@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x18032538C (--$-0W4EventOptions@wil@@$$V@-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAX.c)
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180463F20 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     ?DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x180552AE0 (-DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1805681E0 (-RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PE.c)
 *     _lambda_0ced3948e50d96c4a590f48e25a32e04_::_lambda_invoker_cdecl_ @ 0x180595360 (_lambda_0ced3948e50d96c4a590f48e25a32e04_--_lambda_invoker_cdecl_.c)
 *     ?XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ @ 0x1805B5310 (-XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1805F9D94 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805FB90C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ??0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z @ 0x180609A3C (--0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z.c)
 *     ?XamlHostThreadStartProc@SharedDesktopBackgroundVisualHost@@AEAAXXZ @ 0x18060F1DC (-XamlHostThreadStartProc@SharedDesktopBackgroundVisualHost@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802B7890 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
        wil::details **a1,
        char a2,
        const WCHAR *a3)
{
  void *v4; // rdx
  wil::details *Event; // rbx
  unsigned int v6; // r8d
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Event = (wil::details *)CreateEventExW(0LL, a3, a2 & 3, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(retaddr, v4, v6, v7);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    a1,
    Event);
}

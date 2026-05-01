/*
 * XREFs of ??1?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1800A9998
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180102AD4 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x1801D8228 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1801E1EB8 (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$5 @ 0x1806AC117 (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$5.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$7 @ 0x1806B2B40 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$7.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$6 @ 0x1806B2F5F (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$6.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$6 @ 0x1806B8DFF (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x1801CB188 (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 */

__int64 __fastcall __1__factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v3 = *a1;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v3);
    result = _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
               a1,
               &v3);
  }
  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  return result;
}

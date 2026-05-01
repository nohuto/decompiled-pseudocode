/*
 * XREFs of ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18009B69C
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x18017D8C0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 * Callees:
 *     ??1?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x18002ADDC (--1-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x18009CCA8 (--1-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??1?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x1800A0720 (--1-$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8t.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall XamlAltTabViewController::~XamlAltTabViewController(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 43);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(a1[42]);
  __1__factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAA_XZ(a1 + 40);
  __1__event_revoker_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt___MP8type___abi_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ(a1 + 38);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(a1 + 34);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(a1 + 30);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(a1 + 26);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(a1 + 22);
  XamlBaseViewController::~XamlBaseViewController(a1 + 1);
}

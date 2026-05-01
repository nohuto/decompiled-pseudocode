/*
 * XREFs of ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x1801D8228
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ @ 0x180698290 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ.c)
 * Callees:
 *     ??1?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180020CB4 (--1-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1800A9998 (--1-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x1801D82D0 (--1-$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall GuidedSnapAssistViewController::~GuidedSnapAssistViewController(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[49];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 47));
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(a1[45]);
  __1__factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAA_XZ(a1 + 43);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>(a1 + 38);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>((__int64)(a1 + 34));
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>((__int64)(a1 + 30));
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>((__int64)(a1 + 26));
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>((__int64)(a1 + 22));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 21);
  XamlBaseViewController::~XamlBaseViewController(a1 + 1);
}

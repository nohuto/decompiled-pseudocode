/*
 * XREFs of ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x1806990D0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x1806998A0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180694F1C (--1-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Composa.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopSwitcherController::~VirtualDesktopSwitcherController(__int64 *a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>((__int64)(a1 + 23));
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(a1[22]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 21);
  XamlBaseViewController::~XamlBaseViewController(a1 + 1);
}

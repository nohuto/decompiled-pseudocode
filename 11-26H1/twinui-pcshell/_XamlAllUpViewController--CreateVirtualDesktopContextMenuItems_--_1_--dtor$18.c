/*
 * XREFs of _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$18 @ 0x180707BAB
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)(a2 + 72));
  *(_QWORD *)(a2 + 72) = 0LL;
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)(a2 + 56));
}

/*
 * XREFs of ?CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVVirtualDesktopBarElementViewModel@2345@PE$AAUIVirtualDesktopDataSource@Multitasking@4Internal@Windows@@PE$AAUIVirtualDesktopController@849Windows@@W4SwitchItemCloseButtonBehavior@2345@VRect@Foundation@Windows@@_N4PE$AAVString@Platform@@@Z @ 0x1806ACF44
 * Callers:
 *     ??0VirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIVirtualDesktopDataSource@Multitasking@3Internal@Windows@@PE$AAUIVirtualDesktopController@6378@W4SwitchItemCloseButtonBehavior@1234@VRect@Foundation@8@_N4PE$AAVString@Platform@@@Z @ 0x1806ABAC0 (--0VirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsIn_ea_1806ABAC0.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelFactory::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx

  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, a3);
  __abi_ThrowIfFailed(v3);
  v4 = __abi_winrt_ptr_ctor(0LL);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(0LL);
  return v4;
}

/*
 * XREFs of ??$make_unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@P8SwitcherControlBase@2345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVRoutedEventHandler@Xaml@UI@9@@ZP862345@E$AAAXV789@@ZVRoutedEventHandler@Xaml@UI@9@@details@wil@@YA?AV?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAVTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@P8SwitcherControlBase@4567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVRoutedEventHandler@Xaml@UI@Windows@@@ZP884567@E$AAAXV9Foundation@Windows@@@Z1@Z @ 0x1801AD8DC
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x1801ACEE0 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherControlBase::*)(Windows::UI::Xaml::RoutedEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherControlBase::*)(Windows::Foundation::EventRegistrationToken)__gc ,Windows::UI::Xaml::RoutedEventHandler>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *),
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rdi
  int v10; // eax
  __int128 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h]

  v9 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v10 = (**a2)(a2, &_uuidof__AVSwitcherControlBase_Switcher_Experiences_ComposableShell_WindowsInternal__, &v13);
    __abi_ThrowIfFailed(v10);
    v9 = v13;
  }
  v15 = v9;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))a3)(v9 + *(int *)(a3 + 8), &v14, a5);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  *(_QWORD *)&v12 = *(_QWORD *)a4;
  DWORD2(v12) = *(_DWORD *)(a4 + 8) + 8;
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 8) = Platform::Details::GetWeakReference(a2);
  *(_OWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 32) = 0LL;
  return a1;
}

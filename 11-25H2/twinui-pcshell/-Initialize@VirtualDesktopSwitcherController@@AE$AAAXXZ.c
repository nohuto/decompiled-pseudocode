/*
 * XREFs of ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806991E0
 * Callers:
 *     ?Make@VirtualDesktopSwitcherController@@SAPE$AAV1@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806993D0 (-Make@VirtualDesktopSwitcherController@@SAPE$AAV1@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtual.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??4?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18023A84C (--4-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Composa.c)
 *     ??$make_unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1802B8A20 (--$make_unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Comp.c)
 *     ??1?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180694F1C (--1-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Composa.c)
 *     ??$?0VVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@3Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z @ 0x180698E80 (--$-0VVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualD.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopSwitcherController::Initialize(__int64 a1)
{
  void *v2; // rax
  __int64 *v3; // rax
  __int128 v5; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *(__fastcall *v6)(__int64, _QWORD *, __int64); // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+48h] [rbp-40h]
  _BYTE v8[56]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+90h] [rbp+8h]

  v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v9 = WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler(
         (__int64)v2,
         a1);
  *(_QWORD *)&v5 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::DismissAnimated;
  DWORD2(v5) = 0;
  v6 = _add__Q__IVirtualDesktopBarElementViewModelPublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__VirtualDesktopInvoked_VirtualDesktopBarElementViewModel_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVVirtualDesktopInvokedEventHandler_2345__Z;
  v7 = 0;
  v3 = (__int64 *)wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler>(
                    (__int64)v8,
                    *(_QWORD *)(a1 + 176),
                    (__int64)&v6,
                    &v5,
                    v9);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::operator=(
    (__int64 *)(a1 + 184),
    v3);
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>((__int64)v8);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
}

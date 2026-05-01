/*
 * XREFs of ?add@SwitchItemContextMenuRequested@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuRequestedHandler@3456@@Z @ 0x1802B6C94
 * Callers:
 *     ??$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuRequestedHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuRequestedHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1802B6C20 (--$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@Compos_ea_1802B6C20.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuRequested::add(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 112LL))(a1, a3, a2);
  __abi_ThrowIfFailed(v4);
  return a2;
}

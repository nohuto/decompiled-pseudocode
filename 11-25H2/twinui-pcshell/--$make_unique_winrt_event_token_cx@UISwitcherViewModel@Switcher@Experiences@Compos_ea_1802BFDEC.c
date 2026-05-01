/*
 * XREFs of ??$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuRequestedHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuRequestedHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1802BFDEC
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180101CE8 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x18067B1C0 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?add@SwitchItemContextMenuRequested@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemContextMenuRequestedHandler@3456@@Z @ 0x1802BFE5C (-add@SwitchItemContextMenuRequested@ISwitcherViewModel@Switcher@Experiences@ComposableShell@Wind.c)
 */

_QWORD *wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v8; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuRequested::add(
    a2,
    (__int64 *)va,
    v8);
  *a1 = v6;
  a1[1] = 0LL;
  a1[1] = Platform::Details::GetWeakReference(a2);
  a1[2] = WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuRequested::remove;
  a1[3] = 0LL;
  return a1;
}

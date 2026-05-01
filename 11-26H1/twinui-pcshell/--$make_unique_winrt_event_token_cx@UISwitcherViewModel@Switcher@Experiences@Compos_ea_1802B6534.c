/*
 * XREFs of ??$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVTaskViewContainerNavigationEventHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVTaskViewContainerNavigationEventHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1802B6534
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x1801ACEE0 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x1806A1F80 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?add@TaskViewContainerNavigation@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVTaskViewContainerNavigationEventHandler@3456@@Z @ 0x1802B65A8 (-add@TaskViewContainerNavigation@ISwitcherViewModel@Switcher@Experiences@ComposableShell@Windows.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler>(
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
  WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::TaskViewContainerNavigation::add(
    a2,
    (__int64 *)va,
    v8);
  *a1 = v6;
  a1[1] = 0LL;
  a1[1] = Platform::Details::GetWeakReference(a2);
  a1[2] = WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::TaskViewContainerNavigation::remove;
  a1[3] = 0LL;
  return a1;
}

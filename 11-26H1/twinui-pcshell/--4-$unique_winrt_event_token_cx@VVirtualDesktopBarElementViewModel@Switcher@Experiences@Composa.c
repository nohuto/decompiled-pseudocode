/*
 * XREFs of ??4?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18022C85C
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x1801ACEE0 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806C0C70 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     ??$swap_wil@VWeakReference@Platform@@@wistd@@YAXAEAVWeakReference@Platform@@0@Z @ 0x18009CC54 (--$swap_wil@VWeakReference@Platform@@@wistd@@YAXAEAVWeakReference@Platform@@0@Z.c)
 *     ?reset@?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1806BE4F0 (-reset@-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Com.c)
 */

__int64 *__fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::reset();
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    wistd::swap_wil<Platform::WeakReference>((Platform::WeakReference *)(a1 + 1), (Platform::WeakReference *)(a2 + 1));
    v5 = *((_OWORD *)a1 + 1);
    *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a2 + 1) = v5;
    v6 = a1[4];
    a1[4] = a2[4];
    a2[4] = v6;
  }
  return a1;
}

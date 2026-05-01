/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x1806BC634
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x1801ACEE0 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x1806BC65C (--1TaskViewFrame@@UEAA@XZ.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x1806C0B64 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806C0C70 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18009D9D0 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?reset@?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1806BE4F0 (-reset@-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Com.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}

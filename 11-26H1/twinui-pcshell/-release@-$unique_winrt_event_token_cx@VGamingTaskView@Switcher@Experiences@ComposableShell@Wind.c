/*
 * XREFs of ?release@?$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA?AVEventRegistrationToken@Foundation@Windows@@XZ @ 0x1806A4968
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1802B7728 (-reset@-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@Wind.c)
 *     ?reset@?$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1806A4AAC (-reset@-$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@Window.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18009D9D0 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::GamingTaskView>::release(
        __int64 a1,
        _QWORD *a2)
{
  __int128 v5; // [rsp+20h] [rbp-18h]

  *a2 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
  *(_QWORD *)&v5 = 0LL;
  DWORD2(v5) = 0;
  *(_OWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 32) = 0LL;
  return a2;
}

/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180679CFC
 * Callers:
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x180679D7C (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x18067B1C0 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180021088 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?reset@?$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18067DBF8 (-reset@-$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@Window.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::GamingTaskView>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::GamingTaskView>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::GamingTaskView>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}

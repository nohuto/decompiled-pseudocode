/*
 * XREFs of ??1?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x18009CCA8
 * Callers:
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18009B69C (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x18009B724 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x1806A08D4 (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x1806A1F80 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x1806BC65C (--1TaskViewFrame@@UEAA@XZ.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$1 @ 0x1806D0F7D (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$1.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x1806D0F96 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x1806D0FAF (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x1806D0FC8 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x1806D122A (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x1806D1243 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x1806D125C (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$5 @ 0x1806D1275 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$5.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18009D124 (-reset@-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18009D9D0 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}

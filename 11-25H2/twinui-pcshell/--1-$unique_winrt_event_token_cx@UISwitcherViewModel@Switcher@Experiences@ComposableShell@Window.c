/*
 * XREFs of ??1?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180020CB4
 * Callers:
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x1801D8228 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1801E1EB8 (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x180679D7C (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x18067B1C0 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180694F44 (--1TaskViewFrame@@UEAA@XZ.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$1 @ 0x1806AC09A (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$1.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x1806AC0B3 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x1806AC0CC (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x1806AC0E5 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x1806B2AC3 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x1806B2ADC (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x1806B2AF5 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$5 @ 0x1806B2B0E (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$5.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180020FEC (-reset@-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180021088 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}

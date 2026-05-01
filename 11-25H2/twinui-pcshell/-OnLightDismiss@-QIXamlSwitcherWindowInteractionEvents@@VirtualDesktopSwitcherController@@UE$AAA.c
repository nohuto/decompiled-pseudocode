/*
 * XREFs of ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAXXZ @ 0x180699458
 * Callers:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WBI@E$AAAXXZ @ 0x180699470 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WBI@E$.c)
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@VirtualDesktopSwitcherController@@WBA@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180699480 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@VirtualDesktopSwitcherController@@WBA@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__VirtualDesktopSwitcherController__UE_AAAXXZ(
        __int64 a1)
{
  VirtualDesktopSwitcherController::DismissVirtualDesktopSwitcherHost(a1);
}

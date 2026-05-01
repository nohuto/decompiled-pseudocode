/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAX_N_K@Z @ 0x1806C0C40
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WBI@E$AAAX_N_K@Z @ 0x1806C0C60 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktop_ea_1806C0C60.c)
 * Callees:
 *     ?DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806C0BAC (-DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 */

void __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__VirtualDesktopSwitcherController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  if ( !a2 )
    VirtualDesktopSwitcherController::DismissVirtualDesktopSwitcherHost(a1);
}

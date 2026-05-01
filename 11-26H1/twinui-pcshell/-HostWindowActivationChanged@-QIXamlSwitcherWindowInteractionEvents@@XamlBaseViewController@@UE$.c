/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAX_N_K@Z @ 0x1806C17A0
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAX_N_K@Z @ 0x1806B0870 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA.c)
 * Callees:
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180218FC4 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 */

void __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  if ( !a2 )
    XamlBaseViewController::DismissView(a1);
}

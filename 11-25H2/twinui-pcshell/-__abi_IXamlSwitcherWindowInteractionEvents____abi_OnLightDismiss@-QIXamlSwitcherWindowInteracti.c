/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJXZ @ 0x180689EE0
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJXZ @ 0x180689F30 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss@-QIXamlSwitcherWi_ea_180689F30.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801D1778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJXZ(
        __int64 a1)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 136));
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 88LL))(a1 + 16);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJI@Z @ 0x1806B1230
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJI@Z @ 0x1806B1290 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate@-QIXamlSwitc_ea_1806B1290.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x18009E9CC (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJI_Z(
        __int64 a1,
        unsigned int a2)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 136));
  try
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 96LL))(a1 + 16, a2);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

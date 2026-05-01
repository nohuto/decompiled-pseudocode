/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_GamingAccessibilityNexusChordPressed@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B1090
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_GamingAccessibilityNexusChordPressed@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B10F0 (-__abi_IXamlMultitaskingViewController____abi_GamingAccessibilityNexusChordPressed@_ea_1806B10F0.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x18009E9CC (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_GamingAccessibilityNexusChordPressed__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 136));
  try
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 8) + 136LL))(a1 + 8, a2);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

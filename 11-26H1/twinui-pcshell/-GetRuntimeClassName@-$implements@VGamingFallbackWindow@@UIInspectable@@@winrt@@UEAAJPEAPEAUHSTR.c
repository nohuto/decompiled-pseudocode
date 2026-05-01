/*
 * XREFs of ?GetRuntimeClassName@?$implements@VGamingFallbackWindow@@UIInspectable@@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804FD410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<GamingFallbackWindow,IInspectable>::GetRuntimeClassName(__int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetRuntimeClassName(a1 + 8);
}

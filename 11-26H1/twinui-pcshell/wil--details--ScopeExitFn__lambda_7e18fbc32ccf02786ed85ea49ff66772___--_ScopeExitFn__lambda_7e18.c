/*
 * XREFs of wil::details::ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___::_ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___ @ 0x1802C580C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor$1 @ 0x1806DE6EF (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--CreateWindow_--_1_--dtor$1.c)
 * Callees:
 *     ?DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801E0340 (-DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___::_ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(*(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)a1);
  }
}

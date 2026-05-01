/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor$4 @ 0x1806DE713
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 128));
  }
}

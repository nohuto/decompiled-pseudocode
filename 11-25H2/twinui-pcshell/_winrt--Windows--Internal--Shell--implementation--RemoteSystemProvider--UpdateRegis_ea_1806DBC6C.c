/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData_::_1_::dtor$1 @ 0x1806DBC6C
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 64));
  }
}

/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils_winrt::Windows::Internal::Shell::INetworkConnectionUtils_::IsNetworkConnected_::_1_::dtor$1 @ 0x180705768
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils_winrt::Windows::Internal::Shell::INetworkConnectionUtils_::IsNetworkConnected_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 72));
  }
}

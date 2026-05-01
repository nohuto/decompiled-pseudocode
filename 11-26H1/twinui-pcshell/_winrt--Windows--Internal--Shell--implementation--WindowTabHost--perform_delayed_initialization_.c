/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::perform_delayed_initialization_::_1_::dtor$7 @ 0x1806F5C9B
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::perform_delayed_initialization_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~4u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 128));
  }
}

/*
 * XREFs of _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$11 @ 0x180707C8B
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlAllUpViewController::_IXamlMultitaskingViewController_::GetContextMenu_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 184));
  }
}

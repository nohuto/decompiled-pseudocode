/*
 * XREFs of _XamlBaseViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$3 @ 0x1806D91BF
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlBaseViewController::_IXamlMultitaskingViewController_::InvokeSwitchItem_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~1u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 32));
  }
}

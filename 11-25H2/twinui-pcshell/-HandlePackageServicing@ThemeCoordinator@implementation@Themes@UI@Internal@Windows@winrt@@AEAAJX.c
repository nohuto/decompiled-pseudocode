/*
 * XREFs of ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1805E1E18
 * Callers:
 *     ?RefreshTheme@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHXZ @ 0x1805E2430 (-RefreshTheme@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThe.c)
 * Callees:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800F1F4C (-InitUserConfig@Theming@@YAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicing(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        __int64 a2)
{
  Theming::InitUserConfig(this, a2);
  return 0LL;
}

/*
 * XREFs of ??_GThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805E13BC
 * Callers:
 *     ??_EThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@WEA@EAAPEAXI@Z @ 0x1805E1330 (--_EThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x18029A2CC (--1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`scalar deleting destructor'(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        char a2)
{
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::~ThemeCoordinator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x140);
  return this;
}

/*
 * XREFs of ?SetParentWallpaperHwnd@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHH_K@Z @ 0x180607460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x18060637C (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180606450 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?SetParentWallpaperHwnd@SharedDesktopBackgroundVisualHost@@QEAAX_K@Z @ 0x18060BB2C (-SetParentWallpaperHwnd@SharedDesktopBackgroundVisualHost@@QEAAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator>::SetParentWallpaperHwnd(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 BackgroundHostForType; // rax
  __int64 result; // rax
  SharedDesktopBackgroundVisualHost *v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = (a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64);
  try
  {
    BackgroundHostForType = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType(
                              v4,
                              a2,
                              1);
    winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(
      v4,
      &v7,
      BackgroundHostForType);
    SharedDesktopBackgroundVisualHost::SetParentWallpaperHwnd(v7, a3);
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}

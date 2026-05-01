/*
 * XREFs of ?SetParentWallpaperHwnd@SharedDesktopBackgroundVisualHost@@QEAAX_K@Z @ 0x18060BB2C
 * Callers:
 *     ?SetParentWallpaperHwnd@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHH_K@Z @ 0x180607460 (-SetParentWallpaperHwnd@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi.c)
 *     ?SetParentWallpaperHwnd@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAH_K@Z @ 0x18060BB00 (-SetParentWallpaperHwnd@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundV.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedDesktopBackgroundVisualHost::SetParentWallpaperHwnd(
        SharedDesktopBackgroundVisualHost *this,
        HWND a2)
{
  HWND v2; // rcx

  *((_QWORD *)this + 33) = a2;
  v2 = (HWND)*((_QWORD *)this + 34);
  if ( v2 )
    SetParent(v2, a2);
}

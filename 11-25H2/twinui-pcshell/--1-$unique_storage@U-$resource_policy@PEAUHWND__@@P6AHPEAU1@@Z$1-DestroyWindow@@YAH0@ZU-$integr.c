/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180066BE8
 * Callers:
 *     ??1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800668F0 (--1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x180066D7C (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180241BEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x18037FD0C (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x180396A50 (--1CInsightsExperienceManager@@EEAA@XZ.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1803BE024 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803C6FC8 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ??1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180444B7C (--1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UE.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x180489180 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804A5A48 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x18059B65C (--1WindowDragInputProvider@@UEAA@XZ.c)
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x1805E10CC (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 *     ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x18060F7BC (-TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(
        HWND *a1)
{
  HWND v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DestroyWindow(v1);
  return result;
}

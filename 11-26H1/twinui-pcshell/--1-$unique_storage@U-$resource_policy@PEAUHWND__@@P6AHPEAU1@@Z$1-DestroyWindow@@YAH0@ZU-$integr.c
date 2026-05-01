/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800254EC
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800251E0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1800252F0 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180025510 (--1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x180387E2C (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x18039F084 (--1CInsightsExperienceManager@@EEAA@XZ.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1803C70EC (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803D09E0 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ??1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18045124C (--1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UE.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x180499D68 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804B6EA4 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x1805BF8F8 (--1WindowDragInputProvider@@UEAA@XZ.c)
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x180605CE8 (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 *     ??1_lambda_47165361db58358e4b915b09b8be8c40_@@QEAA@XZ @ 0x180622CDC (--1_lambda_47165361db58358e4b915b09b8be8c40_@@QEAA@XZ.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x180634D0C (-TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
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

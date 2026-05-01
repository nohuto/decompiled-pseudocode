/*
 * XREFs of ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18044215C
 * Callers:
 *     ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x1804415E4 (--0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 *     ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x1804416A0 (--0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal_ea_1804416A0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x1804414F8 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 *     winrt::Microsoft::UI::GetWindowFromWindowId @ 0x180442028 (winrt--Microsoft--UI--GetWindowFromWindowId.c)
 *     winrt::Microsoft::UI::GetWindowIdFromWindow @ 0x1804420A0 (winrt--Microsoft--UI--GetWindowIdFromWindow.c)
 *     ?Child@?$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x180442118 (-Child@-$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl.c)
 *     ?SiteBridge@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x180442B20 (-SiteBridge@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSour.c)
 *     ?WindowId@?$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x180442E3C (-WindowId@-$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@M.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Initialize(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 WindowIdFromWindow; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v4 = (__int64 *)winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *)&WindowIdFromWindow);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 56), v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&WindowIdFromWindow);
  WindowIdFromWindow = winrt::Microsoft::UI::GetWindowIdFromWindow((__int64 *)(a1 + 96));
  winrt::impl::consume_Windows_UI_Xaml_Controls_IBorder<winrt::Windows::UI::Xaml::Controls::IBorder>::Child(
    (__int64 *)(a1 + 56),
    &WindowIdFromWindow);
  v5 = winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::SiteBridge(
         a1 + 56,
         &WindowIdFromWindow);
  v6 = (__int64 *)winrt::impl::consume_Microsoft_UI_Content_IDesktopSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::WindowId(
                    v5,
                    &v9);
  *(_QWORD *)(a1 + 80) = winrt::Microsoft::UI::GetWindowFromWindowId(v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&WindowIdFromWindow);
  if ( *(_BYTE *)(a2 + 8) )
    SetWindowPos(*(HWND *)(a1 + 80), *(HWND *)a2, 0, 0, 0, 0, 0x213u);
  return ShowWindow(*(HWND *)(a1 + 80), 8);
}

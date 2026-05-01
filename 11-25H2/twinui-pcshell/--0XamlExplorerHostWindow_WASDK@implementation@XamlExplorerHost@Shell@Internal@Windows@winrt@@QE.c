/*
 * XREFs of ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180444888
 * Callers:
 *     ??$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x180444530 (--$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 *     ??$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x1804445B4 (--$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Interna_ea_1804445B4.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x1804414F8 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 *     winrt::Microsoft::UI::GetWindowFromWindowId @ 0x180442028 (winrt--Microsoft--UI--GetWindowFromWindowId.c)
 *     winrt::Microsoft::UI::GetWindowIdFromWindow @ 0x1804420A0 (winrt--Microsoft--UI--GetWindowIdFromWindow.c)
 *     ?Child@?$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x180442118 (-Child@-$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl.c)
 *     ?SiteBridge@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x180442B20 (-SiteBridge@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSour.c)
 *     ?WindowId@?$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x180442E3C (-WindowId@-$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@M.c)
 *     ??0?$producers_base@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@std@@@impl@winrt@@QEAA@XZ @ 0x180444854 (--0-$producers_base@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlExplorerHostWindow_WASDK(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this,
        int a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        int a4)
{
  const char *v8; // r9
  int v9; // edx
  int v10; // ecx
  int v11; // r14d
  int cy; // edi
  const char *v13; // r9
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 WindowIdFromWindow; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v21[4]; // [rsp+90h] [rbp-70h] BYREF
  WNDCLASSW WndClass; // [rsp+B0h] [rbp-50h] BYREF
  int v23; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v19[1] = this;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>((__int64)this);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = GetCurrentThreadId();
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"XamlExplorerHostIslandWindow_WASDK";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::WndProc;
  RegisterClassW(&WndClass);
  if ( *((_QWORD *)this + 5) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6C,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      v8);
  v9 = (int)*(float *)a3;
  v10 = (int)*((float *)a3 + 1);
  v11 = (int)*((float *)a3 + 2);
  cy = (int)*((float *)a3 + 3);
  CreateWindowInBand(
    a4 | 0x200000u,
    WndClass.lpszClassName,
    &LocaleName,
    0x80000000LL,
    v9,
    v10,
    v11,
    cy,
    0LL,
    0LL,
    WndClass.hInstance,
    this,
    a2);
  if ( !*((_QWORD *)this + 5) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x82,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      v13);
  v23 = 1;
  v21[0] = 13LL;
  v21[1] = &v23;
  v21[2] = 4LL;
  SetWindowCompositionAttribute(*((_QWORD *)this + 5), v21);
  SetPropW(*((HWND *)this + 5), L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(*((HWND *)this + 5), L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  v14 = (__int64 *)winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *)&WindowIdFromWindow);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 6, v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&WindowIdFromWindow);
  WindowIdFromWindow = *((_QWORD *)this + 5);
  WindowIdFromWindow = winrt::Microsoft::UI::GetWindowIdFromWindow(&WindowIdFromWindow);
  winrt::impl::consume_Windows_UI_Xaml_Controls_IBorder<winrt::Windows::UI::Xaml::Controls::IBorder>::Child(
    (__int64 *)this + 6,
    &WindowIdFromWindow);
  v15 = winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::SiteBridge(
          (__int64 *)this + 6,
          v19);
  v16 = winrt::impl::consume_Microsoft_UI_Content_IDesktopSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::WindowId(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v15,
          &v20);
  *((_QWORD *)this + 8) = winrt::Microsoft::UI::GetWindowFromWindowId(v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v19);
  SetWindowPos(*((HWND *)this + 8), 0LL, 0, 0, v11, cy, 0x56u);
  ShowWindow(*((HWND *)this + 5), 5);
  UpdateWindow(*((HWND *)this + 5));
  return this;
}

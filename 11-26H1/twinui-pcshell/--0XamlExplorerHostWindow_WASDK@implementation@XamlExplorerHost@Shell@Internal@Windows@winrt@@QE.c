/*
 * XREFs of ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180450ECC
 * Callers:
 *     ??$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x180450C48 (--$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 *     ??$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x180450CCC (--$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Interna_ea_180450CCC.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x18044DBE0 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 *     winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x18044E320 (winrt--Microsoft--UI--EnsureInteropImplLoaded.c)
 *     ?Child@?$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x18044E840 (-Child@-$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl.c)
 *     ?SiteBridge@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18044F228 (-SiteBridge@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSour.c)
 *     ?WindowId@?$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18044F568 (-WindowId@-$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@M.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlExplorerHostWindow_WASDK(
        HWND *this,
        __int64 a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        int a4)
{
  __int64 *v7; // r13
  const char *v8; // r9
  int v9; // r14d
  int cy; // r15d
  const char *v11; // r9
  __int64 *v12; // rax
  HWND v13; // rbx
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  int v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  int v21; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+88h] [rbp-78h]
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *v23; // [rsp+98h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v26[4]; // [rsp+B0h] [rbp-50h] BYREF
  WNDCLASSW WndClass; // [rsp+D0h] [rbp-30h] BYREF
  int v28; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v23 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)this;
  this[1] = (HWND)&winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK>::`vftable';
  this[2] = (HWND)&winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable>::`vftable';
  *this = (HWND)&Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  this[4] = (HWND)1;
  *this = (HWND)&winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  this[3] = (HWND)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  this[5] = 0LL;
  v7 = (__int64 *)(this + 6);
  this[6] = 0LL;
  *((_WORD *)this + 28) = 0;
  this[8] = 0LL;
  *((_DWORD *)this + 18) = GetCurrentThreadId();
  this[10] = 0LL;
  this[11] = 0LL;
  this[12] = 0LL;
  this[13] = 0LL;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"XamlExplorerHostIslandWindow_WASDK";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::WndProc;
  RegisterClassW(&WndClass);
  if ( this[5] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x76,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      v8);
  v9 = (int)*((float *)a3 + 2);
  cy = (int)*((float *)a3 + 3);
  CreateWindowInBand(a4 | 0x200000u, WndClass.lpszClassName, &pvData, 0x80000000LL);
  if ( !this[5] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8C,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      v11);
  v28 = 1;
  v26[0] = 13LL;
  v26[1] = &v28;
  v26[2] = 4LL;
  SetWindowCompositionAttribute(this[5], v26);
  SetPropW(this[5], L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(this[5], L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  v12 = (__int64 *)winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *)&v25);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v7, v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
  v13 = this[5];
  v25 = 0LL;
  winrt::Microsoft::UI::EnsureInteropImplLoaded();
  v21 = 0;
  v22 = 0LL;
  v14 = winrt::Microsoft::UI::s_impl(v13, &v25);
  winrt::check_hresult(&v19, v14, (__int64)&v21);
  v20 = v25;
  winrt::impl::consume_Windows_UI_Xaml_Controls_IBorder<winrt::Windows::UI::Xaml::Controls::IBorder>::Child(v7, &v20);
  v15 = winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::SiteBridge(
          v7,
          &v20);
  v16 = winrt::impl::consume_Microsoft_UI_Content_IDesktopSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::WindowId(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v15,
          &v24);
  v25 = 0LL;
  winrt::Microsoft::UI::EnsureInteropImplLoaded();
  v21 = 0;
  v22 = 0LL;
  v17 = ((__int64 (__fastcall *)(_QWORD, __int64 *))qword_1808DCA90)(*v16, &v25);
  winrt::check_hresult(&v19, v17, (__int64)&v21);
  this[8] = (HWND)v25;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
  SetWindowPos(this[8], 0LL, 0, 0, v9, cy, 0x56u);
  ShowWindow(this[5], 5);
  UpdateWindow(this[5]);
  return (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)this;
}

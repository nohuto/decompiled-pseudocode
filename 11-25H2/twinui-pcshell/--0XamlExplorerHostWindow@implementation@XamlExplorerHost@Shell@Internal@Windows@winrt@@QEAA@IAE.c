/*
 * XREFs of ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1801044EC
 * Callers:
 *     ??$create_and_initialize@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@impl@winrt@@YAPEAUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEAIAEBURect@Foundation@71@@Z @ 0x180103110 (--$create_and_initialize@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x180103544 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wind_ea_180103544.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1801035C4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800AADFC (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@Window@Xaml@UI@Windows@winrt@@SA@XZ @ 0x18010317C (-Current@Window@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ??$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowPrivate@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1801033B8 (--$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@i.c)
 *     ??0?$producers_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@std@@@impl@winrt@@QEAA@XZ @ 0x180103448 (--0-$producers_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windo.c)
 *     ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180103500 (-TransparentBackground@-$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1802893F8 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper@WinUICohabitationFunctions@@QEBAXPEAUIUnknown@@PEAUHWND__@@@Z @ 0x1802B4434 (-WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper@WinUICohabitationFunction.c)
 *     ?WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper@WinUICohabitationFunctions@@QEBAXPEAUIUnknown@@PEAPEAUHWND__@@@Z @ 0x1802B8B1C (-WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper@WinUICohabitationFuncti.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlExplorerHostWindow(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this,
        __int64 a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        int a4)
{
  const char *v7; // r9
  int v8; // esi
  int cy; // r14d
  __int64 v10; // rcx
  __int64 *v11; // rax
  struct IUnknown *v12; // rbx
  WinUICohabitationFunctions *v13; // rax
  WinUICohabitationFunctions *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v22[3]; // [rsp+98h] [rbp-68h] BYREF
  WNDCLASSW WndClass; // [rsp+B0h] [rbp-50h] BYREF
  int v24; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v18 = a2;
  v21[1] = (__int64)this;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>(
    (__int64)this,
    a2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = GetCurrentThreadId();
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"XamlExplorerHostIslandWindow";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::WndProc;
  RegisterClassW(&WndClass);
  if ( *((_QWORD *)this + 5) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow.cpp",
      v7);
  v8 = (int)*((float *)a3 + 2);
  cy = (int)*((float *)a3 + 3);
  CreateWindowInBand(
    a4 | 0x200000u,
    WndClass.lpszClassName,
    &LocaleName,
    0x80000000LL,
    (int)*(float *)a3,
    (int)*((float *)a3 + 1),
    v8,
    cy,
    0LL,
    0LL,
    WndClass.hInstance,
    this,
    v18);
  v10 = *((_QWORD *)this + 5);
  if ( !v10 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x86,
      (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow.cpp",
      (const char *)retaddr);
  v24 = 1;
  v22[0] = 13LL;
  v22[1] = &v24;
  v22[2] = 4LL;
  SetWindowCompositionAttribute(v10, v22);
  SetPropW(*((HWND *)this + 5), L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(*((HWND *)this + 5), L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  v11 = (__int64 *)winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *)&v20);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 6, v11);
  if ( v20 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
  v12 = (struct IUnknown *)*((_QWORD *)this + 6);
  v13 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper(
    v13,
    v12,
    *((HWND *)this + 5));
  v14 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper(
    v14,
    v12,
    (HWND *)this + 7);
  v15 = winrt::Windows::UI::Xaml::Window::Current(v21);
  winrt::impl::as<winrt::Windows::UI::Xaml::IWindowPrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v19,
    (__int64 (__fastcall ***)(_QWORD, void *, _QWORD **))*v15);
  if ( v21[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v21);
  winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(
    &v19,
    v16);
  SetWindowPos(*((HWND *)this + 7), 0LL, 0, 0, v8, cy, 0x56u);
  if ( v19 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
  return this;
}

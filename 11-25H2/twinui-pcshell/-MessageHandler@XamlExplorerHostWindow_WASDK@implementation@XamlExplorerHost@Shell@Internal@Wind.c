/*
 * XREFs of ?MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x1801ADF78
 * Callers:
 *     ?WndProc@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA_JQEAUHWND__@@I_K_J@Z @ 0x1801ADE80 (-WndProc@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEB_NAEBQEAUHWND__@@@winrt@@YA?A_PAEB_NAEBQEAUHWND__@@@Z @ 0x1800666C8 (--$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$?RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x1804443C0 (--$-RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::MessageHandler(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this,
        UINT a2,
        WPARAM a3,
        LPARAM a4)
{
  __int64 result; // rax
  LPARAM v9; // rax
  _QWORD *v10; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  bool v12[8]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    if ( a2 == 6 )
    {
      v12[0] = a3 != 0;
      if ( a3 )
        v9 = *((_QWORD *)this + 5);
      else
        v9 = a4;
      v11[1] = v9;
      v10 = winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,bool const &,HWND__ * const &>(
              v11,
              v12);
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>(
        (char *)this + 80,
        this,
        v10);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
      return DefWindowProcW(*((HWND *)this + 5), a2, a3, a4);
    }
    if ( a2 != 16 )
    {
      if ( a2 == 70 && (*(_BYTE *)(a4 + 32) & 1) == 0 )
        MoveWindow(*((HWND *)this + 8), 0, 0, *(_DWORD *)(a4 + 24), *(_DWORD *)(a4 + 28), 1);
      return DefWindowProcW(*((HWND *)this + 5), a2, a3, a4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (int)wil::details::in1diag3::Return_CaughtException(
                  retaddr,
                  (void *)0x59,
                  (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
                  (const char *)a4);
  }
  return result;
}

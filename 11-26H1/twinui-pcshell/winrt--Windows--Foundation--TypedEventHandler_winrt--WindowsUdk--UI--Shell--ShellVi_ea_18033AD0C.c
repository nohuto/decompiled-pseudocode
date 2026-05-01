/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9ee4d933fe310b4143213a3fe399024___ @ 0x18033AD0C
 * Callers:
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x180236268 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9ee4d933fe310b4143213a3fe399024___(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // r8
  __int64 *v5; // rcx

  v4 = operator new(0x20uLL);
  v4[2] = 1;
  *((_QWORD *)v4 + 2) = *a2;
  v5 = a2 + 1;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( v4 + 6 != (_DWORD *)(a2 + 1) )
  {
    *((_QWORD *)v4 + 3) = *v5;
    *v5 = 0LL;
  }
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = off_1807325D8;
  *a1 = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
  return a1;
}

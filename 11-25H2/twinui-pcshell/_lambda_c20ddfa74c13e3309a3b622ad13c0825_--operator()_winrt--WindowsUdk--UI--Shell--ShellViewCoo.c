/*
 * XREFs of _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_InitCoro$2_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180457850
 * Callers:
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180458210 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180458210.c)
 * Callees:
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x1804578C0 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--operator()_winrt--WindowsUdk--UI--Shell-_ea_1804578C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__InitCoro_2_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // r8

  *(_QWORD *)(a2 + 353) = a6;
  *(_QWORD *)(a2 + 361) = a4;
  v7 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 369) = v7;
  *(_QWORD *)a2 = lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__ResumeCoro_1_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[352] = 0;
  return lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__ResumeCoro_1_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_(a2);
}

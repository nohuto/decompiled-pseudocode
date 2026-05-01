/*
 * XREFs of ?RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ @ 0x1801375F0
 * Callers:
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1801373A4 (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

ATOM winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterClass(void)
{
  const char *v0; // r9
  const char *v1; // r9
  WNDCLASSEXW v3; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId = RegisterWindowMessageW(L"TabSwitch");
    if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x75,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        v0);
  }
  if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabTearOutMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabTearOutMessageId = RegisterWindowMessageW(L"TabTearOut");
    if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabTearOutMessageId )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x7B,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        v1);
  }
  memset_0(&v3, 0, sizeof(v3));
  v3.cbSize = 80;
  v3.lpfnWndProc = (WNDPROC)CWRLImpWndProc<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::s_WndProcBase;
  v3.hInstance = &_ImageBase;
  v3.lpszClassName = L"Windows.Internal.Shell.TabProxyWindow";
  v3.cbWndExtra = 8;
  return RegisterClassExW(&v3);
}

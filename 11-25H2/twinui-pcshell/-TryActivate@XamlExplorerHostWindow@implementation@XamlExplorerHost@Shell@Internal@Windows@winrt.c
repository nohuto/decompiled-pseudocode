/*
 * XREFs of ?TryActivate@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18009186C
 * Callers:
 *     ?TryActivate@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHXZ @ 0x180091840 (-TryActivate@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 * Callees:
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180065F8C (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::TryActivate(
        HWND *this)
{
  const char *v2; // r9
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)this);
  if ( !SetForegroundWindow(this[5]) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x139,
      (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow.cpp",
      (const char *)0x80070005LL,
      v3);
  if ( !SetFocus(this[7]) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x13A,
      (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow.cpp",
      v2);
}

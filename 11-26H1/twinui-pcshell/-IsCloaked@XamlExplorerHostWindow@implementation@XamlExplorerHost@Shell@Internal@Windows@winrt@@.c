/*
 * XREFs of ?IsCloaked@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180450290
 * Callers:
 *     ?get_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180450710 (-get_IsCloaked@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 * Callees:
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002604C (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::IsCloaked(
        HWND *this)
{
  HWND v2; // rcx
  HRESULT WindowAttribute; // eax
  int pvAttribute; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)this);
  v2 = this[5];
  pvAttribute = 0;
  WindowAttribute = DwmGetWindowAttribute(v2, 0xEu, &pvAttribute, 4u);
  if ( WindowAttribute < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x112,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
      (const char *)(unsigned int)WindowAttribute,
      pvAttribute);
  return pvAttribute != 0;
}

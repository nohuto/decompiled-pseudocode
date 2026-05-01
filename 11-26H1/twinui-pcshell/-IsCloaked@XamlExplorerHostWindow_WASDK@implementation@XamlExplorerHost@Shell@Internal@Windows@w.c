/*
 * XREFs of ?IsCloaked@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1804516D8
 * Callers:
 *     ?get_IsCloaked@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180451AA0 (-get_IsCloaked@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180451484 (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shel.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::IsCloaked(
        HWND *this)
{
  HWND v2; // rcx
  HRESULT WindowAttribute; // eax
  int pvAttribute; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)this);
  v2 = this[5];
  pvAttribute = 0;
  WindowAttribute = DwmGetWindowAttribute(v2, 0xEu, &pvAttribute, 4u);
  if ( WindowAttribute < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF6,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      (const char *)(unsigned int)WindowAttribute,
      pvAttribute);
  return pvAttribute != 0;
}

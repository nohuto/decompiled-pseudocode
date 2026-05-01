/*
 * XREFs of ?put_IsCloaked@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAH_N@Z @ 0x180451C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180451484 (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shel.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK>::put_IsCloaked(
        unsigned __int64 a1,
        unsigned __int8 a2)
{
  int v2; // edi
  HWND *v3; // rbx
  HRESULT v4; // eax
  __int64 result; // rax
  int pvAttribute; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = (HWND *)((a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)v3);
  pvAttribute = v2;
  v4 = DwmSetWindowAttribute(v3[5], 0xDu, &pvAttribute, 4u);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFE,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
        (const char *)(unsigned int)v4,
        pvAttribute);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&pvAttribute);
  }
  return result;
}

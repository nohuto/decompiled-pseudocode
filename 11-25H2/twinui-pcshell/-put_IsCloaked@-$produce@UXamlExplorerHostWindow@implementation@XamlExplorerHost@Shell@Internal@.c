/*
 * XREFs of ?put_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x180065EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180065F8C (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::put_IsCloaked(
        unsigned __int64 a1,
        unsigned __int8 a2)
{
  unsigned int v2; // edi
  HWND *v3; // rbx
  HRESULT v4; // eax
  __int64 result; // rax
  unsigned int pvAttribute; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = (HWND *)((a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)v3);
  pvAttribute = v2;
  v4 = DwmSetWindowAttribute(v3[5], 0xDu, &pvAttribute, 4u);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x110,
      (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow.cpp",
      (const char *)(unsigned int)v4,
      pvAttribute);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      pvAttribute = *(_DWORD *)winrt::to_hresult(&pvAttribute);
      result = pvAttribute;
      continue;
    }
    break;
  }
  return result;
}

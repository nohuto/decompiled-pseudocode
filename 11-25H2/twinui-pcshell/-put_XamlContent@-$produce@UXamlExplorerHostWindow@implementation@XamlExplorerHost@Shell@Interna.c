/*
 * XREFs of ?put_XamlContent@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180065A70
 * Callers:
 *     <none>
 * Callees:
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x180065AC0 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::put_XamlContent(
        __int64 a1,
        struct IInspectableVtbl *a2)
{
  __int64 result; // rax
  struct IInspectable v3; // [rsp+20h] [rbp-18h] BYREF

  v3.lpVtbl = a2;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlContent(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)((a1 - 8) & -(__int64)(a1 != 0)),
    &v3);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      LODWORD(v3.lpVtbl) = *(_DWORD *)winrt::to_hresult(&v3);
      result = LODWORD(v3.lpVtbl);
      continue;
    }
    break;
  }
  return result;
}

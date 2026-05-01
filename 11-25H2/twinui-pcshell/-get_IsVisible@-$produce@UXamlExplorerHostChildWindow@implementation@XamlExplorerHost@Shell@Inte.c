/*
 * XREFs of ?get_IsVisible@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180440930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::get_IsVisible(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v3; // rcx

  v3 = a1 + 48;
  if ( !a1 )
    v3 = 64LL;
  *a2 = IsWindowVisible(*(HWND *)v3);
  return 0LL;
}

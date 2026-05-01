/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18044FE38
 * Callers:
 *     ?find_interface@?$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180210BD0 (-find_interface@-$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>
    && v1[1] == 0x1F27A216AAFE0084LL )
  {
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return winrt::impl::interface_list<winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>>(a1);
  }
}

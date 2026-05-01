/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1804444B4
 * Callers:
 *     ?find_interface@?$implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1804452A0 (-find_interface@-$implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK>
    && v1[1] == 0xED6ECF0310F398BDuLL )
  {
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return winrt::impl::interface_list<winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>>(a1);
  }
}

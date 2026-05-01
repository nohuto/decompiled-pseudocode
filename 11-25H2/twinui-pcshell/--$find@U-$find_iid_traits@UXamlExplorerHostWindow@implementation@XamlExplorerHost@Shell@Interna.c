/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIClosable@Foundation@Windows@winrt@@UIXamlExplorerHostWindowLocal@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180443700
 * Callers:
 *     ??$find@U?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180443758 (--$find@U-$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@_ea_180443758.c)
 *     ??$find@U?$find_iid_traits@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1804444B4 (--$find@U-$find_iid_traits@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IClosable>>::value
    && v1[1] == 0x9EA94EAE5BD7BB83uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  if ( *v1 == winrt::impl::guid_v<IXamlExplorerHostWindowLocal> && v1[1] == 0x800BF1B23E78C7BFuLL )
    return *a1;
  return 0LL;
}

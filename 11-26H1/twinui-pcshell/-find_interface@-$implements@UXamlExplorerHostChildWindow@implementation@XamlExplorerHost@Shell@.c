/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802B4830
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802B4854 (--$find@U-$find_iid_traits@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@In.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>>(v3);
}

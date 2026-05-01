/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@XamlExplorerHost@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1804411B0
 * Callers:
 *     ?find_interface@?$implements@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180230060 (-find_interface@-$implements@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == *(_QWORD *)L"5" && v1[1] == 0x46000000000000C0LL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>
    && v1[1] == 0xE3B3C1CE223315A1uLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}

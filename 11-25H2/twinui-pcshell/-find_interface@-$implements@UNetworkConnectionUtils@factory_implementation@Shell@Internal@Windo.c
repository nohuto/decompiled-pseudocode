/*
 * XREFs of ?find_interface@?$implements@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UINetworkConnectionUtilsStatics@3456@Ustatic_lifetime@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18064AA70
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UINetworkConnectionUtilsStatics@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18064A17C (--$find@U-$find_iid_traits@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics,winrt::static_lifetime>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>>(v3);
}

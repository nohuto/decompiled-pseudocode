/*
 * XREFs of ??0?$producers_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UINetworkConnectionUtilsStatics@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x18064A4A8
 * Callers:
 *     ??0NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18064A4E4 (--0NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x18063A640 (--0-$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIAct.c)
 *     ??0?$producer_convert@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x18064A478 (--0-$producer_convert@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winr.c)
 */

__int64 winrt::impl::producers_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>>::producers_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>>()
{
  __int64 v0; // rcx
  __int64 v1; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>();
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics,void>::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics,void>((_QWORD *)(v0 + 8));
  return v1;
}

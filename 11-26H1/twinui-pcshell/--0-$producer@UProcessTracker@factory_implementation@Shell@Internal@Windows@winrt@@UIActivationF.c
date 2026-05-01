/*
 * XREFs of ??0?$producer@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x180660014
 * Callers:
 *     ??0?$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x18066005C (--0-$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIAct.c)
 * Callees:
 *     ??0?$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA@XZ @ 0x18065FF60 (--0-$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UIActi.c)
 */

__int64 winrt::impl::producer<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>::producer<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>()
{
  __int64 v0; // rcx

  winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory>::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory>();
  return v0;
}

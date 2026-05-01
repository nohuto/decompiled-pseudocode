/*
 * XREFs of ??0?$producers_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIProcessTrackerStatics@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x18063A688
 * Callers:
 *     ??0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063A6C4 (--0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x18063A640 (--0-$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIAct.c)
 *     ??0?$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x18063A658 (--0-$producer_convert@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIPro.c)
 */

__int64 winrt::impl::producers_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IProcessTrackerStatics>>::producers_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IProcessTrackerStatics>>()
{
  __int64 v0; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>();
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>();
  return v0;
}

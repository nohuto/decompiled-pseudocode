/*
 * XREFs of ?find_interface@?$implements@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIProcessTrackerStatics@3456@Ustatic_lifetime@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18063B280
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIProcessTrackerStatics@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18063A1A8 (--$find@U-$find_iid_traits@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IProcessTrackerStatics,winrt::static_lifetime>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IProcessTrackerStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>>(v3);
}

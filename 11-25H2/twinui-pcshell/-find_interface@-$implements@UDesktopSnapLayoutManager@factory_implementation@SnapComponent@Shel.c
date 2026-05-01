/*
 * XREFs of ?find_interface@?$implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIDesktopSnapLayoutManagerFactory@34567@UIDesktopSnapLayoutManagerStatics@34567@UIDesktopSnapLayoutManagerStatics2@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802267E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@SnapComponent@Shell@Internal@34@UIDesktopSnapLayoutManagerStatics@67834@UIDesktopSnapLayoutManagerStatics2@67834@UISnapLayoutManagerExtensionStatics@PlatformExtensions@7834@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180594A58 (--$find@U-$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>>(v3);
}

/*
 * XREFs of ??$find@U?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@SnapComponent@Shell@Internal@34@UIDesktopSnapLayoutManagerStatics@67834@UIDesktopSnapLayoutManagerStatics2@67834@UISnapLayoutManagerExtensionStatics@PlatformExtensions@7834@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805B8C10
 * Callers:
 *     ?find_interface@?$implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIDesktopSnapLayoutManagerFactory@34567@UIDesktopSnapLayoutManagerStatics@34567@UIDesktopSnapLayoutManagerStatics2@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180217190 (-find_interface@-$implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == *(_QWORD *)L"5" && v1[1] == 0x46000000000000C0LL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>>();
}

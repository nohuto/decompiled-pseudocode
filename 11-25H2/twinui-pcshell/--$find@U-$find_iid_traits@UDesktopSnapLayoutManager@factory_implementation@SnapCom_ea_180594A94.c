/*
 * XREFs of ??$find@U?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIDesktopSnapLayoutManagerFactory@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@23456@UIDesktopSnapLayoutManagerStatics2@23456@UISnapLayoutManagerExtensionStatics@PlatformExtensions@3456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180594A94
 * Callers:
 *     ??$find@U?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@SnapComponent@Shell@Internal@34@UIDesktopSnapLayoutManagerStatics@67834@UIDesktopSnapLayoutManagerStatics2@67834@UISnapLayoutManagerExtensionStatics@PlatformExtensions@7834@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180594A58 (--$find@U-$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory>
    && v1[1] == 0xEC5372903D396486uLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics>
    && v1[1] == 0xE3DCE1A71DE7E3B9uLL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>>();
}

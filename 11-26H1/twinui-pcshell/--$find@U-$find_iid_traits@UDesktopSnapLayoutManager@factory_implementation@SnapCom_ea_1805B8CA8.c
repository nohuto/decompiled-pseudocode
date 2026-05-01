/*
 * XREFs of ??$find@U?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIDesktopSnapLayoutManagerStatics2@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@3456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805B8CA8
 * Callers:
 *     ??$find@U?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIDesktopSnapLayoutManagerFactory@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@23456@UIDesktopSnapLayoutManagerStatics2@23456@UISnapLayoutManagerExtensionStatics@PlatformExtensions@3456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805B8C4C (--$find@U-$find_iid_traits@UDesktopSnapLayoutManager@factory_implementation@SnapCom_ea_1805B8C4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2>
    && v1[1] == 0xCC73D246AF32FBALL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *(_OWORD *)v1 == *(_OWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics> )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}

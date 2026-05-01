/*
 * XREFs of ??$find@U?$find_iid_traits@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UDashboardActivator@Shell@Internal@Windows@winrt@@UIClassFactory@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805A1598
 * Callers:
 *     ?find_interface@?$implements@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@UIClassFactory@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18021D150 (-find_interface@-$implements@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::DashboardActivator>>::value
    && v1[1] == 0x749209729CA368B7LL )
  {
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  }
  if ( *v1 == winrt::impl::guid_v<IClassFactory> && v1[1] == 0x46000000000000C0LL )
    return *a1;
  return 0LL;
}

/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180620BF8
 * Callers:
 *     ?find_interface@?$implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18062E850 (-find_interface@-$implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>::value
    && v1[1] == 0x74B8161B2170CA3LL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}

/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180620BBC
 * Callers:
 *     ?find_interface@?$implements@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18062E820 (-find_interface@-$implements@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Inter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>::value
    && v1[1] == 0x1A2EBEF4A92CA796LL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}

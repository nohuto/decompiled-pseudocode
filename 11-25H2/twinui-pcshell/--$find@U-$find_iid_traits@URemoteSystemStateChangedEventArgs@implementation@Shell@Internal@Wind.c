/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180620B80
 * Callers:
 *     ?find_interface@?$implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18062E7F0 (-find_interface@-$implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Wi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IRemoteSystemStateChangedEventArgs>
    && v1[1] == 0x4666F60C10ACB6A8LL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}

/*
 * XREFs of ?find_interface@?$implements@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18062E820
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180620BBC (--$find@U-$find_iid_traits@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Interna.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs>>(v3);
}

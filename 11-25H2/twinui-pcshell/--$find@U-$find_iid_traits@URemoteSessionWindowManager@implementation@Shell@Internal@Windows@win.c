/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteSessionWindowManager@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18062F5D4
 * Callers:
 *     ?find_interface@?$implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802044C0 (-find_interface@-$implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>>(
        _QWORD *a1)
{
  if ( *(_OWORD *)a1[1] == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSessionWindowManager>>::value )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}

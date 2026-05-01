/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteSessionWindowManager@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180655118
 * Callers:
 *     ?find_interface@?$implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801F8850 (-find_interface@-$implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>>(
        _QWORD *a1)
{
  if ( *(_OWORD *)a1[1] == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IRemoteSessionWindowManager> )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}

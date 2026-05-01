/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteDesktopProviderInfo@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180616C60
 * Callers:
 *     ?find_interface@?$implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18061D450 (-find_interface@-$implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@wi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>>::value
    && v1[1] == 0x3F6E4FA2CE1E67A2LL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}

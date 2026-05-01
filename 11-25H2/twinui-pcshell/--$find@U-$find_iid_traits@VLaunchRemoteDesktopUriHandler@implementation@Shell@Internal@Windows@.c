/*
 * XREFs of ??$find@U?$find_iid_traits@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIExecuteCommand@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180615620
 * Callers:
 *     ?find_interface@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180615FE0 (-find_interface@-$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Window.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IExecuteCommand>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  if ( *v1 == winrt::impl::guid_v<IExecuteCommand> && v1[1] == 0x547B4F7A2792A980LL )
    return *a1;
  return 0LL;
}

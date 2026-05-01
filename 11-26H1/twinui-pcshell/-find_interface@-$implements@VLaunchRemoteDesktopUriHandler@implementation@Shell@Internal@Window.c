/*
 * XREFs of ?find_interface@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18063BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIExecuteCommand@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18063B52C (--$find@U-$find_iid_traits@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 16;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IExecuteCommand>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>(v3);
}

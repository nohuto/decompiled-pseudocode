/*
 * XREFs of ?find_interface@?$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18065F680
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UWindowsTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18065E364 (--$find@U-$find_iid_traits@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@impl@wi.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowsTracker>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowsTracker>>(v3);
}

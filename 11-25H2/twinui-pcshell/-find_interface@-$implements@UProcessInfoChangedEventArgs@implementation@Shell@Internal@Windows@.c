/*
 * XREFs of ?find_interface@?$implements@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18062E760
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180620ACC (--$find@U-$find_iid_traits@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs>>(v3);
}

/*
 * XREFs of ??$find@U?$find_iid_traits@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UMeetAndChatInstallStatus@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805F20E8
 * Callers:
 *     ?find_interface@?$implements@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805F8300 (-find_interface@-$implements@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::MeetAndChatInstallStatus>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IMeetAndChatInstallStatus>
    && v1[1] == 0x986D839E1274ED87uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}

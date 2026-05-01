/*
 * XREFs of ??$find@U?$find_iid_traits@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UDesktopTaskGroupsSwitchItemController@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18058A610
 * Callers:
 *     ?find_interface@?$implements@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180219FC0 (-find_interface@-$implements@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::DesktopTaskGroups::DesktopTaskGroupsSwitchItemController>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>
    && v1[1] == 0xECA3375B94BF4488uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}

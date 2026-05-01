/*
 * XREFs of ?get_local_iids@?$implements@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180566C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::DesktopTaskGroups::DesktopTaskGroupsSwitchItemController>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::DesktopTaskGroups::DesktopTaskGroupsSwitchItemController>>::value;
  return a2;
}

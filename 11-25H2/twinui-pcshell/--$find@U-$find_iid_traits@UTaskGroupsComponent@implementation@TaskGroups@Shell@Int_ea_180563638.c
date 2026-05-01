/*
 * XREFs of ??$find@U?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UITaskGroupDataModelSingleton@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@3456@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180563638
 * Callers:
 *     ??$find@U?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UITaskGroupHost@TaskGroups@Shell@Internal@34@UITaskGroupDataModelSingleton@67834@UITaskGroupsComponent@DesktopTaskGroups@7834@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180563544 (--$find@U-$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Int_ea_180563544.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = a1[1];
  if ( *(_OWORD *)v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton> )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *(_QWORD *)v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent>
    && *(_QWORD *)(v1 + 8) == 0xBBEEFC8F611586AEuLL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(a1);
}

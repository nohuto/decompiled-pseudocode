/*
 * XREFs of ??$find@U?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805634EC
 * Callers:
 *     ??$find@U?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UITaskGroupDataModelSingleton@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@3456@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180563638 (--$find@U-$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Int_ea_180563638.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>>
    && v1[1] == 0xDEAAC341452B5CAFuLL )
  {
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  }
  return 0LL;
}

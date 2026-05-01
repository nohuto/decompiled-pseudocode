/*
 * XREFs of ?find_inspectable@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x180565D00
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_inspectable_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UITaskGroupHost@TaskGroups@Shell@Internal@67@UITaskGroupDataModelSingleton@9Shell@Internal@67@UITaskGroupsComponent@DesktopTaskGroups@Shell@Internal@67@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SA?A_PAEBU?$find_inspectable_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180563694 (--$find@U-$find_inspectable_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find_inspectable(
        __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 72;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::impl::find_inspectable_traits<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(&v2);
}

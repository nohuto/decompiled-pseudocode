/*
 * XREFs of ?Release@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAKXZ @ 0x1800E9710
 * Callers:
 *     ?Release@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@W7EAAKXZ @ 0x1805653F0 (-Release@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal_ea_1805653F0.c)
 *     ?Release@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WCI@EAAKXZ @ 0x180565400 (-Release@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal_ea_180565400.c)
 *     ?Release@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WDA@EAAKXZ @ 0x180565410 (-Release@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal_ea_180565410.c)
 *     ?Release@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@WDI@EAAKXZ @ 0x180565420 (-Release@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal_ea_180565420.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E9E50 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(
        __int64 a1)
{
  _QWORD *v1; // rbx
  signed __int64 v2; // rax
  unsigned __int32 v3; // edi
  signed __int64 v4; // rtt

  v1 = (_QWORD *)(a1 + 72);
  v2 = *(_QWORD *)(a1 + 80);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v2 + 24));
  if ( !v3 )
    winrt::impl::weak_ref<1,1>::Release((void *)(2 * v2));
LABEL_4:
  if ( !v3 )
  {
    v1[1] = 1LL;
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  return v3;
}

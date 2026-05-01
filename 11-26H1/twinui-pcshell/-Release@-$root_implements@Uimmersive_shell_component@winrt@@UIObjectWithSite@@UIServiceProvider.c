/*
 * XREFs of ?Release@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@QEAAIXZ @ 0x1800E7014
 * Callers:
 *     ?Release@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAKXZ @ 0x1800E6920 (-Release@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Interna.c)
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x1800E6990 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManag.c)
 *     ?Release@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAKXZ @ 0x1802151E0 (-Release@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmer.c)
 *     ?Release@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEAAKXZ @ 0x180221180 (-Release@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmers.c)
 *     ?Release@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAKXZ @ 0x18028E940 (-Release@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimm.c)
 *     ?Release@?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@Unon_agile@3@@winrt@@UEAAKXZ @ 0x180502310 (-Release@-$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPostur.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E6270 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(
        volatile signed __int64 *a1)
{
  volatile signed __int64 *v1; // rsi
  signed __int64 v3; // rax
  unsigned __int32 v4; // ebx
  signed __int64 v5; // rtt

  v1 = a1 + 1;
  v3 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 1, 0LL);
  while ( v3 >= 0 )
  {
    v4 = v3 - 1;
    v5 = v3;
    v3 = _InterlockedCompareExchange64(v1, v3 - 1, v3);
    if ( v5 == v3 )
      goto LABEL_4;
  }
  v4 = _InterlockedDecrement((volatile signed __int32 *)(2 * v3 + 24));
  if ( !v4 )
    winrt::impl::weak_ref<1,1>::Release((volatile signed __int32 *)(2 * v3));
LABEL_4:
  if ( !v4 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 8))(a1, 1LL);
  }
  return v4;
}

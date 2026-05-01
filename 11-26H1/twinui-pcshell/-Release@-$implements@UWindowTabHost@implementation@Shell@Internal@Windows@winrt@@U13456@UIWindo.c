/*
 * XREFs of ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAKXZ @ 0x1800E70A0
 * Callers:
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@W7EAAKXZ @ 0x18057E6C0 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U_ea_18057E6C0.c)
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@WBA@EAAKXZ @ 0x18057E6D0 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U_ea_18057E6D0.c)
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@WBI@EAAKXZ @ 0x18057E6E0 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U_ea_18057E6E0.c)
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@WDA@EAAKXZ @ 0x18057E6F0 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U_ea_18057E6F0.c)
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@WDI@EAAKXZ @ 0x18057E700 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U_ea_18057E700.c)
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@WEA@EAAKXZ @ 0x18057E710 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U_ea_18057E710.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E6270 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::Release(
        __int64 a1)
{
  __int64 v1; // rdi
  volatile signed __int64 *v2; // rsi
  signed __int64 v3; // rax
  unsigned __int32 v4; // ebx
  signed __int64 v5; // rtt

  v1 = a1 + 80;
  v2 = (volatile signed __int64 *)(a1 + 88);
  v3 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 88, 0LL);
  while ( v3 >= 0 )
  {
    v4 = v3 - 1;
    v5 = v3;
    v3 = _InterlockedCompareExchange64(v2, v3 - 1, v3);
    if ( v5 == v3 )
      goto LABEL_4;
  }
  v4 = _InterlockedDecrement((volatile signed __int32 *)(2 * v3 + 24));
  if ( !v4 )
    winrt::impl::weak_ref<1,1>::Release((volatile signed __int32 *)(2 * v3));
LABEL_4:
  if ( !v4 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v2);
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  }
  return v4;
}

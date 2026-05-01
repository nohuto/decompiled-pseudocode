/*
 * XREFs of ?GetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1802DFFB0
 * Callers:
 *     ?GetIids@?$produce_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupListener@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1802DFF70 (-GetIids@-$produce_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBac.c)
 *     ?GetIids@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1802DFF90 (-GetIids@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@i.c)
 *     ?GetIids@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180559F90 (-GetIids@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindo.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180564190 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@wi.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805641B0 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Intern_ea_1805641B0.c)
 *     ?GetIids@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805641D0 (-GetIids@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Intern_ea_1805641D0.c)
 *     ?GetIids@?$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UIDiscoverabilityManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805AE700 (-GetIids@-$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UID.c)
 *     ?GetIids@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1805C2444 (-GetIids@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManag.c)
 *     ?GetIids@?$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805D0A90 (-GetIids@-$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetA.c)
 *     ?GetIids@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805E1AB0 (-GetIids@-$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThe.c)
 *     ?GetIids@?$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18061B0F0 (-GetIids@-$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteS.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x1802D363D (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  void *v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( !a1 )
    a1 = 32LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v9);
  v6 = v9;
  if ( v9 )
  {
    *a2 = v9;
    v7 = _Platform_CoTaskMemAlloc(16LL * v6);
    *a3 = v7;
    if ( v7 )
      memmove_0(v7, Src, 16LL * v9);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return v4;
}

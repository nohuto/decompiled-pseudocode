/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1802D8F80
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardTaskbarButtonSettingsManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1802D8E60 (-GetRuntimeClassName@-$produce_base@UDashboardTaskbarButtonSettingsManager@implementation@Shell@.c)
 *     ?GetRuntimeClassName@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1802D8E80 (-GetRuntimeClassName@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@W.c)
 *     ?GetRuntimeClassName@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18057E0F0 (-GetRuntimeClassName@-$implements@UWindowTabHost@implementation@Shell@Internal@Wind_ea_18057E0F0.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18057E100 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18057E120 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Wi_ea_18057E120.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180588460 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Interna.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180588480 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@_ea_180588480.c)
 *     ?GetRuntimeClassName@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805884A0 (-GetRuntimeClassName@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@_ea_1805884A0.c)
 *     ?GetRuntimeClassName@?$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UIDiscoverabilityManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805D2BA0 (-GetRuntimeClassName@-$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Window.c)
 *     ?GetRuntimeClassName@?$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805E6860 (-GetRuntimeClassName@-$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIP.c)
 *     ?GetRuntimeClassName@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806068A0 (-GetRuntimeClassName@-$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@.c)
 *     ?GetRuntimeClassName@?$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180640CE0 (-GetRuntimeClassName@-$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 32LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}

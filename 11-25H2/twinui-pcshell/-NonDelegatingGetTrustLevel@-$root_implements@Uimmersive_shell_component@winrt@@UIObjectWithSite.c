/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1802E01E0
 * Callers:
 *     ?GetTrustLevel@?$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1802E0130 (-GetTrustLevel@-$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UII.c)
 *     ?GetTrustLevel@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1802E0150 (-GetTrustLevel@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows.c)
 *     ?GetTrustLevel@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x18055A270 (-GetTrustLevel@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@U.c)
 *     ?GetTrustLevel@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18055A280 (-GetTrustLevel@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWind.c)
 *     ?GetTrustLevel@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18055A2A0 (-GetTrustLevel@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@_ea_18055A2A0.c)
 *     ?GetTrustLevel@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180564250 (-GetTrustLevel@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wind.c)
 *     ?GetTrustLevel@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180564270 (-GetTrustLevel@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@_ea_180564270.c)
 *     ?GetTrustLevel@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180564290 (-GetTrustLevel@-$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@_ea_180564290.c)
 *     ?GetTrustLevel@?$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UIDiscoverabilityManager@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805AEDB0 (-GetTrustLevel@-$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winr.c)
 *     ?GetTrustLevel@?$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805C2D30 (-GetTrustLevel@-$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinMana.c)
 *     ?GetTrustLevel@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805E1D90 (-GetTrustLevel@-$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@.c)
 *     ?GetTrustLevel@?$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18061B210 (-GetTrustLevel@-$produce_base@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIR.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 32LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}

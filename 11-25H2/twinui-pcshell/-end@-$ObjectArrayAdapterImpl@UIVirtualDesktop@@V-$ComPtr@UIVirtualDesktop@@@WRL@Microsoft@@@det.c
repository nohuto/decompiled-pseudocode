/*
 * XREFs of ?end@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802CA968
 * Callers:
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1800BBA04 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180259224 (-GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x18026BF60 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@.c)
 *     ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18047F244 (-GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180484170 (-Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1805347B0 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18056471C (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1806159C0 (-Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1800A2E6C (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::end(
        __int64 a1,
        __int64 a2)
{
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
    a2,
    a1,
    *(_DWORD *)(a1 + 8));
  return a2;
}

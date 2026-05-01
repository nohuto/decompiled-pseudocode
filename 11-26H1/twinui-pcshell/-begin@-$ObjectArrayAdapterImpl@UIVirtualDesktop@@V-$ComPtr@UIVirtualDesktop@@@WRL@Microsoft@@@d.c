/*
 * XREFs of ?begin@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180109018
 * Callers:
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1800E4E3C (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1802523B0 (-GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x180264270 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@.c)
 *     ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18048FE54 (-GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180494B60 (-Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1805581D0 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058899C (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063B8D0 (-Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180109040 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::begin(
        __int64 a1,
        __int64 a2)
{
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
    a2,
    a1,
    0LL);
  return a2;
}

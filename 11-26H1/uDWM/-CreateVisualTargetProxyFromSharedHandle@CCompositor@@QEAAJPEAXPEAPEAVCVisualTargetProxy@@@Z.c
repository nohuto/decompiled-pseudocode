/*
 * XREFs of ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008425C
 * Callers:
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x1800624F0 (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180069F10 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E3560 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateVisualTargetProxyFromSharedHandle(
        struct IDwmChannel **this,
        void *a2,
        struct CVisualTargetProxy **a3)
{
  return CResourceProxy::CreateFromSharedHandle<CVisualTargetProxy>(this[3]);
}

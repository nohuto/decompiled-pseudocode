/*
 * XREFs of ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180033AB8
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x18002B330 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800322BC (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800335E4 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x180033A1C (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800B68DC (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800E22C0 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetWindowMDIOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x18008CF7C (-GetWindowMDIOwner@@YAPEAUHWND__@@QEAU1@@Z.c)
 */

struct CWindowData *__fastcall CWindowData::GetMDIOwner(HWND *this)
{
  __int64 v1; // rbx
  HWND WindowMDIOwner; // rax

  v1 = 0LL;
  WindowMDIOwner = GetWindowMDIOwner(this[5]);
  if ( WindowMDIOwner )
    return CWindowList::FindWindowDataByHwnd(
             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
             WindowMDIOwner);
  return (struct CWindowData *)v1;
}

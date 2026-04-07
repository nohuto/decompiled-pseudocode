/*
 * XREFs of ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180002FA0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180010A80 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180010DD0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CCanvasVisual@@MEAAJXZ @ 0x180010EB0 (-Initialize@CCanvasVisual@@MEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180011920 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180011CB0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180022F80 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180032300 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180053CE0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x180054DA0 (-Initialize@CImage@@EEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180061140 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x18006F780 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180071C40 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18007E1B0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x180084130 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x1800856C0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180088E20 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x18008BC10 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CSolidRectangleVisual@@MEAAJXZ @ 0x1800C5DE0 (-Initialize@CSolidRectangleVisual@@MEAAJXZ.c)
 *     ?Initialize@CGlobalTimeTrackVisual@@MEAAJXZ @ 0x1800E1240 (-Initialize@CGlobalTimeTrackVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x180010F40 (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 */

__int64 __fastcall CContainerVisual::Initialize(struct CContainerVisualProxy **this)
{
  int ContainerVisualProxy; // eax
  unsigned int v2; // ebx

  ContainerVisualProxy = CCompositor::CreateContainerVisualProxy(
                           *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                           this + 2);
  v2 = ContainerVisualProxy;
  if ( ContainerVisualProxy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ContainerVisualProxy, 0x1Du, 0LL);
  return v2;
}

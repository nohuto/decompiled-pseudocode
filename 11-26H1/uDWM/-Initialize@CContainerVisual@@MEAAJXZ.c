/*
 * XREFs of ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x1800174A8 (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x180021AAC (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x1800229C0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180022DC0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x18005D290 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180061100 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180066C00 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x18006E560 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18006FB90 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180077BE0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x1800846E0 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x18008424C (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ContainerVisualProxy, 0x19u, 0LL);
  return v2;
}

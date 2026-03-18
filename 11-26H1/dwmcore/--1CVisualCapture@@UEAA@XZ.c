/*
 * XREFs of ??1CVisualCapture@@UEAA@XZ @ 0x180286260
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1802862D0 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x18026A580 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180286888 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::~CVisualCapture(CVisualCapture *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CVisualCapture::`vftable'{for `IRenderTarget'};
  CVisualCapture::UnRegisterNotifiers((struct CResource **)this);
  v2 = (void *)*((_QWORD *)this + 303);
  if ( v2 )
    CloseHandle(v2);
  CVisualCapture::SendCaptureCompleted(this);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}

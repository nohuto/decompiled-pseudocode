/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180134878
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801345AC (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x180254BA0 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18025834C (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180258414 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??1CVisualCapture@@UEAA@XZ @ 0x180286260 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180125BF0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x18014B068 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 2288);
  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((char *)this + 408);
  CRenderTarget::~CRenderTarget(this);
}

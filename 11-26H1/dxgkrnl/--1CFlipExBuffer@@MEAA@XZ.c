/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x14004E2D8
 * Callers:
 *     ??_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z @ 0x14004E260 (--_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z.c)
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x14004E2A0 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x14004E364 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x14004E398 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14004E450 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x14004E480 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14004E4BC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x14005395C (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_DWORD *)this + 100) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  CFlipExBuffer::SignalMaxGpuFence(this);
  CFlipExBuffer::DisableCascadedSignaling(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CFlipExBuffer::ReleaseHDR10MetaData(this);
  v3 = (void *)*((_QWORD *)this + 43);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = (void *)*((_QWORD *)this + 45);
  if ( v4 )
    ObfDereferenceObject(v4);
  CCompositionBuffer::~CCompositionBuffer(this);
}

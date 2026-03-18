/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1400524F0
 * Callers:
 *     ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x140052460 (-SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxMemoryBufferFromLookaside::SelfDestruct(FxMemoryBufferFromLookaside *this)
{
  FxLookasideList *m_pLookaside; // rbx

  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  m_pLookaside = this->m_pLookaside;
  m_pLookaside->Reclaim(m_pLookaside, this);
  m_pLookaside->Release(
    m_pLookaside,
    this,
    237,
    "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp");
}

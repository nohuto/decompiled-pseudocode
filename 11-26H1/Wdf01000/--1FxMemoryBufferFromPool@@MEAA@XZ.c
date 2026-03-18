/*
 * XREFs of ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1400520F8
 * Callers:
 *     ??_EFxMemoryBufferFromPool@@MEAAPEAXI@Z @ 0x140052030 (--_EFxMemoryBufferFromPool@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxMemoryBufferFromPool::~FxMemoryBufferFromPool(FxMemoryBufferFromPool *this)
{
  void *m_Pool; // rcx

  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPool_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  m_Pool = this->m_Pool;
  if ( m_Pool )
    ExFreePoolWithTag(m_Pool, 0);
  FxObject::~FxObject(this);
}

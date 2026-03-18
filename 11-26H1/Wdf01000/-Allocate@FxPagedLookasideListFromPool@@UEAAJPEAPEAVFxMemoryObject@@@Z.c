/*
 * XREFs of ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140052930
 * Callers:
 *     <none>
 * Callees:
 *     FxAllocateFromNPagedLookasideList @ 0x14000D1D0 (FxAllocateFromNPagedLookasideList.c)
 *     ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140052A80 (--2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x140052CE4 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x140052D78 (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x14009606C (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 *     FxAllocateFromPagedLookasideList @ 0x140096264 (FxAllocateFromPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPagedLookasideListFromPool::Allocate(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside **PPMemory)
{
  PVOID v4; // rax
  __int64 result; // rax
  FxMemoryBufferFromLookaside *inited; // rbx
  FxMemoryBufferFromLookaside_vtbl *v7; // rax
  unsigned __int64 v8; // rcx
  FxMemoryBufferFromLookaside_vtbl *v9; // rbp
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxMemoryBufferFromLookaside *v12; // rax
  FxMemoryBufferFromLookaside *v13; // rdi
  FxDeviceBase *m_MemoryDeviceBase; // rbx
  FxMemoryBufferFromLookaside *v15; // rax
  unsigned __int16 v16; // [rsp+20h] [rbp-18h]

  v4 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v4 )
    return 3221225626LL;
  inited = (FxMemoryBufferFromLookaside *)FxLookasideList::InitObjectAlloc(this, v4);
  v7 = (FxMemoryBufferFromLookaside_vtbl *)FxAllocateFromPagedLookasideList(&this->m_PoolLookaside);
  v9 = v7;
  if ( !v7 )
  {
    this->Reclaim(this, inited);
    return 3221225626LL;
  }
  if ( this->m_BufferSize < 0x1000 )
    v9 = (FxMemoryBufferFromLookaside_vtbl *)FxPagedLookasideListFromPool::InitPagedAlloc(this, v7);
  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  m_Globals = this->m_Globals;
  if ( !this->m_MemoryDeviceBase )
  {
    v15 = (FxMemoryBufferFromLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                           v8,
                                           m_Globals,
                                           inited,
                                           p_m_MemoryAttributes);
    v13 = v15;
    if ( v15 )
    {
      FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v15, this->m_Globals, this, this->m_BufferSize, v16);
      v13->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
      goto LABEL_12;
    }
LABEL_13:
    v13 = 0LL;
    goto LABEL_14;
  }
  v12 = (FxMemoryBufferFromLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                         v8,
                                         m_Globals,
                                         inited,
                                         p_m_MemoryAttributes);
  v13 = v12;
  if ( !v12 )
    goto LABEL_13;
  m_MemoryDeviceBase = this->m_MemoryDeviceBase;
  FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v12, this->m_Globals, this, this->m_BufferSize, v16);
  v13->m_DeviceBase = m_MemoryDeviceBase;
  v13->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
LABEL_12:
  v13[1].FxMemoryObject::FxObject::__vftable = v9;
  v13->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
LABEL_14:
  v13->m_ObjectFlags |= 0x11u;
  result = 0LL;
  *PPMemory = v13;
  return result;
}

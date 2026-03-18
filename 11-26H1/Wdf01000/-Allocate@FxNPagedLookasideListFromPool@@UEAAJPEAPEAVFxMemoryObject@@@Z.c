/*
 * XREFs of ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140052B80
 * Callers:
 *     <none>
 * Callees:
 *     FxAllocateFromNPagedLookasideList @ 0x14000D1D0 (FxAllocateFromNPagedLookasideList.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x140052CE4 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x140052D78 (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxNPagedLookasideListFromPool::Allocate(
        FxNPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside **PPMemory)
{
  PVOID v4; // rax
  FxMemoryBufferFromLookaside *inited; // rbx
  unsigned __int64 v6; // rdx
  FxMemoryBufferFromLookaside_vtbl *v7; // rbp
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int16 v11; // [rsp+20h] [rbp-18h]

  v4 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v4 )
    return 3221225626LL;
  inited = (FxMemoryBufferFromLookaside *)FxLookasideList::InitObjectAlloc(this, v4);
  v7 = (FxMemoryBufferFromLookaside_vtbl *)FxAllocateFromNPagedLookasideList(&this->m_PoolLookaside, v6);
  if ( !v7 )
  {
    this->Reclaim(this, inited);
    return 3221225626LL;
  }
  if ( this->m_Globals->FxVerifierHandle )
  {
    *(_OWORD *)&inited->FxMemoryObject::FxObject::__vftable = 0LL;
    *(_OWORD *)&inited->m_Globals = 0LL;
    inited->m_ChildListHead = 0LL;
    LODWORD(inited->m_ChildListHead.Flink) = 1146058822;
    inited = (FxMemoryBufferFromLookaside *)((char *)inited + 48);
  }
  *(_OWORD *)&inited[1].m_Globals = 0LL;
  inited[1].m_ChildListHead = 0LL;
  inited[1].m_SpinLock = 0LL;
  inited[1].m_Globals = (_FX_DRIVER_GLOBALS *)inited;
  if ( this != (FxNPagedLookasideListFromPool *)-104LL )
  {
    ContextTypeInfo = this->m_MemoryAttributes.ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = this->m_MemoryAttributes.ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(&inited[1].m_ParentObject, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    *(_QWORD *)&inited[1].m_SpinLock.m_DbgFlagIsInitialized = this->m_MemoryAttributes.ContextTypeInfo;
  }
  if ( inited )
  {
    FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(inited, this->m_Globals, this, this->m_BufferSize, v11);
    inited[1].FxMemoryObject::FxObject::__vftable = v7;
    inited->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
    inited->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
  }
  *PPMemory = inited;
  return 0LL;
}

/*
 * XREFs of ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x14005E868
 * Callers:
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005E6F0 (NtFlipObjectConsumerQueryBufferInfo.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x14001C474 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x14005E908 (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerQueryBufferInfo(
        FlipManagerObject *this,
        __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  CPushLock *v4; // rsi
  CEndpointResourceStateManager *v9; // rcx
  int DxSharedSurfaceHandle; // ebx
  struct CFlipResourceState *ResourceState; // rax
  struct CFlipResourceState *v13; // rdi

  v4 = (FlipManagerObject *)((char *)this + 40);
  DxSharedSurfaceHandle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( DxSharedSurfaceHandle >= 0 )
  {
    ResourceState = CEndpointResourceStateManager::FindResourceState(v9, a2, (struct _LIST_ENTRY *)((char *)this + 136));
    v13 = ResourceState;
    if ( ResourceState )
    {
      DxSharedSurfaceHandle = CPoolBufferResource::CreateDxSharedSurfaceHandle(
                                *((CPoolBufferResource **)ResourceState + 3),
                                a4);
      if ( DxSharedSurfaceHandle >= 0 )
        *a3 = *(struct _LUID *)(*((_QWORD *)v13 + 3) + 72LL);
    }
    else
    {
      DxSharedSurfaceHandle = -1073741811;
    }
    CPushLock::ReleaseLock(v4);
  }
  return (unsigned int)DxSharedSurfaceHandle;
}

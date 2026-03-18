/*
 * XREFs of ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x14005694C
 * Callers:
 *     ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x140056910 (-Complete@CFlipWaitedConsumerReturn@@UEAAXXZ.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1400A3DC0 (NtFlipObjectConsumerAdjustUsageReference.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x14001C474 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D894 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerAdjustUsageReference(FlipManagerObject *this, __int64 a2, char a3)
{
  CEndpointResourceStateManager *v6; // rcx
  int v7; // ebx
  struct CFlipResourceState *ResourceState; // rax
  CPoolBufferResource *v9; // rcx

  v7 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v7 >= 0 )
  {
    v7 = 0;
    ResourceState = CEndpointResourceStateManager::FindResourceState(v6, a2, (struct _LIST_ENTRY *)((char *)this + 136));
    if ( ResourceState )
    {
      v9 = (CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
      if ( a3 )
        CPoolBufferResource::AddUsageReference(v9);
      else
        CPoolBufferResource::RemoveUsageReference(v9);
    }
    else
    {
      v7 = -1073741811;
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v7;
}

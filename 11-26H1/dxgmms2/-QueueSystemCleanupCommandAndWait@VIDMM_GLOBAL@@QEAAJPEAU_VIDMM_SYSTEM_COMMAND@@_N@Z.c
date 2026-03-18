/*
 * XREFs of ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8
 * Callers:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x14004BE30 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ?DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z @ 0x14005000C (-DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14009E6A8 (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CloseFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A4F90 (-CloseFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENC.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_NI@Z @ 0x1400E11E4 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400E2318 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x140105EE0 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140124788 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E4BE4 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E6BC0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        char a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  PVOID **v7; // rax
  PVOID *v8; // r15
  __int64 v9; // r13
  struct _VIDSCH_SYNC_OBJECT *v10; // r12
  struct VIDMM_PAGING_QUEUE_PACKET *v11; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *NewPagingQueuePacket; // rbx
  __int64 v13; // rax
  char v14; // r14
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v18; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v19; // [rsp+B0h] [rbp+50h] BYREF

  LOBYTE(v19) = a3;
  v5 = *((unsigned int *)a2 + 1);
  v6 = *(_QWORD *)(*((_QWORD *)this + 5065) + 80LL);
  if ( (_DWORD)v5 == -1 )
    v7 = *(PVOID ***)(*((_QWORD *)this + 5065) + 80LL);
  else
    v7 = (PVOID **)(v6 + 32 * v5);
  v8 = *v7;
  v9 = *(_QWORD *)this;
  v10 = *(struct _VIDSCH_SYNC_OBJECT **)(32LL * ((*((_DWORD *)*v7 + 28) >> 5) & 0x1F) + v6 + 8);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 184, 0LL);
  v11 = (struct VIDMM_PAGING_QUEUE_PACKET *)(v8 + 2);
  *(_QWORD *)(v9 + 192) = KeGetCurrentThread();
  Object = v8[9];
  v8[9] = (char *)Object + 1;
  NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE_PACKET *)v8[2];
  if ( *((PVOID **)NewPagingQueuePacket + 1) != v8 + 2
    || (v13 = *(_QWORD *)NewPagingQueuePacket,
        *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)NewPagingQueuePacket + 8LL) != NewPagingQueuePacket) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v11 = v13;
  *(_QWORD *)(v13 + 8) = v11;
  *(_QWORD *)(v9 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPagingQueuePacket == v11 )
  {
    NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(160LL, 0x38346956u, 256LL);
    if ( !NewPagingQueuePacket )
    {
      NewPagingQueuePacket = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    memset(NewPagingQueuePacket, 0, 0xA0uLL);
  }
  *((_QWORD *)NewPagingQueuePacket + 5) = Object;
LABEL_8:
  if ( !v10 || *(_DWORD *)a2 == 118 || *(_DWORD *)a2 == 206 || *((_BYTE *)this + 7041) )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    if ( !NewPagingQueuePacket )
    {
      Object = v8[8];
      v18 = v10;
      VIDMM_GLOBAL::WaitForFences(this, &v18, (const unsigned __int64 *)&Object, 1u, 0LL, 0LL);
      NewPagingQueuePacket = VidMmGetNewPagingQueuePacket(
                               *(struct VIDMM_WORKER_THREAD **)this,
                               (struct VIDMM_PAGING_QUEUE *)v8);
    }
  }
  *((_BYTE *)NewPagingQueuePacket + 24) = 0;
  *((_BYTE *)NewPagingQueuePacket + 25) = v14;
  Object = 0LL;
  *((_OWORD *)NewPagingQueuePacket + 3) = *(_OWORD *)a2;
  *((_OWORD *)NewPagingQueuePacket + 4) = *((_OWORD *)a2 + 1);
  *((_OWORD *)NewPagingQueuePacket + 5) = *((_OWORD *)a2 + 2);
  *((_OWORD *)NewPagingQueuePacket + 6) = *((_OWORD *)a2 + 3);
  *((_OWORD *)NewPagingQueuePacket + 7) = *((_OWORD *)a2 + 4);
  *((_QWORD *)NewPagingQueuePacket + 16) = *((_QWORD *)a2 + 10);
  memset(&Event, 0, sizeof(Event));
  if ( !v14 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)NewPagingQueuePacket + 7) = &Event;
  }
  v19 = -1073741776;
  *((_QWORD *)NewPagingQueuePacket + 10) = &v19;
  VidMmAppendReadyPacket(
    *(struct VIDMM_WORKER_THREAD **)this,
    (struct VIDMM_PAGING_QUEUE *)v8,
    NewPagingQueuePacket,
    (unsigned __int64 *)&Object);
  if ( v14 )
  {
    v18 = v10;
    VIDMM_GLOBAL::WaitForFences(this, &v18, (const unsigned __int64 *)&Object, 1u, 0LL, 0LL);
  }
  else
  {
    Object = &Event;
    KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
  }
  return v19;
}

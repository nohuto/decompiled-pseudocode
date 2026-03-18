/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x14002CECC
 * Callers:
 *     VidSchiCleanupDeferredWaiterContext @ 0x1400064D8 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400160B0 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004B794 (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140054244 (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VidSchiUnwaitContext @ 0x14001FB00 (VidSchiUnwaitContext.c)
 *     ?AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14002C71C (-AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 */

void __fastcall VidSchiUnwaitWaitQueuePacket(
        HwQueueStagingList *this,
        __int64 a2,
        __int64 a3,
        struct VIDSCH_HW_QUEUE **a4)
{
  char v5; // r15
  __int64 v6; // rdx
  struct VIDSCH_HW_QUEUE **v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 *v24; // rcx

  v5 = a3;
  v6 = *(_QWORD *)(a2 + 88);
  v9 = (struct VIDSCH_HW_QUEUE **)(a2 + 96);
  if ( v6 )
    v10 = *(_QWORD *)(v6 + 96);
  else
    v10 = *(_QWORD *)(*((_QWORD *)*v9 + 5) + 16LL);
  v11 = *(_QWORD *)(v10 + 24);
  if ( (byte_14008A201 & 1) != 0 )
  {
    if ( v6 )
    {
      v22 = *(_QWORD *)(v6 + 56);
      if ( !v22 || (*(_DWORD *)(v6 + 112) & 0x40) != 0 )
        v22 = v6;
    }
    else
    {
      v22 = *((_QWORD *)*v9 + 6);
      if ( !v22 )
        v22 = (__int64)*v9;
    }
    McTemplateK0pp_EtwWriteTransfer(v22, &EventUnwaitQueuePacket, a3, a2, v22);
  }
  v12 = (_QWORD *)(a2 + 296);
  v13 = *(_QWORD *)(a2 + 296);
  if ( *(_QWORD *)(v13 + 8) != a2 + 296 )
    goto LABEL_22;
  v14 = *(__int64 **)(a2 + 304);
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_22;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *(_QWORD *)(a2 + 304) = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 288) + 48LL) == 6 )
  {
    v23 = (_QWORD *)(a2 + 312);
    v13 = *(_QWORD *)(a2 + 312);
    if ( *(_QWORD *)(v13 + 8) != a2 + 312 )
      goto LABEL_22;
    v24 = *(__int64 **)(a2 + 320);
    if ( (_QWORD *)*v24 != v23 )
      goto LABEL_22;
    *v24 = v13;
    *(_QWORD *)(v13 + 8) = v24;
    *v23 = 0LL;
    *(_QWORD *)(a2 + 320) = 0LL;
  }
  v15 = *(_DWORD *)(*(_QWORD *)(a2 + 288) + 48LL);
  if ( v15 == 2 || (unsigned int)(v15 - 4) <= 1 )
  {
    v16 = *(_QWORD *)(a2 + 88);
    if ( v16 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 808));
    if ( (*(_DWORD *)(a2 + 280) & 8) != 0 )
    {
      --*(_DWORD *)(v11 + 884);
      *(_DWORD *)(a2 + 280) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(char **)(a2 + 288), v13);
  v17 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a2 + 280) = *(_DWORD *)(a2 + 280) ^ ((unsigned __int8)*(_DWORD *)(a2 + 280) ^ (unsigned __int8)(2 * v5)) & 2 | 1;
  if ( (v17 & 0x10) != 0 )
  {
    v18 = (_QWORD *)(a2 + 32);
    v19 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(v19 + 8) == a2 + 32 )
    {
      v20 = *(_QWORD **)(a2 + 40);
      if ( (_QWORD *)*v20 == v18 )
      {
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        *v18 = 0LL;
        *(_QWORD *)(a2 + 40) = 0LL;
        --*(_DWORD *)(*(_QWORD *)(a2 + 88) + 812LL);
        *(_DWORD *)(a2 + 64) &= ~0x10u;
        VidSchiFreeQueuePacket(*(_QWORD *)(a2 + 88), a2);
        return;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
  v21 = *(_QWORD *)(a2 + 88);
  if ( v21 )
  {
    if ( (*(_DWORD *)(v21 + 192) & 0x20) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 192LL) &= ~0x20u;
      if ( VidSchiUnwaitContext(*(_QWORD *)(a2 + 88), 0x699Cu) )
      {
        *(_QWORD *)(v11 + 1496) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v11 + 1464), 0, 0);
      }
    }
  }
  else
  {
    if ( a4 && !*((_QWORD *)*v9 + 6) )
      *a4 = *v9;
    HwQueueStagingList::AddHwQueue(this, *v9);
  }
}

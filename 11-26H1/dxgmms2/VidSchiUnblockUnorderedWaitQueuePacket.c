/*
 * XREFs of VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738
 * Callers:
 *     VidSchiCleanupDeferredWaiterContext @ 0x1400064D8 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400160B0 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x14003C62C (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004B794 (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140054244 (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiUnblockUnorderedWaitQueuePacket(HwQueueStagingList *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rbx
  _QWORD *v10; // r11
  _QWORD *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8

  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 104);
  else
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 40LL) + 8LL);
  v6 = *(_QWORD *)(v5 + 40);
  v7 = (_QWORD *)(a2 + 296);
  v8 = *(_QWORD *)(a2 + 296);
  v9 = *(_QWORD *)(a2 + 288);
  if ( *(_QWORD *)(v8 + 8) != a2 + 296
    || (v10 = *(_QWORD **)(a2 + 304), (_QWORD *)*v10 != v7)
    || (*v10 = v8, *(_QWORD *)(v8 + 8) = v10, v11 = *(_QWORD **)(v9 + 216), *v11 != v9 + 208) )
  {
    __fastfail(3u);
  }
  *v7 = v9 + 208;
  *(_QWORD *)(a2 + 304) = v11;
  *v11 = v7;
  *(_QWORD *)(v9 + 216) = v7;
  *(_DWORD *)(a2 + 280) &= ~4u;
  --*(_DWORD *)(v9 + 40);
  v12 = *(_QWORD *)(a2 + 88);
  if ( v12 )
  {
    --*(_DWORD *)(v12 + 804);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 96);
    if ( v13 )
      --*(_DWORD *)(v13 + 156);
  }
  --*(_DWORD *)(v5 + 1852);
  --*(_DWORD *)(v6 + 880);
  if ( (_BYTE)a3 )
  {
    VidSchiUnwaitWaitQueuePacket(this, a2, a3, 0LL);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventPerformanceWarning, v15, 15);
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
}

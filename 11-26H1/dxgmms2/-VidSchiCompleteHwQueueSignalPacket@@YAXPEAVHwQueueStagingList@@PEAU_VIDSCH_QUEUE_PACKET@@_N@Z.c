/*
 * XREFs of ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x140013918 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004BBB4 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VmBusSendSignalGuestEvent @ 0x14003D3E0 (VmBusSendSignalGuestEvent.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x140044C6C (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 */

void __fastcall VidSchiCompleteHwQueueSignalPacket(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // r14
  int v8; // r8d
  _DWORD *v9; // rsi
  int v10; // eax
  unsigned int i; // ebp
  __int64 v12; // rcx
  struct _KEVENT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v2 = *((_QWORD *)a2 + 12);
  v4 = *((_QWORD *)a2 + 100);
  v5 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 40LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 808) = *((_QWORD *)a2 + 101);
  }
  else if ( !*((_QWORD *)a2 + 101) )
  {
    if ( (byte_14008A204 & 4) != 0 )
    {
      v8 = *((_DWORD *)a2 + 70);
      if ( (v8 & 0x10) != 0 )
      {
        v14 = *((_QWORD *)a2 + 11);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 56);
          if ( !v15 || (*(_DWORD *)(v14 + 112) & 0x40) != 0 )
            v15 = *((_QWORD *)a2 + 11);
        }
        else
        {
          v15 = *(_QWORD *)(v2 + 48);
          if ( !v15 )
            LODWORD(v15) = v2;
        }
        McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
          v15,
          v14,
          v8,
          1,
          v15,
          *((_DWORD *)a2 + 28),
          v8,
          *((_DWORD *)a2 + 71),
          (__int64)a2 + 288,
          (__int64)a2 + 544,
          (char)a2);
      }
    }
    v9 = (_DWORD *)((char *)a2 + 280);
    v10 = *((_DWORD *)a2 + 70);
    if ( (v10 & 2) != 0 )
    {
      v13 = (struct _KEVENT *)*((_QWORD *)a2 + 68);
      if ( (v10 & 8) != 0 )
      {
        VmBusSendSignalGuestEvent(v13, 0LL);
      }
      else
      {
        KeSetEvent(v13, 0, 0);
        ObfDereferenceObject(*((PVOID *)a2 + 68));
      }
      *((_QWORD *)a2 + 68) = 0LL;
    }
    else
    {
      for ( i = 0; i < *((_DWORD *)a2 + 71); ++i )
        VidSchiCompleteSignalSyncObject(
          a1,
          *((struct _VIDSCH_SYNC_OBJECT **)a2 + i + 36),
          (*v9 & 4) != 0,
          (unsigned __int64 *)a2 + i + 68,
          1);
      if ( *(_DWORD *)(v7 + 868) )
        VidSchUnwaitFlipQueue(a1, v7);
    }
    goto LABEL_10;
  }
  v12 = *((_QWORD *)a2 + 101);
  if ( v12 )
    *(_QWORD *)(v12 + 800) = *((_QWORD *)a2 + 100);
  *((_QWORD *)a2 + 100) = 0LL;
  v9 = (_DWORD *)((char *)a2 + 280);
  *((_QWORD *)a2 + 101) = 0LL;
LABEL_10:
  *((_DWORD *)a2 + 20) |= 4u;
  if ( (*v9 & 2) == 0 && *((_DWORD *)a2 + 71) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((char **)a2 + v5++ + 36), v4);
    while ( v5 < *((_DWORD *)a2 + 71) );
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}

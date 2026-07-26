/*
 * XREFs of ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x14002C840
 * Callers:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x14007EE80 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400D8E40 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreePacket @ 0x14002D9B0 (NdisFreePacket.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisXlateSendCompletePacketToNetBufferList(struct _NDIS_PACKET *a1, int a2)
{
  __int64 NdisPacketOobOffset; // rcx
  __int64 v5; // r14
  __int64 v6; // rdi
  _MDL *Head; // rdx
  _MDL *Tail; // rcx
  unsigned int Flags; // eax

  --*(_DWORD *)&a1[-1].ProtocolReserved[4];
  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    v6 = *(__int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
    *(_DWORD *)(v6 + 140) = a2;
    *(_MDL **)((char *)&a1[1].Private.Head + a1->Private.NdisPacketOobOffset) = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v6, 0LL, 0x18u, a1, 0);
    return (struct _NET_BUFFER_LIST *)v6;
  }
  v5 = *(__int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
  v6 = *(_QWORD *)(v5 + 128);
  *(_QWORD *)(v6 + 144) = *(_QWORD *)(&a1->Private.ValidCounts + a1->Private.NdisPacketOobOffset);
  *(_QWORD *)(v6 + 160) = *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 8];
  *(_QWORD *)(v6 + 168) = *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 16];
  *(_QWORD *)(v6 + 176) = *(unsigned __int64 *)((char *)&a1->Reserved[1] + a1->Private.NdisPacketOobOffset);
  *(_QWORD *)(v6 + 184) = *(_QWORD *)((char *)&a1[1].Private.PhysicalCount + a1->Private.NdisPacketOobOffset);
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v6, 0LL, 0x14u, a1, 0);
  Head = a1->Private.Head;
  if ( Head )
  {
    Tail = a1->Private.Tail;
    Tail->ByteCount = *(_DWORD *)a1->ProtocolReserved;
    Tail->Next = *(struct _MDL **)&a1[1].Private.PhysicalCount;
    Head->ByteOffset -= *(_DWORD *)(v5 + 16);
    Head->ByteCount += *(_DWORD *)(v5 + 16);
    if ( (Head->MdlFlags & 5) != 0 )
      Head->MappedSystemVa = (char *)Head->MappedSystemVa - *(unsigned int *)(v5 + 16);
  }
  Flags = a1->Private.Flags;
  if ( (Flags & 0x100) != 0 )
  {
    a1->Private.Flags = Flags & 0xFFFFFEFF;
    *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 24] = 0LL;
  }
  NdisFreePacket(a1);
  if ( a2 )
  {
    if ( !*(_DWORD *)(v6 + 140) )
      *(_DWORD *)(v6 + 140) = a2;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 96), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v6 = 0LL;
    return (struct _NET_BUFFER_LIST *)v6;
  }
  return 0LL;
}

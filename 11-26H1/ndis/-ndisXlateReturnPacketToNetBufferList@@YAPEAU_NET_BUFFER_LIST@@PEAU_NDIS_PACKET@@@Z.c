/*
 * XREFs of ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870
 * Callers:
 *     ?ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14002CDC0 (-ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140033B50 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14007C740 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008F390 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D8A20 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreePacket @ 0x14002D9B0 (NdisFreePacket.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisXlateReturnPacketToNetBufferList(struct _NDIS_PACKET *a1)
{
  __int64 NdisPacketOobOffset; // rax
  struct _NET_BUFFER_LIST *v3; // rdi
  _MDL *Head; // rdx
  _NET_BUFFER *FirstNetBuffer; // r8
  _MDL *Tail; // rcx
  unsigned int Flags; // eax
  __int64 v8; // rcx

  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v3 = *(struct _NET_BUFFER_LIST **)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
  v3->NetBufferListInfo[0] = *(void **)(&a1->Private.ValidCounts + a1->Private.NdisPacketOobOffset);
  v3->NetBufferListInfo[2] = *(void **)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 8];
  v3->NetBufferListInfo[3] = *(void **)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 16];
  v3->NetBufferListInfo[4] = *(void **)((char *)&a1->Reserved[1] + a1->Private.NdisPacketOobOffset);
  v3->NetBufferListInfo[5] = *(void **)((char *)&a1[1].Private.PhysicalCount + a1->Private.NdisPacketOobOffset);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, 0LL, 0x1Eu, a1, 0);
  }
  else
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, 0LL, 0x1Au, a1, 0);
    Head = a1->Private.Head;
    FirstNetBuffer = v3->FirstNetBuffer;
    if ( Head )
    {
      Tail = a1->Private.Tail;
      Tail->ByteCount = *(_DWORD *)a1->MiniportReserved;
      Tail->Next = *(struct _MDL **)&a1->MacReserved[8];
      Head->ByteOffset -= FirstNetBuffer->CurrentMdlOffset;
      Head->ByteCount += FirstNetBuffer->CurrentMdlOffset;
      if ( (Head->MdlFlags & 5) != 0 )
        Head->MappedSystemVa = (char *)Head->MappedSystemVa - FirstNetBuffer->CurrentMdlOffset;
    }
    Flags = a1->Private.Flags;
    if ( (Flags & 0x100) != 0 )
    {
      v8 = a1->Private.NdisPacketOobOffset;
      a1->Private.Flags = Flags & 0xFFFFFEFF;
      *(_QWORD *)&a1->MacReserved[v8 + 24] = 0LL;
    }
    NdisFreePacket(a1);
  }
  return v3;
}

/*
 * XREFs of ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140056AF0
 * Callers:
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140056990 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8330 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140027B00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x140056CF0 (-ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x140056D50 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 */

bool __fastcall ndisXlateSendPacketArrayToNetBufferLists(struct _NDIS_PKT_ARRAY_TO_NBLS *a1)
{
  unsigned int v2; // ecx
  char v3; // r8
  struct _NET_BUFFER_LIST *v4; // r14
  __int64 v5; // r15
  _QWORD *p_Alignment; // r12
  unsigned int v7; // ebp
  int v8; // esi
  int v9; // edx
  struct _NDIS_PACKET **v10; // rbx
  struct _NDIS_PACKET *v11; // rax
  int v12; // eax
  bool result; // al
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v15; // rdi
  unsigned int v16; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rbx
  char v18; // [rsp+70h] [rbp+8h]
  unsigned int v19; // [rsp+78h] [rbp+10h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = 1;
  v19 = v2;
  v4 = 0LL;
  v18 = 1;
  v5 = *((_QWORD *)a1 + 1);
  p_Alignment = 0LL;
  v7 = *((_DWORD *)a1 + 8);
  v8 = 0;
  while ( 1 )
  {
    v9 = v8;
    if ( v7 >= v2 )
    {
LABEL_9:
      *((_DWORD *)a1 + 10) = v8;
      *((_DWORD *)a1 + 8) = v7;
      result = v7 != v2;
      *((_QWORD *)a1 + 3) = v4;
      return result;
    }
    v10 = (struct _NDIS_PACKET **)(v5 + 8LL * v7);
    v11 = *v10;
    if ( v3 == 1 )
    {
      v8 |= 2u;
      v18 = 0;
      if ( SLOBYTE(v11->Private.Flags) < 0 )
        v8 = v9;
    }
    else
    {
      v12 = v11->Private.Flags & 0x80;
      if ( (v8 & 2) != 0 )
      {
        if ( v12 )
          goto LABEL_9;
      }
      else if ( !v12 )
      {
        goto LABEL_9;
      }
    }
    NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
    v15 = NetBufferAndNetBufferList;
    if ( !NetBufferAndNetBufferList )
      break;
    ndisPacketToNetBuffer(*v10, NetBufferAndNetBufferList->FirstNetBuffer);
    if ( !v4 )
      v4 = v15;
    if ( p_Alignment )
      *p_Alignment = v15;
    v15->SourceHandle = *(void **)a1;
    p_Alignment = &v15->Link.Alignment;
    v15->NdisReserved[0] = *v10;
    ndisCopyPacketInfoToNBL(*v10, v15, 0LL);
    LOBYTE(v4->NetBufferListInfo[7]) = (*v10)->Private.Flags & 0xF;
    v4->NetBufferListInfo[5] = *(void **)((char *)&(*v10)[1].Private.PhysicalCount + (*v10)->Private.NdisPacketOobOffset);
    v15->Flags |= 0x10u;
    v16 = v15->Flags | 0x800;
    if ( ((*v10)->Private.NdisPacketFlags & 0x20) == 0 )
      v16 = v15->Flags & 0xFFFFF7FF;
    v15->Flags = v16;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v15, 0LL, 0x15u, *v10, 0);
    v2 = v19;
    ++v7;
    v3 = v18;
  }
  if ( v4 )
  {
    do
    {
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal(v4, 0LL, 0x16u, 0LL, 0);
      *(_QWORD *)(v4->Link.Region + 32) = 0LL;
      Alignment = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
      NdisFreeNetBufferList(v4);
      v4 = Alignment;
    }
    while ( Alignment );
  }
  *((_QWORD *)a1 + 3) = 0LL;
  return 0;
}

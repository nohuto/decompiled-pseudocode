/*
 * XREFs of ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14005A6F0
 * Callers:
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14008B440 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400D8D90 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400D8E40 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DCC10 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DCE40 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSendComplete @ 0x1400DD7F0 (NdisMSendComplete.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400DEA10 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDISM_SEND_PACKET_STATS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _MDL *Head; // rbx
  char *MappedSystemVa; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  struct _MDL *Next; // rcx
  ULONG i; // edx
  __int64 v8; // rcx
  char v9; // dl
  _NDIS_MINIPORT_STATS *v10; // rax

  Head = a2->Private.Head;
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)Head->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
  {
    Next = Head->Next;
    for ( i = Head->ByteCount; Next; Next = Next->Next )
      i += Next->ByteCount;
    v8 = i;
    BottomIfStats->ifHCOutOctets += i;
    if ( !MappedSystemVa || a1->MediaType )
    {
      v10 = a1->BottomIfStats;
    }
    else
    {
      v9 = *MappedSystemVa;
      if ( *MappedSystemVa == -1
        && MappedSystemVa[1] == -1
        && MappedSystemVa[2] == -1
        && MappedSystemVa[3] == -1
        && MappedSystemVa[4] == -1
        && MappedSystemVa[5] == -1 )
      {
        ++a1->BottomIfStats->ifHCOutBroadcastPkts;
        a1->BottomIfStats->ifHCOutBroadcastOctets += v8;
        return;
      }
      v10 = a1->BottomIfStats;
      if ( (v9 & 1) != 0 )
      {
        ++v10->ifHCOutMulticastPkts;
        a1->BottomIfStats->ifHCOutMulticastOctets += v8;
        return;
      }
    }
    ++v10->ifHCOutUcastPkts;
    a1->BottomIfStats->ifHCOutUcastOctets += v8;
  }
}

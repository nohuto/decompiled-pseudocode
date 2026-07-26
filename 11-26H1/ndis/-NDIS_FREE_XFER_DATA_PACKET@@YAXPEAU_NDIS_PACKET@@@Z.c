/*
 * XREFs of ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180
 * Callers:
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14002BB60 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14007C740 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B6D0 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B43A0 (-ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B4510 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8500 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D87B0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D8A20 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     NdisFreePacket @ 0x14002D9B0 (NdisFreePacket.c)
 */

void __fastcall NDIS_FREE_XFER_DATA_PACKET(PNDIS_PACKET Packet)
{
  _MDL *Head; // rdi
  SIZE_T ByteCount; // rsi

  Head = Packet->Private.Head;
  ByteCount = Head->ByteCount;
  if ( (Head->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Head->MappedSystemVa, Head);
  if ( (unsigned int)ByteCount >= 0x64 )
  {
    if ( (unsigned int)ByteCount >= 0x5EA )
    {
      MmSizeOfMdl((PVOID)0xFFF, ByteCount);
      ExFreePoolWithTag(Head, 0);
    }
    else
    {
      ExFreeToNPagedLookasideList(&ndisRcv1514BytesLL, Head);
    }
  }
  else
  {
    ExFreeToNPagedLookasideList(&ndisRcv100BytesLL, Head);
  }
  LODWORD(Packet[-1].Reserved[1]) &= ~1u;
  NdisFreePacket(Packet);
}

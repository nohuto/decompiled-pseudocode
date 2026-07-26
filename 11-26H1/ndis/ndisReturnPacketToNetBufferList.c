/*
 * XREFs of ndisReturnPacketToNetBufferList @ 0x14008F390
 * Callers:
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B4510 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8500 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D8A20 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400DE328 (-ndisReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisReturnPacketToNetBufferList(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  struct _NET_BUFFER_LIST *v3; // rax

  v3 = ndisXlateReturnPacketToNetBufferList(a2);
  if ( v3 )
  {
    v3->Link.Alignment = 0LL;
    ndisReturnNetBufferListsInternal(a1, v3, 0, 0LL);
  }
}

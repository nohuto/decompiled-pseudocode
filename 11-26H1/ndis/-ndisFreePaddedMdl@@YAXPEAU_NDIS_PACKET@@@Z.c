/*
 * XREFs of ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08
 * Callers:
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14008B440 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMFakeSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14009F5C0 (-ndisMFakeSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9EC0 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DCC10 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DCE40 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSendComplete @ 0x1400DD7F0 (NdisMSendComplete.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DE390 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DE7D0 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400DEA10 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DEB90 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreePaddedMdl(struct _NDIS_PACKET *a1)
{
  __int64 NdisPacketOobOffset; // rax
  PMDL *v3; // rbx

  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  a1->Private.Flags &= ~0x10000u;
  v3 = *(PMDL **)((char *)&a1[1].Private.Pool + NdisPacketOobOffset);
  *(void **)((char *)&a1[1].Private.Pool + NdisPacketOobOffset) = 0LL;
  IoFreeMdl(*v3);
  *v3 = 0LL;
  a1->Private.ValidCounts = 0;
}

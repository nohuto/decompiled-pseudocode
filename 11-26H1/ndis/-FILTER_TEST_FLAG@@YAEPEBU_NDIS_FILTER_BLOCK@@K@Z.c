/*
 * XREFs of ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790
 * Callers:
 *     ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x14000E250 (-ndisFDoDirectOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400248D0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     NdisFSendNetBufferLists @ 0x140025020 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x14002DCC0 (NdisFReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140033C40 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x140036740 (NdisMSendNetBufferListsComplete.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x14003B6A0 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x14003D660 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D9E0 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055420 (-ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140071190 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B5114 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ndisPktMonFilterRegister @ 0x140166B30 (ndisPktMonFilterRegister.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

bool __fastcall FILTER_TEST_FLAG(const struct _NDIS_FILTER_BLOCK *a1, int a2)
{
  return (a1->Flags & a2) != 0;
}

/*
 * XREFs of ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400426C0
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFSendNetBufferListsComplete @ 0x14003D660 (NdisFSendNetBufferListsComplete.c)
 *     ??$ndisDataPathExpandStackCallback@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x140042660 (--$ndisDataPathExpandStackCallback@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x140164C30 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsFilterVerified(struct _NDIS_FILTER_BLOCK *a1)
{
  return ndisVerifierNdisDispatch && a1->Header.Type == 5 && a1->VerifierContext;
}

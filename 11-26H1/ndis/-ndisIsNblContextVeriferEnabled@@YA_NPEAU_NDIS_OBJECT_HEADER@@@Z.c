/*
 * XREFs of ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400339F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140038E40 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSetOptionalHandlers @ 0x140095FC0 (NdisSetOptionalHandlers.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009C960 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14009CA40 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 */

bool __fastcall ndisIsNblContextVeriferEnabled(const struct _NDIS_FILTER_BLOCK *a1)
{
  int v1; // eax

  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !a1 )
    goto LABEL_2;
  switch ( a1->Header.Type )
  {
    case 5u:
      LOBYTE(v1) = FILTER_TEST_FLAG(a1, 0x400u) != 0;
      return v1;
    case 0x11u:
      LOBYTE(v1) = (*((_DWORD *)&a1[2].PktMonComp + 14) & 0x1000) != 0;
      return v1;
    case 0x12u:
      return *(_DWORD *)&a1->StackExpansionFallback.WorkItemQueued >> 31;
    default:
LABEL_2:
      LOBYTE(v1) = 0;
      break;
  }
  return v1;
}

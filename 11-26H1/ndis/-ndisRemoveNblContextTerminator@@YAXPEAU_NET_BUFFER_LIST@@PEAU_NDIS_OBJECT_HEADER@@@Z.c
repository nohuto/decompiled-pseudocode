/*
 * XREFs of ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140038E40 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14009C960 (-ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14009CA40 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     NdisFreeNetBufferListContext @ 0x140042540 (NdisFreeNetBufferListContext.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A53B8 (NblContextVerifierBugcheckContextCorruption.c)
 */

void __fastcall ndisRemoveNblContextTerminator(PNET_BUFFER_LIST NetBufferList, struct _NDIS_OBJECT_HEADER *a2)
{
  PNET_BUFFER_LIST i; // rbx

  for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
  {
    if ( *(struct _NDIS_OBJECT_HEADER **)&i->Context->ContextData[i->Context->Offset] != a2 )
      NblContextVerifierBugcheckContextCorruption(i, NetBufferList, a2);
    NdisFreeNetBufferListContext(i, 8u);
  }
}

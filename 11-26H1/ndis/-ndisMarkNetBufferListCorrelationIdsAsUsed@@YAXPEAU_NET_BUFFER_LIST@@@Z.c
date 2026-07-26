/*
 * XREFs of ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140052660
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMarkNetBufferListCorrelationIdsAsUsed(struct _NET_BUFFER_LIST *Alignment)
{
  if ( Alignment )
  {
    if ( byte_14011F740 )
    {
      do
      {
        Alignment->NetBufferListInfo[13] = 0LL;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
    else
    {
      do
      {
        Alignment->NetBufferListInfo[13] = (void *)((unsigned __int64)Alignment->NetBufferListInfo[13] | 0x8000000000000000uLL);
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
}

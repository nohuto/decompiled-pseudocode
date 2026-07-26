/*
 * XREFs of ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140031710
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 */

void __fastcall ndisIndicateAllNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // rsi
  unsigned int v3; // ebp
  unsigned int v4; // r15d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _NET_BUFFER_LIST *v9; // rdx

  if ( a2 )
  {
    v2 = a2;
    v3 = *((_DWORD *)a1 + 172);
    v4 = *((_DWORD *)a1 + 4) | 2;
    do
    {
      FilterNextOpen = v2->FilterNextOpen;
      v7 = 0LL;
      do
      {
        v8 = (unsigned int)v7;
        v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 5 * v7 + 8);
        v7 = (unsigned int)(v7 + 1);
        if ( v9 )
          ndisMIndicateNetBufferListsToOpen(v2, v9, *((_DWORD *)a1 + 10), *((_DWORD *)a1 + 10 * v8 + 20), v4);
      }
      while ( (unsigned int)v7 <= v3 );
      v2 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}

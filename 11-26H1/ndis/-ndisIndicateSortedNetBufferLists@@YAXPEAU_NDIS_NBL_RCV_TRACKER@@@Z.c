/*
 * XREFs of ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140031600
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 */

void __fastcall ndisIndicateSortedNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  unsigned int v2; // r15d
  unsigned int v3; // r13d
  unsigned int v4; // esi
  int v5; // r14d
  struct _NDIS_OPEN_BLOCK *i; // rbx
  unsigned int j; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _NET_BUFFER_LIST *v12; // rdx

  v2 = *((_DWORD *)a1 + 4);
  v3 = *((_DWORD *)a1 + 10);
  v4 = *((_DWORD *)a1 + 172);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 2244LL);
  if ( v5 )
  {
    for ( i = *(struct _NDIS_OPEN_BLOCK **)(*((_QWORD *)a1 + 1) + 16LL); i; i = i->FilterNextOpen )
    {
      if ( (i->OpenFlags & 4) != 0 )
      {
        v9 = 0LL;
        do
        {
          v10 = (unsigned int)v9;
          v11 = 5 * v9;
          v9 = (unsigned int)(v9 + 1);
          v12 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + v11 + 8);
          if ( v12 && *((struct _NDIS_OPEN_BLOCK **)a1 + v11 + 7) != i )
            ndisMIndicateNetBufferListsToOpen(i, v12, v3, *((_DWORD *)a1 + 10 * v10 + 20), v2 | 2);
        }
        while ( (unsigned int)v9 <= v4 );
        if ( !--v5 )
          break;
      }
    }
  }
  for ( j = 1; j <= v4; ++j )
  {
    v8 = j;
    ndisMIndicateNetBufferListsToOpen(
      *((struct _NDIS_OPEN_BLOCK **)a1 + 5 * v8 + 7),
      *((struct _NET_BUFFER_LIST **)a1 + 5 * v8 + 8),
      v3,
      *((_DWORD *)a1 + 10 * v8 + 20),
      v2);
  }
}

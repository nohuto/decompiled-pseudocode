/*
 * XREFs of ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400257A0
 * Callers:
 *     NdisFSendNetBufferLists @ 0x140025020 (NdisFSendNetBufferLists.c)
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003E480 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ??$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400413B0 (--$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NE.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140057020 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 */

void __fastcall ndisFilterSendNetBufferLists(void *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v11; // rbx
  struct _NET_BUFFER_LIST *v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = *((_QWORD *)a1 + 4);
  v9 = *((_QWORD *)a1 + 57);
  v12 = a2;
  if ( *(_BYTE *)v9 == 5 )
  {
    v4 = *(unsigned int *)(v9 + 56);
    if ( (v4 & 0x8000) != 0 && !*(_DWORD *)(v9 + 336) )
    {
      if ( *(_BYTE *)(v7 + 91) && (*(_WORD *)(v7 + 1820) > 1u || *(_BYTE *)(v7 + 1999))
        || (a4 & 2) != 0
        || (v4 = *(unsigned int *)(v7 + 120), (v4 & 0x4000) != 0) )
      {
        ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v9, a2, a3, a4, &v12);
        a2 = v12;
      }
    }
  }
  if ( a2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v11 = *((_QWORD *)a1 + 53) + 96 * v4;
    if ( ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v11 + 16) )
      ndisIterativeDPAddNblsToTracker<0>(v11, a2, a4 | 1, a3);
    else
      ndisInvokeNextSendHandler(
        a2,
        a3,
        a4,
        *((struct _NDIS_OBJECT_HEADER **)a1 + 57),
        *((void **)a1 + 55),
        *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))a1 + 54));
  }
}

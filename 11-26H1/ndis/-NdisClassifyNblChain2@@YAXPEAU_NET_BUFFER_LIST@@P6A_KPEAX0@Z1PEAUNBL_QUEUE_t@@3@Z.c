/*
 * XREFs of ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1400C60F0
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004B850 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     ?NdisNblClassifierForCancelId@@YA_KPEAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1400C61A8 (-NdisNblClassifierForCancelId@@YA_KPEAXPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall NdisClassifyNblChain2(
        struct _NET_BUFFER_LIST *a1,
        unsigned __int64 (*a2)(void *, struct _NET_BUFFER_LIST *),
        void *a3,
        struct NBL_QUEUE_t *a4,
        struct NBL_QUEUE_t *a5)
{
  char **v7; // rsi
  unsigned __int64 v8; // rax
  char *v9; // rbx
  unsigned __int64 v10; // rbp
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  bool v13; // zf
  struct NBL_QUEUE_t *v14; // rdx

  v7 = (char **)a1;
  _mm_prefetch((const char *)a1->Next, 1);
  v8 = NdisNblClassifierForCancelId(a3, a1);
  v9 = *v7;
  v10 = v8;
  v11 = v7;
  while ( v9 )
  {
    _mm_prefetch(*(const char **)v9, 1);
    v12 = NdisNblClassifierForCancelId(a3, (struct _NET_BUFFER_LIST *)v9);
    if ( v12 != v10 )
    {
      *v11 = 0LL;
      v13 = v10 == 0;
      v14 = a4;
      v10 = v12;
      if ( !v13 )
        v14 = a5;
      **((_QWORD **)v14 + 1) = v7;
      v7 = (char **)v9;
      *((_QWORD *)v14 + 1) = v11;
    }
    v11 = v9;
    v9 = *(char **)v9;
  }
  if ( v10 )
    a4 = a5;
  **((_QWORD **)a4 + 1) = v7;
  *((_QWORD *)a4 + 1) = v11;
}

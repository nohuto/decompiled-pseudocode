/*
 * XREFs of ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x1404BBC7C
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x14024DB70 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     SmStoreCompletePendingCompress @ 0x140642E74 (SmStoreCompletePendingCompress.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(__int64 a1)
{
  unsigned __int64 *v1; // rdx
  __int64 *v2; // r8
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h]

  v1 = (unsigned __int64 *)(a1 + 40);
  v2 = *(__int64 **)(a1 + 48);
  v9 = 0;
  LODWORD(v8) = 0;
  if ( v2 == (__int64 *)(a1 + 40) )
    return 0LL;
  v4 = *v1;
  *v1 = *(_QWORD *)*v1 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (__int64 *)v4 == v2 )
  {
    *(_QWORD *)(a1 + 48) = a1 + 40;
    *v1 = 0LL;
  }
  else
  {
    *v2 = *v2 & 7 | (8 * ((unsigned __int64)*v2 >> 3) - 8);
  }
  if ( !v4 )
    return 0LL;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = SmStoreCompletePendingCompress((struct _SM_COMPRESSED_PAGE_HEADER *)(v6 + 112), (__int64)&v8);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompleteEntry((__int64 *)a1, v6, v9, v8, v7);
  *(_QWORD *)v4 = *(_DWORD *)v4 & 7 | ((**(_QWORD **)(a1 + 64) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(a1 + 64) = v4 | **(_DWORD **)(a1 + 64) & 7;
  result = 1LL;
  *(_QWORD *)(a1 + 64) = v4;
  return result;
}

/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021C100
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x14024DB70 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 * Callees:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14020C9A0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14027EE40 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     SmKmStoreGet @ 0x140356910 (SmKmStoreGet.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int128 *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3)
{
  __int128 *v3; // rdi
  unsigned int v6; // ebx
  __int128 *result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 *v11; // rsi
  unsigned __int16 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _SLIST_ENTRY *v16; // r10
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[32]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (__int128 *)(a1 + 120);
  *((_QWORD *)&v17 + 1) = &v17;
  v6 = 0;
  *(_QWORD *)&v17 = 0LL;
LABEL_2:
  if ( *((__int128 **)v3 + 1) != v3 )
  {
    v17 = *v3;
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = 0LL;
  }
  result = &v17;
  if ( *((__int128 **)&v17 + 1) != &v17 || v6 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 136), a3);
    while ( 1 )
    {
      if ( *((__int128 **)&v17 + 1) == &v17 )
      {
        v8 = 0LL;
        if ( !v6 || *((__int128 **)v3 + 1) != v3 )
        {
          a3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 136));
          goto LABEL_2;
        }
      }
      else
      {
        v8 = v17;
        *(_QWORD *)&v17 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v8 == *((_QWORD *)&v17 + 1) )
        {
          *(_QWORD *)&v17 = 0LL;
          *((_QWORD *)&v17 + 1) = &v17;
        }
        else
        {
          **((_QWORD **)&v17 + 1) = **((_QWORD **)&v17 + 1) & 7LL | (8LL * (**((_QWORD **)&v17 + 1) >> 3) - 8);
        }
        v9 = 2LL * v6;
        v19[v9 + 1] = 0LL;
        LODWORD(v19[v9 + 1]) = *(_DWORD *)(v8 + 24);
        v10 = *(_QWORD *)(v8 + 104);
        v19[v9] = v8;
        WORD2(v19[v9 + 1]) = 1;
        HIWORD(v19[v9 + 1]) = *(_WORD *)(v10 + 2464) & 0x3FF;
        ++v6;
      }
      if ( v6 == 16 || !v8 )
      {
        v18[0] = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a2, v19, v6);
        if ( (v18[0] & 0x80000000) != 0 )
        {
          v11 = (unsigned __int16 *)v19;
          v12 = (unsigned __int16 *)&v19[2 * v6];
          if ( v19 < (_QWORD *)v12 )
          {
            do
            {
              v13 = v11[7];
              *(_DWORD *)(*(_QWORD *)v11 + 12LL) |= 0x40u;
              v14 = SmKmStoreGet(a2, v13);
              SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v15, v14, v16, v18);
              v11 += 8;
            }
            while ( v11 < v12 );
          }
        }
        v6 = 0;
      }
    }
  }
  --*(_DWORD *)(a1 + 140);
  return result;
}

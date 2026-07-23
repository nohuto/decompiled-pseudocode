/*
 * XREFs of rapidhash_internal @ 0x14024D090
 * Callers:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     RtlHashBytes2 @ 0x14024D064 (RtlHashBytes2.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x14024DB70 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     SmHpChunkUnprotect @ 0x14024EF10 (SmHpChunkUnprotect.c)
 *     SmHpBufferUpdateFullness @ 0x14024F400 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x14024F5F4 (SmHpUnprotectListNeighbors.c)
 *     SmHpChunkAlloc @ 0x14024FF10 (SmHpChunkAlloc.c)
 *     SmHpChunkHeapProtect @ 0x1402510C4 (SmHpChunkHeapProtect.c)
 *     MiValidateMdlTracker @ 0x1404E901C (MiValidateMdlTracker.c)
 *     MiAddMdlTracker @ 0x1404ED400 (MiAddMdlTracker.c)
 *     SmStoreHashCompressedData @ 0x1405269F8 (SmStoreHashCompressedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rapidhash_internal(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int128 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int128 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int128 v18; // rax
  unsigned __int8 *v20; // rdx
  unsigned __int64 v21; // rax

  v3 = a2;
  v4 = a1;
  v5 = a2 ^ (((a3 ^ 0x2D358DCCAA6C78A5uLL) * (unsigned __int128)0x8BB84B93962EACC9uLL) >> 64) ^ (0x8BB84B93962EACC9uLL
                                                                                               * (a3 ^ 0x2D358DCCAA6C78A5LL)) ^ a3;
  if ( a2 <= 0x10 )
  {
    if ( a2 < 4 )
    {
      if ( a2 )
      {
        v16 = a1[a2 - 1] | ((((unsigned __int64)*a1 << 24) | a1[a2 >> 1]) << 32);
        v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
        v16 = 0LL;
      }
    }
    else
    {
      v20 = &a1[a2 - 4];
      v16 = *(unsigned int *)v20 | ((unsigned __int64)*(unsigned int *)a1 << 32);
      v21 = (v3 & 0x18) >> (v3 >> 3);
      v17 = *(unsigned int *)&v20[-v21] | ((unsigned __int64)*(unsigned int *)&a1[v21] << 32);
    }
  }
  else
  {
    v6 = a2;
    if ( a2 <= 0x30 )
      goto LABEL_9;
    v7 = v5;
    v8 = v5;
    if ( a2 < 0x60 )
      goto LABEL_7;
    v9 = a2 / 0x60;
    v6 = a2 % 0x60;
    do
    {
      v10 = (((v4[4] ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)(v4[5] ^ v7)) >> 64) ^ v4[11] ^ ((v4[4] ^ 0x4B33A62ED433D4A3LL)
                                                                                                  * (v4[5] ^ v7));
      v5 = (((v4[6] ^ 0x2D358DCCAA6C78A5uLL)
           * ((((*v4 ^ 0x2D358DCCAA6C78A5uLL) * (unsigned __int128)(v4[1] ^ v5)) >> 64) ^ v4[7] ^ ((*v4 ^ 0x2D358DCCAA6C78A5LL)
                                                                                                 * (v4[1] ^ v5)))) >> 64) ^ ((v4[6] ^ 0x2D358DCCAA6C78A5LL) * ((((*v4 ^ 0x2D358DCCAA6C78A5uLL) * (unsigned __int128)(v4[1] ^ v5)) >> 64) ^ v4[7] ^ ((*v4 ^ 0x2D358DCCAA6C78A5LL) * (v4[1] ^ v5))));
      v11 = (v4[8] ^ 0x8BB84B93962EACC9uLL)
          * ((((v4[2] ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(v4[3] ^ v8)) >> 64) ^ v4[9] ^ ((v4[2] ^ 0x8BB84B93962EACC9uLL)
                                                                                                  * (v4[3] ^ v8)));
      v12 = v4[10];
      v4 += 12;
      v8 = *((_QWORD *)&v11 + 1) ^ v11;
      v7 = (((v12 ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)v10) >> 64) ^ ((v12 ^ 0x4B33A62ED433D4A3LL) * v10);
      --v9;
    }
    while ( v9 );
    v3 = a2;
    if ( v6 >= 0x30 )
    {
LABEL_7:
      v13 = v4[5] ^ v7;
      v5 = (((*v4 ^ 0x2D358DCCAA6C78A5uLL) * (unsigned __int128)(v4[1] ^ v5)) >> 64) ^ ((*v4 ^ 0x2D358DCCAA6C78A5LL)
                                                                                      * (v4[1] ^ v5));
      v14 = (v4[2] ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(v4[3] ^ v8);
      v15 = v4[4];
      v4 += 6;
      v8 = *((_QWORD *)&v14 + 1) ^ v14;
      v7 = (((v15 ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)(unsigned __int64)v13) >> 64) ^ ((v15 ^ 0x4B33A62ED433D4A3LL)
                                                                                               * v13);
      v6 -= 48LL;
    }
    v5 ^= v8 ^ v7;
    if ( v6 > 0x10 )
    {
LABEL_9:
      v5 = (((*v4 ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)(v4[1] ^ v5 ^ 0x8BB84B93962EACC9uLL)) >> 64) ^ ((*v4 ^ 0x4B33A62ED433D4A3LL) * (v4[1] ^ v5 ^ 0x8BB84B93962EACC9uLL));
      if ( v6 > 0x20 )
        v5 = (((v4[2] ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)(v4[3] ^ v5)) >> 64) ^ ((v4[2] ^ 0x4B33A62ED433D4A3LL)
                                                                                          * (v4[3] ^ v5));
    }
    v16 = *(_QWORD *)((char *)v4 + v6 - 16);
    v17 = *(_QWORD *)((char *)v4 + v6 - 8);
  }
  v18 = (v3 ^ ((v16 ^ 0x8BB84B93962EACC9uLL) * (v5 ^ v17)) ^ 0x2D358DCCAA6C78A5LL)
      * ((((v16 ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(v5 ^ v17)) >> 64) ^ 0x8BB84B93962EACC9uLL);
  return *((_QWORD *)&v18 + 1) ^ v18;
}

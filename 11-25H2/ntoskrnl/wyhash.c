/*
 * XREFs of wyhash @ 0x1403A0738
 * Callers:
 *     SmHpChunkHeapProtect @ 0x140396B3C (SmHpChunkHeapProtect.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140398600 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14039D230 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpChunkFree @ 0x14039EAF0 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14039ED20 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpBufferUpdateFullness @ 0x14039F7E0 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x14039F9D4 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtectEx @ 0x14039FBF0 (SmHpBufferProtectEx.c)
 *     RtlHashBytes2 @ 0x1403A0720 (RtlHashBytes2.c)
 *     SmHpChunkAlloc @ 0x1403A08F0 (SmHpChunkAlloc.c)
 *     SmHpChunkUnprotect @ 0x1403A0B40 (SmHpChunkUnprotect.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x1403A142C (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     SmStoreCopyHashCompressedBuffer @ 0x14046C4A4 (SmStoreCopyHashCompressedBuffer.c)
 *     MiValidateMdlTracker @ 0x1404AD7B8 (MiValidateMdlTracker.c)
 *     MiAddMdlTracker @ 0x1404D2BE8 (MiAddMdlTracker.c)
 *     SmStoreHashCompressedData @ 0x1404F32F4 (SmStoreHashCompressedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wyhash(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r11
  __int64 v9; // r11
  unsigned __int128 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int128 v14; // rax
  unsigned __int128 v15; // rax
  unsigned __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx

  v5 = (((a3 ^ 0x2D358DCCAA6C78A5uLL) * (unsigned __int128)0x8BB84B93962EACC9uLL) >> 64) ^ (0x8BB84B93962EACC9uLL
                                                                                          * (a3 ^ 0x2D358DCCAA6C78A5LL)) ^ a3;
  if ( a2 <= 0x10 )
  {
    if ( a2 < 4 )
    {
      v13 = 0LL;
      if ( a2 )
        v12 = *((unsigned __int8 *)a1 + a2 - 1) | ((((unsigned __int64)*(unsigned __int8 *)a1 << 8) | *((unsigned __int8 *)a1 + (a2 >> 1))) << 8);
      else
        v12 = 0LL;
    }
    else
    {
      v20 = (a2 >> 1) & 0x7FFFFFFFFFFFFFFCLL;
      v12 = ((unsigned __int64)*(unsigned int *)a1 << 32) | *(unsigned int *)((char *)a1 + v20);
      v13 = ((unsigned __int64)*(unsigned int *)((char *)a1 + a2 - 4) << 32) | *(unsigned int *)((char *)a1
                                                                                               + a2
                                                                                               - v20
                                                                                               - 4);
    }
  }
  else
  {
    v6 = a2;
    if ( a2 < 0x30 )
      goto LABEL_8;
    v7 = v5;
    v8 = v5;
    do
    {
      v6 -= 48LL;
      v9 = a1[5] ^ v8;
      v5 = (((*a1 ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(a1[1] ^ v5)) >> 64) ^ ((*a1 ^ 0x8BB84B93962EACC9uLL)
                                                                                      * (a1[1] ^ v5));
      v10 = (a1[2] ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)(a1[3] ^ v7);
      v11 = a1[4];
      a1 += 6;
      v7 = *((_QWORD *)&v10 + 1) ^ v10;
      v8 = (((v11 ^ 0x4D5A2DA51DE1AA47uLL) * (unsigned __int128)(unsigned __int64)v9) >> 64) ^ ((v11 ^ 0x4D5A2DA51DE1AA47LL)
                                                                                              * v9);
    }
    while ( v6 >= 0x30 );
    v5 ^= v7 ^ v8;
    if ( v6 > 0x10 )
    {
LABEL_8:
      v17 = ((v6 - 17) >> 4) + 1;
      v6 += -16LL * v17;
      do
      {
        v18 = a1[1] ^ v5;
        v19 = *a1 ^ 0x8BB84B93962EACC9uLL;
        a1 += 2;
        v5 = ((v19 * (unsigned __int128)(unsigned __int64)v18) >> 64) ^ (v19 * v18);
        --v17;
      }
      while ( v17 );
    }
    v12 = *(_QWORD *)((char *)a1 + v6 - 16);
    v13 = *(_QWORD *)((char *)a1 + v6 - 8);
  }
  v14 = (v12 ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(v5 ^ v13);
  v15 = ((unsigned __int64)v14 ^ a2 ^ 0x2D358DCCAA6C78A5LL)
      * (unsigned __int128)(*((_QWORD *)&v14 + 1) ^ 0x8BB84B93962EACC9uLL);
  return *((_QWORD *)&v15 + 1) ^ v15;
}

/*
 * XREFs of SmStoreCompletePendingCompress @ 0x140642E74
 * Callers:
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x1404BBC7C (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 * Callees:
 *     ?SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z @ 0x14064291C (-SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 */

__int64 __fastcall SmStoreCompletePendingCompress(
        struct _SM_COMPRESSED_PAGE_HEADER *a1,
        int a2,
        int a3,
        unsigned int *a4,
        int *a5)
{
  unsigned int *v5; // r14
  unsigned int v9; // esi
  int v10; // edi
  int v11; // ebx
  unsigned int v12; // ebp
  int v13; // eax
  unsigned int v15[4]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = 0;
  v5 = v15;
  v9 = (a2 == 2) + 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = SmHwAcceleratorWaitForRequest(a3, v12, 0, (_DWORD)v5, (__int64)&v16);
    if ( v13 < 0 )
      v11 = v13;
    v10 += v16;
    ++v12;
    LODWORD(v5) = (_DWORD)v5 + 4;
  }
  while ( v12 < v9 );
  if ( v11 < 0 || (v11 = SmStoreCompressCompleteCompressedChunks(a1, v15, v9, a4), v11 < 0) )
    v10 = -1;
  *a5 = v10;
  return (unsigned int)v11;
}

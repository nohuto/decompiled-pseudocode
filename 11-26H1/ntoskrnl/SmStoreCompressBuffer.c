/*
 * XREFs of SmStoreCompressBuffer @ 0x14024CEF0
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140463C00 (RtlCompressBuffer.c)
 *     ?SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z @ 0x14064291C (-SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z.c)
 *     SmHwAcceleratorIssueRequest @ 0x140643658 (SmHwAcceleratorIssueRequest.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SmStoreCompressBuffer(
        int a1,
        UCHAR *a2,
        struct _SM_COMPRESSED_PAGE_HEADER *a3,
        void *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // ebp
  UCHAR *v9; // r15
  NTSTATUS v10; // edi
  USHORT v11; // bx
  unsigned int v12; // esi
  int v13; // r8d
  unsigned int *v15; // rbx
  unsigned int v16; // r13d
  unsigned int v17; // r10d
  ULONG v18; // r8d
  ULONG CompressedBufferSize; // r9d
  ULONG v20; // r8d
  UCHAR *v21; // rdx
  int v22; // eax
  unsigned int v23; // [rsp+50h] [rbp-58h]
  UCHAR *v24; // [rsp+58h] [rbp-50h]
  unsigned int v25[18]; // [rsp+60h] [rbp-48h] BYREF
  ULONG v26; // [rsp+B0h] [rbp+8h]
  ULONG v27; // [rsp+C0h] [rbp+18h]

  v6 = 0;
  v9 = a2;
  v10 = 0;
  v11 = word_140017648[a1];
  v12 = 0;
  v13 = 4096 - ((unsigned __int16)a3 & 0xFFF);
  if ( !a1 )
    return guard_dispatch_icall_no_overrides(v11 & 0xFF00, a2, 4096LL);
  v16 = 0;
  v17 = (a1 == 2) + 1;
  v23 = v17;
  v18 = v13 - (2 * v17 - 2);
  CompressedBufferSize = v18 >> 1;
  if ( a1 != 2 )
    CompressedBufferSize = v18;
  v20 = 2048;
  if ( a1 != 2 )
    v20 = 4096;
  v27 = CompressedBufferSize;
  v26 = v20;
  v21 = (UCHAR *)a3 + 2 * v17 - 2;
  while ( 1 )
  {
    v22 = a5;
    v24 = v21;
    if ( v16 >= v17 )
      break;
    if ( a5 )
    {
      v10 = SmHwAcceleratorIssueRequest(a5, v16, 0, (_DWORD)v9, v20, (__int64)v21, CompressedBufferSize);
      if ( v10 != 259 )
        goto LABEL_19;
      ++v12;
    }
    else
    {
      v10 = RtlCompressBuffer(v11, v9, v20, v21, CompressedBufferSize, 0, &v25[v16], a4);
      if ( v10 < 0 )
      {
LABEL_19:
        v22 = a5;
        goto LABEL_3;
      }
    }
    v20 = v26;
    CompressedBufferSize = v27;
    v9 += v26;
    v17 = v23;
    v21 = &v24[v27];
    ++v16;
  }
  v12 = 0;
  if ( v10 != 259 )
    return SmStoreCompressCompleteCompressedChunks(a3, v25, v17, a6);
LABEL_3:
  if ( v12 )
  {
    v15 = v25;
    do
    {
      SmHwAcceleratorWaitForRequest(v22, v6, 0, (_DWORD)v15, (__int64)v15);
      v22 = a5;
      ++v6;
      ++v15;
    }
    while ( v6 < v12 );
  }
  return (unsigned int)v10;
}

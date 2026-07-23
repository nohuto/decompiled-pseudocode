/*
 * XREFs of IoFlushAdapterBuffersV2 @ 0x14035E4B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaNextContiguousPiece @ 0x14035D8E4 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14035D930 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140438948 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IoFlushAdapterBuffersV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  int v6; // esi
  __int64 v7; // rdi
  __int64 v10; // rbx
  __int64 *v11; // r15
  unsigned int ContiguousPieceV2; // eax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 ContiguousPiece; // r12
  __int64 v17; // r13
  char v18; // r10
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  size_t v25; // [rsp+20h] [rbp-48h]
  size_t v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+28h] [rbp-40h]
  int v28; // [rsp+28h] [rbp-40h]

  v6 = a5;
  v7 = a4;
  v10 = a1;
  if ( !a5 )
    return 1;
  if ( a1 && !*(_BYTE *)(a1 + 441) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2, a3);
  if ( !a3 )
  {
    if ( a6 || *(_BYTE *)(v10 + 445) )
      return 1;
LABEL_25:
    LOBYTE(v27) = 0;
    LOBYTE(v25) = 0;
    HalpDmaFlushBuffer(a1, a2, v7, a5, v25, v27);
    return 1;
  }
  if ( !v10 || !*(_BYTE *)(v10 + 442) )
  {
    if ( (unsigned int)HalpDmaGetAdapterVersion(v10, a2, a3, a4) == 2 )
      ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(v10, a2, 0LL, v7, a6, a5);
    else
      ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(v10, a2, 0, v7, a6, a5);
    if ( ContiguousPieceV2 == a5
      && *(_QWORD *)(v10 + 144) >= (v7 & 0xFFF)
                                 + (*(_QWORD *)(a2
                                              + 8LL
                                              * (unsigned int)((unsigned __int64)(v7 - *(_QWORD *)(a2 + 32)) >> 12)
                                              + 48) << 12)
                                 + (unsigned __int64)ContiguousPieceV2
                                 - 1 )
    {
      if ( a6 || *(_BYTE *)(v10 + 445) )
        return 1;
      a1 = (unsigned int)HalpDmaGetAdapterCacheAlignment(v10) - 1;
      if ( (a1 & v15) == 0 && (v14 & a1) == 0 )
        goto LABEL_25;
    }
    else if ( a6 )
    {
      return 1;
    }
    LODWORD(v25) = a5;
    HalpDmaSyncMapBuffers(v10, a2, v7, a3, v25, 0, 0, 0);
    return 1;
  }
  v11 = (__int64 *)(a3 + 56);
  if ( a6 )
    goto LABEL_9;
  *v11 = a3;
  do
  {
    ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(v10, a2, a3, v7, 0, v6);
    v17 = v7 & 0xFFF;
    v18 = 0;
    if ( *(_QWORD *)(v10 + 144) < (unsigned __int64)(ContiguousPiece
                                                   + v17
                                                   + (*(_QWORD *)(a2
                                                                + 8LL
                                                                * (unsigned int)((unsigned __int64)(v7
                                                                                                  - *(_QWORD *)(a2 + 32)) >> 12)
                                                                + 48) << 12)
                                                   - 1) )
      goto LABEL_28;
    if ( *(_BYTE *)(v10 + 445) )
      goto LABEL_32;
    v22 = (unsigned int)HalpDmaGetAdapterCacheAlignment(v10) - 1;
    if ( (v22 & v24) != 0 || (v23 & v22) != 0 )
    {
LABEL_28:
      LODWORD(v26) = ContiguousPiece;
      HalpDmaSyncMapBuffers(v10, a2, v7, *v11, v26, v18, v18, v18);
      v19 = *v11;
      v20 = (unsigned __int64)(ContiguousPiece + v17 + 4095) >> 12;
      if ( (_DWORD)v20 )
      {
        v21 = (unsigned int)v20;
        do
        {
          v19 = *(_QWORD *)(v19 + 8);
          --v21;
        }
        while ( v21 );
      }
      *v11 = v19;
    }
    else
    {
      LOBYTE(v28) = v18;
      LOBYTE(v26) = v18;
      HalpDmaFlushBuffer(v22, a2, v7, (unsigned int)ContiguousPiece, v26, v28);
    }
LABEL_32:
    v6 -= ContiguousPiece;
    v7 += ContiguousPiece;
  }
  while ( v6 );
  v11 = (__int64 *)(a3 + 56);
LABEL_9:
  *v11 = a3;
  return 1;
}

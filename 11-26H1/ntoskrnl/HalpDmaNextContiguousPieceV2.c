/*
 * XREFs of HalpDmaNextContiguousPieceV2 @ 0x14035D930
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     HalpDmaNextContiguousPiece @ 0x14035D8E4 (HalpDmaNextContiguousPiece.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035E4B0 (IoFlushAdapterBuffersV2.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaNextContiguousPieceV2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  int v8; // esi
  char v9; // r12
  unsigned __int64 v10; // r8
  bool v11; // r11
  unsigned int v12; // r9d
  unsigned int v13; // ebx
  __int64 v14; // r15
  __int64 *v15; // r14
  unsigned __int64 *v16; // r15
  unsigned int v17; // edx
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 i; // rcx
  bool v22; // cc
  int v23; // eax
  __int64 v24; // r10
  unsigned __int64 v25; // rdx
  __int64 *v26; // rdi
  __int64 v27; // r14

  v8 = 1;
  if ( *(_DWORD *)(a1 + 156) != 2 )
  {
    v23 = HalpCoreDmaAlignment;
    if ( *(_BYTE *)(a1 + 445) )
      v23 = 1;
    v8 = v23;
  }
  v9 = *(_BYTE *)(a1 + 153);
  v10 = *(_QWORD *)(a1 + 144) >> 12;
  v11 = !a5 && !*(_BYTE *)(a1 + 445);
  v12 = 4096 - (a4 & 0xFFF);
  v13 = 4096 - (a4 & 0xFFF);
  v14 = a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v15 = (__int64 *)(v14 + 48);
  if ( *(_QWORD *)(v14 + 48) > v10 || v11 && ((v8 - 1) & (unsigned int)a4) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v22 = v13 <= a6;
    if ( v13 < a6 )
    {
      while ( 1 )
      {
        v25 = v15[1];
        v26 = v15 + 1;
        if ( v25 > v10 )
          break;
        v27 = *v15;
        if ( v27 + 1 == v25
          && ((v27 ^ v25) & 0xFFFFFFFFFFF00000uLL) == 0
          && (v9 == 1 || ((v27 ^ v25) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
        {
          v13 += 4096;
          v15 = v26;
          if ( v13 < a6 )
            continue;
        }
        v22 = v13 <= a6;
        goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      if ( !v22 )
      {
        v13 = a6;
        if ( v11 && ((v8 - 1) & a6) != 0 )
          v13 = a6 & 0xFFFFF000;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 442) || !a6 || v13 )
    return v13;
  v16 = (unsigned __int64 *)(v14 + 56);
  v17 = v12;
  if ( v12 < a6 )
  {
    while ( *v16 > v10 )
    {
      v17 += 4096;
      ++v16;
      if ( v17 >= a6 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( v17 > a6 )
      v17 = a6;
  }
  v18 = *(_QWORD **)(a3 + 56);
  v19 = (_QWORD *)v18[1];
  for ( i = *v18 >> 12; v12 < v17; i = v24 )
  {
    v24 = *v19 >> 12;
    if ( v24 != i + 1 || ((i ^ v24) & 0xFFFFFFFFFFF00000uLL) != 0 || v9 != 1 && ((i ^ v24) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      break;
    v19 = (_QWORD *)v19[1];
    v12 += 4096;
  }
  if ( !v11 || v12 >= 0x1000 || v17 >= v12 << 12 || ((v17 - v12) & (v8 - 1)) == 0 )
  {
    if ( v12 > v17 )
      return v17;
    return v12;
  }
  return v17;
}

/*
 * XREFs of HalpDmaNextContiguousPieceV3 @ 0x140438948
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     HalpDmaNextContiguousPiece @ 0x14035D8E4 (HalpDmaNextContiguousPiece.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035E4B0 (IoFlushAdapterBuffersV2.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalpDmaNextContiguousPieceV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  char v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // r11
  bool v10; // si
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  unsigned __int64 *v14; // r14
  __int64 *v15; // rdi
  unsigned __int64 *v16; // rax
  unsigned int v17; // ecx
  _QWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 *v22; // r12
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  unsigned int v25; // edi
  __int64 v26; // r14
  int AdapterCacheAlignment; // eax
  int v28; // ecx
  char v29; // [rsp+60h] [rbp+8h]
  unsigned __int64 *v30; // [rsp+68h] [rbp+10h]
  unsigned __int64 v32; // [rsp+78h] [rbp+20h]

  v7 = *(_BYTE *)(a1 + 153);
  v8 = *(_QWORD *)(a1 + 144) >> 12;
  v9 = a1;
  v32 = *(_QWORD *)(a1 + 144);
  v29 = v7;
  v10 = !a5 && !*(_BYTE *)(a1 + 445);
  v11 = a6;
  v12 = 4096 - (a4 & 0xFFF);
  v13 = v12;
  v14 = (unsigned __int64 *)(a2 + 8 * ((unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6LL));
  v15 = (__int64 *)v14;
  v30 = v14;
  if ( *v14 > v8 || v10 && (((unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1) & (unsigned int)a4) != 0 )
  {
    v13 = 0;
  }
  else if ( v12 >= v11 )
  {
LABEL_35:
    if ( v13 > v11 )
    {
      v13 = v11;
      if ( v10 )
      {
        AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(v9);
        if ( ((AdapterCacheAlignment - 1) & v11) != 0 )
          v13 &= 0xFFFFF000;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v22 = v15 + 1;
      v23 = v15[1];
      if ( v23 > v8 )
        break;
      v24 = *v15;
      if ( *v15 + 1 == v23 )
      {
        v25 = v11 - v13;
        if ( v11 - v13 > 0x1000 )
          v25 = 4096;
        if ( (v26 = v23 << 12, !HalpDmaCvmConfiguration) && v32 >= v26 + (unsigned __int64)v25 - 1
          || *(_DWORD *)(v9 + 520) == 3 )
        {
          if ( *(_BYTE *)(v9 + 445)
            || a5
            || (v28 = HalpDmaGetAdapterCacheAlignment(v9) - 1, (v28 & (unsigned int)v26) == 0) && (v28 & v25) == 0 )
          {
            if ( ((v24 ^ v23) & 0xFFFFFFFFFFF00000uLL) == 0 && (v29 == 1 || ((v24 ^ v23) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
            {
              v15 = v22;
              v13 += 4096;
              if ( v13 < v11 )
                continue;
            }
          }
        }
      }
      v14 = v30;
      v7 = v29;
      goto LABEL_35;
    }
    v14 = v30;
    v7 = v29;
  }
  if ( !*(_BYTE *)(v9 + 442) || !v11 || v13 )
    return v13;
  v16 = v14 + 1;
  v17 = v12;
  if ( v12 < v11 )
  {
    while ( *v16 > v8 )
    {
      v17 += 4096;
      ++v16;
      if ( v17 >= v11 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( v17 > v11 )
      v17 = v11;
  }
  v18 = *(_QWORD **)(a3 + 56);
  if ( v18 )
  {
    v19 = *v18 >> 12;
    while ( 1 )
    {
      v18 = (_QWORD *)v18[1];
      if ( v12 >= v17 )
        break;
      if ( !v18 )
        break;
      v20 = *v18 >> 12;
      if ( v20 != v19 + 1
        || ((v19 ^ v20) & 0xFFFFFFFFFFF00000uLL) != 0
        || v7 != 1 && ((v19 ^ v20) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        break;
      }
      v19 = *v18 >> 12;
      v12 += 4096;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v12 <= v17 )
    return v12;
  return v17;
}

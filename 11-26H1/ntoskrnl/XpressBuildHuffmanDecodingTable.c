/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x1403C8A30
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x1403C8480 (RtlDecompressBufferXpressHuff.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140626920 (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // r13
  unsigned __int16 *v3; // r12
  __int16 v4; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rsi
  __int16 v9; // dx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rbp
  __int16 v13; // cx
  __int16 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int16 v17; // cx
  unsigned __int64 v18; // rbx
  __int64 v19; // r11
  __int16 v20; // r9
  bool v21; // zf
  __int16 *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  bool v26; // zf
  __int16 *v27; // rdx
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // r9
  __int64 v31; // r11
  unsigned __int64 v32; // rdx
  unsigned __int64 v34; // rax
  _WORD *v35; // rcx
  _WORD *v36; // rdi
  __int64 i; // rcx

  *(_DWORD *)(a1 + 1024) = 33554944;
  v2 = (unsigned __int16 *)(a1 + 1044);
  *(_DWORD *)(a1 + 1028) = 33554944;
  v3 = (unsigned __int16 *)(a1 + 1054);
  v4 = 0;
  *(_DWORD *)(a1 + 1032) = 33554944;
  *(_DWORD *)(a1 + 1036) = 33554944;
  *(_DWORD *)(a1 + 1040) = 33554944;
  *(_WORD *)(a1 + 1044) = 512;
  *(_DWORD *)(a1 + 1046) = 33554944;
  v7 = 0LL;
  *(_DWORD *)(a1 + 1050) = 33554944;
  v8 = 0LL;
  *(_WORD *)(a1 + 1054) = 512;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  do
  {
    v15 = *(_BYTE *)(v10 + a2) & 0xF;
    if ( (*(_BYTE *)(v10 + a2) & 0xF) != 0 )
    {
      *(_WORD *)(a1 + 4 * v8) = *(_WORD *)(a1 + 2 * v15 + 1024);
      v11 = v12;
      *(_WORD *)(a1 + 2 * v15 + 1024) = 2 * v9;
      v13 = v14;
    }
    v16 = (unsigned __int64)*(unsigned __int8 *)(v10 + a2) >> 4;
    if ( v16 )
    {
      *(_WORD *)(a1 + 4 * v11 + 2) = *(_WORD *)(a1 + 2 * v16 + 1024);
      *(_WORD *)(a1 + 2 * v16 + 1024) = 2 * v13 + 1;
    }
    v10 = ++v7;
    v8 = v7;
    v9 = v7;
    v11 = v7;
    v12 = v7;
    v13 = v7;
    v14 = v7;
  }
  while ( v7 < 0x100 );
  v17 = -1023;
  v18 = 15LL;
  v19 = 1024LL;
  v20 = -1024;
  while ( v18 > 0xA )
  {
    v21 = v17 == v20;
    if ( v17 < v20 )
    {
      v22 = (__int16 *)(a1 + 3104 + 2 * v19);
      v19 -= (unsigned __int16)(((unsigned __int16)(v20 - v17 - 1) >> 1) + 1);
      do
      {
        *v22-- = v17;
        v17 += 2;
        v21 = v17 == v20;
      }
      while ( v17 < v20 );
    }
    if ( v21 )
      return 3221226050LL;
    v23 = *v3;
    v17 = v20 + 1;
    if ( v23 != 512 )
    {
      v24 = a1 + 3104 + 2 * v19;
      do
      {
        v24 -= 2LL;
        --v19;
        *(_WORD *)(v24 + 2) = v18 + 16 * v23;
        v23 = *(unsigned __int16 *)(a1 + 2 * v23);
      }
      while ( v23 != 512 );
    }
    --v18;
    v20 = -(__int16)v19;
    --v3;
  }
  v25 = 1023LL;
  v26 = v17 == v20;
  if ( v17 < v20 )
  {
    v27 = (__int16 *)(a1 + 3102);
    v25 = 1023LL - (unsigned __int16)(((unsigned __int16)(v20 - v17 - 1) >> 1) + 1);
    do
    {
      *v27-- = v17;
      v17 += 2;
      v26 = v17 == v20;
    }
    while ( v17 < v20 );
  }
  if ( v26 )
    return 3221226050LL;
  v28 = 0;
  v29 = 10LL;
LABEL_22:
  if ( v29 )
  {
    v30 = *v2;
    v31 = 10 - v29;
    while ( 1 )
    {
      if ( v30 == 512 )
      {
        v25 >>= 1;
        --v29;
        --v2;
        goto LABEL_22;
      }
      v4 = v29 + 16 * v30;
      if ( v28 || (v25 + 1) << v31 > 0x400 )
        return 3221226050LL;
      v32 = v25 << v31;
      if ( v31 == 1 )
        goto LABEL_30;
      if ( v31 == 2 )
        break;
      switch ( v31 )
      {
        case 0LL:
          break;
        default:
          __fastfail(0x25u);
      }
LABEL_31:
      *(_WORD *)(a1 + 2 * v32 + 1056) = v4;
      v30 = *(unsigned __int16 *)(a1 + 2 * v30);
      if ( !v25 )
        v28 = 1;
      --v25;
    }
    *(_WORD *)(a1 + 2 * v32 + 1062) = v4;
    *(_WORD *)(a1 + 2 * v32 + 1060) = v4;
LABEL_30:
    *(_WORD *)(a1 + 2 * v32 + 1058) = v4;
    goto LABEL_31;
  }
  if ( v28 )
    return 0LL;
  v34 = 2LL;
  v35 = (_WORD *)(a1 + 1028);
  while ( v34 <= 0xF )
  {
    if ( *v35 != 512 )
      return 3221226050LL;
    ++v34;
    ++v35;
  }
  if ( *(_WORD *)(a1 + 1026) == 512 )
    return 3221226050LL;
  v36 = (_WORD *)(a1 + 1056);
  for ( i = 512LL; i; --i )
    *v36++ = v4;
  return 0LL;
}

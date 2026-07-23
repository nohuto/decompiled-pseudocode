/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x1800B88D0
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x1800B82F0 (RtlDecompressBufferXpressHuff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // r13
  unsigned __int16 *v3; // r12
  __int16 v4; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rsi
  __int16 v9; // dx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rbp
  __int16 v13; // cx
  __int16 v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int16 v17; // cx
  __int64 v18; // r8
  __int16 v19; // r9
  unsigned __int64 i; // r10
  bool v21; // zf
  __int16 *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  bool v26; // zf
  __int16 *v27; // rdx
  int v28; // edx
  __int64 j; // rbx
  __int64 v30; // r10
  __int64 v31; // rcx
  unsigned __int64 v32; // r9
  _WORD *v34; // rax
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  _WORD *v37; // rcx
  _WORD *v38; // rdi
  __int64 k; // rcx
  _WORD *v40; // rax
  __int64 v41; // r9
  _WORD *v42; // rax
  __int64 v43; // r9
  _WORD *v44; // rax
  __int64 v45; // r9
  _WORD *v46; // rax
  __int64 v47; // r9
  _WORD *v48; // rax
  __int64 v49; // r9

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
  v17 = -1024;
  v18 = 1024LL;
  v19 = -1023;
  for ( i = 15LL; i > 0xA; --i )
  {
    v21 = v19 == v17;
    if ( v19 < v17 )
    {
      v22 = (__int16 *)(a1 + 3104 + 2 * v18);
      v18 -= (unsigned __int16)(((unsigned __int16)(v17 - v19 - 1) >> 1) + 1);
      do
      {
        *v22-- = v19;
        v19 += 2;
        v21 = v19 == v17;
      }
      while ( v19 < v17 );
    }
    if ( v21 )
      return 3221226050LL;
    v19 = v17 + 1;
    v23 = *v3;
    if ( v23 != 512 )
    {
      v24 = a1 + 3104 + 2 * v18;
      do
      {
        v24 -= 2LL;
        --v18;
        *(_WORD *)(v24 + 2) = i + 16 * v23;
        v23 = *(unsigned __int16 *)(a1 + 2 * v23);
      }
      while ( v23 != 512 );
    }
    v17 = -(__int16)v18;
    --v3;
  }
  v25 = 1023LL;
  v26 = v19 == v17;
  if ( v19 < v17 )
  {
    v27 = (__int16 *)(a1 + 3102);
    v25 = 1023LL - (unsigned __int16)(((unsigned __int16)(v17 - v19 - 1) >> 1) + 1);
    do
    {
      *v27-- = v19;
      v19 += 2;
      v26 = v19 == v17;
    }
    while ( v19 < v17 );
  }
  if ( !v26 )
  {
    v28 = 0;
    for ( j = 10LL; j; --j )
    {
      v30 = *v2;
      v31 = 10 - j;
      while ( v30 != 512 )
      {
        v4 = j + 16 * v30;
        if ( v28 || (v25 + 1) << v31 > 0x400 )
          return 3221226050LL;
        v32 = v25 << v31;
        if ( v31 )
        {
          if ( v31 != 1 )
          {
            if ( v31 != 2 )
            {
              switch ( v31 )
              {
                case 3LL:
                  *(_WORD *)(a1 + 2 * v32 + 1070) = v4;
                  *(_WORD *)(a1 + 2 * v32 + 1068) = v4;
                  *(_WORD *)(a1 + 2 * v32 + 1066) = v4;
                  *(_WORD *)(a1 + 2 * v32 + 1064) = v4;
                  break;
                case 4LL:
                  v34 = (_WORD *)(a1 + 2 * (v32 + 529));
                  v35 = 4LL;
                  do
                  {
                    *(v34 - 1) = v4;
                    *v34 = v4;
                    v34[1] = v4;
                    v34[2] = v4;
                    v34 += 4;
                    --v35;
                  }
                  while ( v35 );
                  v30 = *(unsigned __int16 *)(a1 + 2 * v30);
                  if ( !v25 )
                    v28 = 1;
                  --v25;
                  continue;
                case 5LL:
                  v40 = (_WORD *)(a1 + 2 * (v32 + 529));
                  v41 = 8LL;
                  do
                  {
                    *(v40 - 1) = v4;
                    *v40 = v4;
                    v40[1] = v4;
                    v40[2] = v4;
                    v40 += 4;
                    --v41;
                  }
                  while ( v41 );
                  v30 = *(unsigned __int16 *)(a1 + 2 * v30);
                  if ( !v25 )
                    v28 = 1;
                  --v25;
                  continue;
                case 6LL:
                  v44 = (_WORD *)(a1 + 2 * (v32 + 529));
                  v45 = 16LL;
                  do
                  {
                    *(v44 - 1) = v4;
                    *v44 = v4;
                    v44[1] = v4;
                    v44[2] = v4;
                    v44 += 4;
                    --v45;
                  }
                  while ( v45 );
                  v30 = *(unsigned __int16 *)(a1 + 2 * v30);
                  if ( !v25 )
                    v28 = 1;
                  --v25;
                  continue;
                case 7LL:
                  v46 = (_WORD *)(a1 + 2 * (v32 + 529));
                  v47 = 32LL;
                  do
                  {
                    *(v46 - 1) = v4;
                    *v46 = v4;
                    v46[1] = v4;
                    v46[2] = v4;
                    v46 += 4;
                    --v47;
                  }
                  while ( v47 );
                  v30 = *(unsigned __int16 *)(a1 + 2 * v30);
                  if ( !v25 )
                    v28 = 1;
                  --v25;
                  continue;
                case 8LL:
                  v42 = (_WORD *)(a1 + 2 * (v32 + 529));
                  v43 = 64LL;
                  do
                  {
                    *(v42 - 1) = v4;
                    *v42 = v4;
                    v42[1] = v4;
                    v42[2] = v4;
                    v42 += 4;
                    --v43;
                  }
                  while ( v43 );
                  v30 = *(unsigned __int16 *)(a1 + 2 * v30);
                  if ( !v25 )
                    v28 = 1;
                  --v25;
                  continue;
                case 9LL:
                  v48 = (_WORD *)(a1 + 2 * (v32 + 529));
                  v49 = 8LL;
                  do
                  {
                    *(v48 - 1) = v4;
                    *v48 = v4;
                    v48[1] = v4;
                    v48[2] = v4;
                    v48[3] = v4;
                    v48[4] = v4;
                    v48[5] = v4;
                    v48[6] = v4;
                    v48[7] = v4;
                    v48[8] = v4;
                    v48[9] = v4;
                    v48[10] = v4;
                    v48[11] = v4;
                    v48[12] = v4;
                    v48[13] = v4;
                    v48[14] = v4;
                    v48[15] = v4;
                    v48[16] = v4;
                    v48[17] = v4;
                    v48[18] = v4;
                    v48[19] = v4;
                    v48[20] = v4;
                    v48[21] = v4;
                    v48[22] = v4;
                    v48[23] = v4;
                    v48[24] = v4;
                    v48[25] = v4;
                    v48[26] = v4;
                    v48[27] = v4;
                    v48[28] = v4;
                    v48[29] = v4;
                    v48[30] = v4;
                    v48[31] = v4;
                    v48[32] = v4;
                    v48[33] = v4;
                    v48[34] = v4;
                    v48[35] = v4;
                    v48[36] = v4;
                    v48[37] = v4;
                    v48[38] = v4;
                    v48[39] = v4;
                    v48[40] = v4;
                    v48[41] = v4;
                    v48[42] = v4;
                    v48[43] = v4;
                    v48[44] = v4;
                    v48[45] = v4;
                    v48[46] = v4;
                    v48[47] = v4;
                    v48[48] = v4;
                    v48[49] = v4;
                    v48[50] = v4;
                    v48[51] = v4;
                    v48[52] = v4;
                    v48[53] = v4;
                    v48[54] = v4;
                    v48[55] = v4;
                    v48[56] = v4;
                    v48[57] = v4;
                    v48[58] = v4;
                    v48[59] = v4;
                    v48[60] = v4;
                    v48[61] = v4;
                    v48[62] = v4;
                    v48 += 64;
                    --v49;
                  }
                  while ( v49 );
                  v30 = *(unsigned __int16 *)(a1 + 2 * v30);
                  if ( !v25 )
                    v28 = 1;
                  --v25;
                  continue;
                default:
                  __fastfail(0x25u);
              }
            }
            *(_WORD *)(a1 + 2 * v32 + 1062) = v4;
            *(_WORD *)(a1 + 2 * v32 + 1060) = v4;
          }
          *(_WORD *)(a1 + 2 * v32 + 1058) = v4;
        }
        *(_WORD *)(a1 + 2 * v32 + 1056) = v4;
        v30 = *(unsigned __int16 *)(a1 + 2 * v30);
        if ( !v25 )
          v28 = 1;
        --v25;
      }
      v25 >>= 1;
      --v2;
    }
    if ( v28 )
      return 0LL;
    v36 = 2LL;
    v37 = (_WORD *)(a1 + 1028);
    while ( v36 <= 0xF )
    {
      if ( *v37 != 512 )
        return 3221226050LL;
      ++v36;
      ++v37;
    }
    if ( *(_WORD *)(a1 + 1026) != 512 )
    {
      v38 = (_WORD *)(a1 + 1056);
      for ( k = 512LL; k; --k )
        *v38++ = v4;
      return 0LL;
    }
  }
  return 3221226050LL;
}

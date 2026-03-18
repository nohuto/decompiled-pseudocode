/*
 * XREFs of AccelpBuildHuffmanEncoding @ 0x1406DF2C0
 * Callers:
 *     AccelCompressBuffer @ 0x1406DEB60 (AccelCompressBuffer.c)
 * Callees:
 *     qsort @ 0x140536F00 (qsort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall AccelpBuildHuffmanEncoding(__int64 a1)
{
  _QWORD *v1; // rbx
  size_t v2; // rsi
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rax
  _DWORD *v5; // rcx
  _QWORD *v7; // r14
  unsigned __int64 *v8; // r8
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // rdx
  unsigned __int64 *v11; // r10
  unsigned __int64 *v12; // rsi
  unsigned __int64 *v13; // r11
  unsigned __int64 *v14; // r9
  unsigned __int64 *v15; // rbp
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r9
  __int64 v20; // r10
  unsigned __int64 *i; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r11
  unsigned __int64 *j; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 k; // r9
  unsigned __int64 v28; // r8
  _DWORD *v29; // r10

  v1 = *(_QWORD **)(a1 + 80);
  v2 = 0LL;
  v3 = v1;
  memset_0(v1 + 1865, 0, 0x100uLL);
  v4 = 0LL;
  v5 = v1 + 1705;
  do
  {
    if ( *v5 )
    {
      *v3 = (unsigned int)*v5;
      v3[1] = 0LL;
      v3[2] = v4;
      v3 += 3;
      ++v2;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x100 );
  if ( !v2 )
    return 3221225485LL;
  if ( v2 == 1 )
  {
    *((_DWORD *)v1 + v1[2] + 3154) = *((_DWORD *)v1 + v1[2] + 3154) & 0xFFF80000 | 0x8000;
  }
  else
  {
    qsort(v1, v2, 0x18uLL, AccelpCodeSort);
    v7 = v1 + 3;
    while ( 1 )
    {
      v3[1] = (unsigned __int64)v1;
      v8 = v1 + 6;
      v3[2] = (unsigned __int64)v7;
      v9 = v3;
      v10 = v3;
      *v3 = *v1 + *v7;
      while ( 1 )
      {
        v11 = v9;
        v12 = v9;
        v13 = v10;
        v14 = v8;
        v15 = v9;
        if ( v8 == v3 && v10 == v9 )
          break;
        v9 += 3;
        if ( v8 == v3 || v10 < v9 && *v10 < *v8 )
        {
          v10 += 3;
          v14 = v13;
        }
        else
        {
          v8 += 3;
        }
        v11[4] = (unsigned __int64)v14;
        v16 = *v14;
        *v9 = v16;
        if ( v8 == v3 || v10 < v9 && *v10 < *v8 )
        {
          v12[5] = (unsigned __int64)v10;
          v17 = *v10 + v16;
          v10 += 3;
        }
        else
        {
          v12[5] = (unsigned __int64)v8;
          v17 = *v8 + v16;
          v8 += 3;
        }
        v15[3] = v17;
      }
      v18 = 0LL;
      v19 = v1 + 1539;
      v20 = 0LL;
      for ( i = v1 + 1540; ; v18 = *i )
      {
        while ( v9[1] )
        {
          ++v18;
          ++v20;
          *i = v18;
          i += 2;
          *v19 = v9[1];
          v19 += 2;
          v9 = (unsigned __int64 *)v9[2];
        }
        v22 = v9[2];
        v9[1] = v18;
        *((_BYTE *)v1 + v22 + 14920) = v18;
        if ( !v20 )
          break;
        v9 = (unsigned __int64 *)*(v19 - 2);
        i -= 2;
        --v20;
        v19 -= 2;
      }
      v23 = v1[1];
      if ( v23 <= 0xF )
        break;
      for ( j = v1; j < v3; j += 3 )
      {
        v25 = *j + 1;
        j[1] = 0LL;
        *j = v25 >> 1;
      }
    }
    v26 = *(v3 - 2);
    for ( k = 0LL; v26 <= v23; ++v26 )
    {
      v28 = 0LL;
      v29 = v1 + 1577;
      do
      {
        if ( *((unsigned __int8 *)v1 + v28 + 14920) == v26 )
          *v29 ^= (*v29 ^ ((unsigned __int16)v26 << 15)) & 0x78000 ^ (*(_WORD *)v29 ^ (*(_WORD *)v29 ^ (unsigned __int16)((_WORD)v26 << 15)) & 0x8000 ^ (unsigned __int16)k++) & 0x7FFF;
        ++v28;
        ++v29;
      }
      while ( v28 < 0x100 );
      k *= 2LL;
    }
  }
  return 0LL;
}

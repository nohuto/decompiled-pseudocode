/*
 * XREFs of AccelpBuildHuffmanEncoding @ 0x1406E3560
 * Callers:
 *     AccelCompressBuffer @ 0x1406E2E00 (AccelCompressBuffer.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelpBuildHuffmanEncoding(__int64 a1)
{
  _QWORD *v1; // rbx
  size_t v2; // rsi
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rax
  _DWORD *v5; // rcx
  _QWORD *v7; // rsi
  unsigned __int64 *v8; // r8
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // rdx
  unsigned __int64 *v11; // r9
  unsigned __int64 *v12; // r10
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  _QWORD *v16; // r9
  __int64 v17; // r10
  unsigned __int64 *i; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r11
  unsigned __int64 *j; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 k; // r9
  unsigned __int64 v25; // r8
  _DWORD *v26; // r10

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
        v11 = v10;
        v12 = v8;
        if ( v8 == v3 && v10 == v9 )
          break;
        v9 += 3;
        if ( v8 == v3 || v10 < v9 && *v10 < *v8 )
        {
          v10 += 3;
          v12 = v11;
        }
        else
        {
          v8 += 3;
        }
        v9[1] = (unsigned __int64)v12;
        v13 = *v12;
        *v9 = *v12;
        if ( v8 == v3 || v10 < v9 && *v10 < *v8 )
        {
          v9[2] = (unsigned __int64)v10;
          v14 = *v10 + v13;
          v10 += 3;
        }
        else
        {
          v9[2] = (unsigned __int64)v8;
          v14 = *v8 + v13;
          v8 += 3;
        }
        *v9 = v14;
      }
      v15 = 0LL;
      v16 = v1 + 1539;
      v17 = 0LL;
      for ( i = v1 + 1540; ; v15 = *i )
      {
        while ( v9[1] )
        {
          ++v15;
          ++v17;
          *i = v15;
          i += 2;
          *v16 = v9[1];
          v16 += 2;
          v9 = (unsigned __int64 *)v9[2];
        }
        v19 = v9[2];
        v9[1] = v15;
        *((_BYTE *)v1 + v19 + 14920) = v15;
        if ( !v17 )
          break;
        v9 = (unsigned __int64 *)*(v16 - 2);
        i -= 2;
        --v17;
        v16 -= 2;
      }
      v20 = v1[1];
      if ( v20 <= 0xF )
        break;
      for ( j = v1; j < v3; j += 3 )
      {
        v22 = *j + 1;
        j[1] = 0LL;
        *j = v22 >> 1;
      }
    }
    v23 = *(v3 - 2);
    for ( k = 0LL; v23 <= v20; ++v23 )
    {
      v25 = 0LL;
      v26 = v1 + 1577;
      do
      {
        if ( *((unsigned __int8 *)v1 + v25 + 14920) == v23 )
          *v26 ^= (*v26 ^ ((unsigned __int16)v23 << 15)) & 0x78000 ^ (*(_WORD *)v26 ^ (*(_WORD *)v26 ^ (unsigned __int16)((_WORD)v23 << 15)) & 0x8000 ^ (unsigned __int16)k++) & 0x7FFF;
        ++v25;
        ++v26;
      }
      while ( v25 < 0x100 );
      k *= 2LL;
    }
  }
  return 0LL;
}

/*
 * XREFs of AccelpQatCompressionDecompression @ 0x1406E3A04
 * Callers:
 *     AccelpQatOperationHandler @ 0x1406E3C44 (AccelpQatOperationHandler.c)
 * Callees:
 *     AccelpPrepareCompressionBufferForHeader @ 0x1406E39C8 (AccelpPrepareCompressionBufferForHeader.c)
 */

__int64 __fastcall AccelpQatCompressionDecompression(__int64 a1, unsigned __int8 a2, int a3)
{
  int v3; // r10d
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r11
  int *v15; // rbx
  unsigned __int64 v16; // r10
  __int16 v17; // ax
  int v18; // eax
  int v19; // r9d
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rcx
  __int16 v23; // ax
  int v24; // eax
  unsigned __int64 v25; // r11
  int v26; // ecx

  v3 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 104);
  v6 = 0;
  v7 = a2;
  if ( !v5 )
    goto LABEL_5;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 16LL) == v5 )
  {
    v6 = AccelpPrepareCompressionBufferForHeader(a1);
    if ( v6 < 0 )
      return (unsigned int)v6;
LABEL_5:
    if ( *(_DWORD *)(a1 + 100) != 3 )
      return (unsigned int)-1073741217;
    v9 = *(_DWORD *)(a1 + 96);
    if ( v3 == 512 )
    {
      if ( v9 != 1 )
        return (unsigned int)-1073741811;
      v10 = *(_DWORD *)(a1 + 80);
      v11 = *(_QWORD *)(a1 + 72);
      v12 = *(_DWORD *)(a1 + 64);
      v13 = *(_QWORD *)(a1 + 56);
      v14 = *(_QWORD *)(a1 + 40);
      v15 = *(int **)(a1 + 32);
      v16 = ((unsigned __int64)v15 + 127) & 0xFFFFFFFFFFFFFFC0uLL;
      v17 = *(_WORD *)(v16 + 6);
      *(_BYTE *)(v16 + 3) |= 0x80u;
      *(_WORD *)(v16 + 4) |= 0x18u;
      *(_WORD *)(v16 + 6) = v17 & 0xFFE4 | 0x1A;
      v18 = *(_DWORD *)(v16 + 0x48);
      *(_WORD *)(v16 + 1) = 2305;
      *(_QWORD *)(v16 + 8) = 268500992LL;
      *(_DWORD *)(v16 + 72) = v18 & 0xFCF6FFBF | 0x10040;
      *(_QWORD *)(v16 + 24) = 0LL;
      *(_QWORD *)(v16 + 32) = v13;
      *(_QWORD *)(v16 + 40) = v11;
      *(_DWORD *)(v16 + 48) = v12;
      *(_DWORD *)(v16 + 52) = v10;
      *(_DWORD *)(v16 + 56) = v12;
      *(_DWORD *)(v16 + 60) = v10;
      *(_QWORD *)(v16 + 64) = 0LL;
      *(_DWORD *)(v16 + 88) = v12;
      *(_OWORD *)v14 = 0LL;
      *(_OWORD *)(v14 + 16) = 0LL;
      *(_BYTE *)(v14 + 1) = 1;
    }
    else
    {
      if ( v9 != 1 )
        return (unsigned int)-1073741217;
      v19 = *(_DWORD *)(a1 + 80);
      v20 = *(_QWORD *)(a1 + 72);
      v21 = *(_DWORD *)(a1 + 64);
      v22 = *(_QWORD *)(a1 + 56);
      v14 = *(_QWORD *)(a1 + 40);
      v15 = *(int **)(a1 + 32);
      v16 = ((unsigned __int64)v15 + 127) & 0xFFFFFFFFFFFFFFC0uLL;
      v23 = *(_WORD *)(v16 + 6);
      *(_BYTE *)(v16 + 3) |= 0x80u;
      *(_WORD *)(v16 + 4) |= 0x18u;
      *(_WORD *)(v16 + 6) = v23 & 0xFFE4 | 0x1A;
      v24 = *(_DWORD *)(v16 + 0x48);
      *(_WORD *)(v16 + 1) = 2306;
      *(_QWORD *)(v16 + 8) = 2LL;
      *(_DWORD *)(v16 + 72) = v24 & 0xFCF6FFBF | 0x10040;
      *(_QWORD *)(v16 + 24) = 0LL;
      *(_QWORD *)(v16 + 32) = v20;
      *(_QWORD *)(v16 + 40) = v22;
      *(_DWORD *)(v16 + 48) = v19;
      *(_DWORD *)(v16 + 52) = v21;
      *(_DWORD *)(v16 + 56) = v19;
      *(_DWORD *)(v16 + 60) = v21;
      *(_QWORD *)(v16 + 64) = 0LL;
      *(_DWORD *)(v16 + 88) = v19;
      *(_OWORD *)v14 = 0LL;
      *(_OWORD *)(v14 + 16) = 0LL;
      *(_BYTE *)(v14 + 1) = 2;
    }
    *(_BYTE *)(v14 + 3) |= 0x80u;
    *(_WORD *)(v14 + 4) = 257;
    *(_BYTE *)(v14 + 6) = 1;
    v25 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
    v26 = *v15;
    *((_QWORD *)v15 + 1) = v25;
    *((_QWORD *)v15 + 2) = v16;
    v15[4] |= 1u;
    v15[6] &= 0xFFFFFFC0;
    v15[2] = v25 & 0xFFFFFFFC | 1;
    *(_QWORD *)v15 = (v7 << 31) | a3 & 0xFFFFF ^ v26 & 0x7FF00000u;
    return (unsigned int)v6;
  }
  return (unsigned int)-1073741811;
}

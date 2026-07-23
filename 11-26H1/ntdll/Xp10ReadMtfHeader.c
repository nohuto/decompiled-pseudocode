/*
 * XREFs of Xp10ReadMtfHeader @ 0x1800F8D5C
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x1800F8ED8 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 */

__int64 __fastcall Xp10ReadMtfHeader(_WORD *a1, _OWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  bool v7; // zf
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  while ( (unsigned int)v3 < 4 )
  {
    v7 = *(_QWORD *)a3 == 0LL;
    v8 = 5;
    v20 = 0;
    if ( v7 )
      return 3221226050LL;
    if ( *(_QWORD *)a3 < 5uLL )
      v8 = *(_DWORD *)a3;
    v9 = *(_DWORD *)(a3 + 16);
    if ( v9 < v8 )
    {
      v10 = Xp10ScatteredReadBytes(a3 + 24, &v20, 4LL);
      v11 = *(_DWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 8) |= (unsigned __int64)v20 << v11;
      v9 = v11 + 8 * v10;
      if ( v9 < v8 )
        v8 = v9;
    }
    *(_DWORD *)(a3 + 16) = v9 - v8;
    v12 = *(_DWORD *)(a3 + 8) & ((1LL << v8) - 1);
    *(_QWORD *)(a3 + 8) >>= v8;
    *(_QWORD *)a3 -= v8;
    if ( v8 < 5 || v12 > (*a1 & 0x1Fu) )
      return 3221226050LL;
    if ( v12 )
    {
      v7 = *(_QWORD *)a3 == 0LL;
      v13 = v12;
      v20 = 0;
      if ( v7 )
      {
        v17 = 0;
        v13 = 0;
      }
      else
      {
        if ( (unsigned __int64)v12 > *(_QWORD *)a3 )
          v13 = *(_DWORD *)a3;
        v14 = *(_DWORD *)(a3 + 16);
        if ( v14 < v13 )
        {
          v15 = Xp10ScatteredReadBytes(a3 + 24, &v20, 4LL);
          v16 = *(_DWORD *)(a3 + 16);
          *(_QWORD *)(a3 + 8) |= (unsigned __int64)v20 << v16;
          v14 = v16 + 8 * v15;
          if ( v14 < v13 )
            v13 = v14;
        }
        v17 = *(_DWORD *)(a3 + 8) & ((1LL << v13) - 1);
        *(_QWORD *)(a3 + 8) >>= v13;
        *(_QWORD *)a3 -= v13;
        *(_DWORD *)(a3 + 16) = v14 - v13;
      }
      if ( v13 < v12 )
        return 3221226050LL;
      v18 = v17 + (1 << v12);
    }
    else
    {
      v18 = 1;
    }
    *((_DWORD *)a2 + v3) = v18;
    v3 = (unsigned int)(v3 + 1);
  }
  return 0LL;
}

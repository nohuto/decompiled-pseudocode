/*
 * XREFs of Xp10ReadMtfHeader @ 0x14081430C
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x14080FFC0 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1408148E8 (Xp10ScatteredReadBytes.c)
 */

__int64 __fastcall Xp10ReadMtfHeader(_WORD *a1, _OWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // r8d
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  while ( (unsigned int)v3 < 4 )
  {
    v7 = *(_QWORD *)a3;
    v8 = 5;
    v21 = 0;
    if ( !v7 )
      return 3221226050LL;
    if ( v7 < 5 )
      v8 = v7;
    v9 = *(_DWORD *)(a3 + 16);
    if ( v9 < v8 )
    {
      v10 = Xp10ScatteredReadBytes(a3 + 24, &v21, 4LL);
      v11 = *(_DWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 8) |= (unsigned __int64)v21 << v11;
      v9 = v11 + 8 * v10;
      if ( v9 < v8 )
        v8 = v9;
    }
    *(_DWORD *)(a3 + 16) = v9 - v8;
    v12 = *(_DWORD *)(a3 + 8) & ((1LL << v8) - 1);
    *(_QWORD *)(a3 + 8) >>= v8;
    *(_QWORD *)a3 -= v8;
    v13 = *(_QWORD *)a3;
    if ( v8 < 5 || v12 > (*a1 & 0x1Fu) )
      return 3221226050LL;
    if ( v12 )
    {
      v21 = 0;
      v15 = v12;
      if ( v13 )
      {
        if ( v12 > v13 )
          v15 = *(_DWORD *)a3;
        v16 = *(_DWORD *)(a3 + 16);
        if ( v16 < v15 )
        {
          v17 = Xp10ScatteredReadBytes(a3 + 24, &v21, 4LL);
          v18 = *(_DWORD *)(a3 + 16);
          *(_QWORD *)(a3 + 8) |= (unsigned __int64)v21 << v18;
          v16 = v18 + 8 * v17;
          if ( v16 < v15 )
            v15 = v16;
        }
        v19 = *(_DWORD *)(a3 + 8) & ((1LL << v15) - 1);
        *(_QWORD *)(a3 + 8) >>= v15;
        *(_QWORD *)a3 -= v15;
        *(_DWORD *)(a3 + 16) = v16 - v15;
      }
      else
      {
        v19 = 0;
        v15 = 0;
      }
      if ( v15 < v12 )
        return 3221226050LL;
      v14 = v19 + (1 << v12);
    }
    else
    {
      v14 = 1;
    }
    *((_DWORD *)a2 + v3) = v14;
    v3 = (unsigned int)(v3 + 1);
  }
  return 0LL;
}

/*
 * XREFs of MiScanRelocationPage @ 0x140881A44
 * Callers:
 *     MiRelocateValidateFixups @ 0x14099C24C (MiRelocateValidateFixups.c)
 * Callees:
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiCreateFixupRecord @ 0x140AF4248 (MiCreateFixupRecord.c)
 */

__int64 __fastcall MiScanRelocationPage(int a1, unsigned int a2, int a3, _WORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v9; // rbp
  int v10; // r11d
  int v11; // r12d
  unsigned int v12; // esi
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // r10d
  __int64 v16; // r13
  __int16 v17; // ax
  unsigned __int16 v18; // bx
  int v19; // ecx
  __int64 result; // rax
  unsigned int v22; // [rsp+90h] [rbp+18h]

  v6 = a5;
  v9 = a2;
  v10 = a1;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 56LL) + 64LL);
  v15 = 0;
  v22 = v14;
  if ( a3 )
  {
    v16 = a6;
    do
    {
      --a3;
      v17 = *a4 >> 12;
      v18 = *a4 & 0xFFF;
      switch ( v17 )
      {
        case 0:
          v19 = v18;
          goto LABEL_16;
        case 3:
          if ( v18 <= 0xFFCu )
            goto LABEL_11;
          v12 = 4;
          v11 = 2;
          break;
        case 10:
          if ( v18 <= 0xFF8u )
            goto LABEL_11;
          v11 = 0;
          v12 = 8;
          break;
        default:
          return 3221226089LL;
      }
      v15 = 1;
LABEL_11:
      if ( (v9 & 0xFFF) != 0 && (unsigned __int64)((v9 & 0xFFF) + v18) > 0xFFE )
        return 3221226089LL;
      v19 = v18;
      if ( v18 + (unsigned int)v9 < v14 )
        return 3221226089LL;
LABEL_16:
      if ( v15 )
      {
        if ( v13 )
          return 3221225595LL;
        result = MiCreateFixupRecord(v6, v10, v19 + (int)v9, v11, v12, (__int64)a4, v16);
        if ( (int)result < 0 )
          return result;
        if ( (MiFlags & 0x80000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 )
        {
          a5 = 0LL;
          if ( (*(_DWORD *)(MiOffsetToProtos(v6, v9 + v18 + (unsigned __int64)v12, (unsigned __int64 *)&a5) + 32) & 4) != 0 )
            return 3221225595LL;
        }
        v14 = v22;
        v15 = 0;
        v10 = a1;
        v13 = 1;
      }
      ++a4;
    }
    while ( a3 );
  }
  return 0LL;
}

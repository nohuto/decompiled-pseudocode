/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVDCOBJ@@@Z @ 0x1401C55B8
 * Callers:
 *     NtGdiGetWidthTable @ 0x140281520 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1401C57AC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct DCOBJ *a3)
{
  __int16 fxD; // bx
  __int64 v7; // rdi
  int v8; // edx
  int v9; // r15d
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // ebp
  int v15; // ecx
  struct _GLYPHDATA *v16; // rax
  _BYTE *v17; // r8
  int v18; // r8d
  struct _GLYPHPOS v19; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int16 v20; // [rsp+A0h] [rbp+8h] BYREF
  int v21; // [rsp+B8h] [rbp+20h]

  fxD = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)this + 464LL);
  v12 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v9 = 16 * *(_DWORD *)(*(_QWORD *)this + 348LL);
  v10 = 16 * *(_DWORD *)(*(_QWORD *)this + 304LL);
  v21 = v8;
  v11 = *(_QWORD *)(v12 + 32);
  LOBYTE(v12) = *(_BYTE *)(v11 + 44);
  if ( (_BYTE)v12 == 0x80 || (LOBYTE(v12) = v12 + 127, (unsigned __int8)v12 <= 7u) && (v18 = 161, _bittest(&v18, v12)) )
  {
    if ( (*(_DWORD *)(v11 + 48) & 0x10000000) == 0 )
      return 0LL;
    *(_OWORD *)&v19.hg = 0LL;
    while ( 1 )
    {
      v20 = word_140370958[v7];
      if ( !v20 )
        break;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v19, &v20, a3, 0, 0LL)
        || v19.hg == *(_DWORD *)(*(_QWORD *)this + 456LL) )
      {
        return 0LL;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    v14 = 0;
    for ( LODWORD(v7) = WORD2(v19.pgdf[1].ppo); ; LODWORD(v7) = v15 )
    {
      v20 = word_140370948[v14];
      if ( !v20 )
        break;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v19, &v20, a3, 1, 0LL) )
        return 0LL;
      ++v14;
      v15 = WORD2(v19.pgdf[1].ppo);
      if ( v15 <= (int)v7 )
        v15 = v7;
    }
    v16 = RFONTOBJ::pgdDefault(this);
    v8 = v21;
    fxD = v16->fxD;
  }
  if ( ((v9 | v10 | v8 | (unsigned int)v7) & 0xFFFF0000) != 0 )
    return 0LL;
  *((_WORD *)a2 + 1) = v9;
  *((_WORD *)a2 + 2) = v10;
  *((_WORD *)a2 + 3) = v8;
  *((_WORD *)a2 + 6) = v7;
  *((_WORD *)a2 + 7) = fxD;
  *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
  result = 1LL;
  v17 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  *((_BYTE *)a2 + 8) = v17[108];
  *((_BYTE *)a2 + 9) = v17[109];
  *((_BYTE *)a2 + 11) = v17[110];
  *((_BYTE *)a2 + 10) = v17[111];
  return result;
}

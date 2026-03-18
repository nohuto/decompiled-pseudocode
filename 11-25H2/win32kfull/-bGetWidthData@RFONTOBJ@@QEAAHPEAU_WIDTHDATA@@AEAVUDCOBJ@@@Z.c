/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z @ 0x1400BEDC0
 * Callers:
 *     NtGdiGetWidthTable @ 0x1400BE340 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AD5FC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1400BEFAC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct UDCOBJ *a3)
{
  __int16 fxD; // bx
  __int64 v7; // rdi
  struct RFONTOBJ *v8; // rdx
  int v9; // r15d
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  __int64 result; // rax
  struct _GLYPHDATA *v15; // rax
  _BYTE *v16; // r8
  int v17; // ebp
  int v18; // ecx
  struct _GLYPHPOS v19; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int16 v20; // [rsp+A0h] [rbp+8h] BYREF
  int v21; // [rsp+B8h] [rbp+20h]

  fxD = 0;
  v7 = 0LL;
  v8 = (struct RFONTOBJ *)*(unsigned int *)(*(_QWORD *)this + 464LL);
  v12 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v9 = 16 * *(_DWORD *)(*(_QWORD *)this + 348LL);
  v10 = 16 * *(_DWORD *)(*(_QWORD *)this + 304LL);
  v21 = *(_DWORD *)(*(_QWORD *)this + 464LL);
  v11 = *(_QWORD *)(v12 + 32);
  LOBYTE(v12) = *(_BYTE *)(v11 + 44) + 0x80;
  if ( (unsigned __int8)v12 <= 8u )
  {
    v13 = 323;
    if ( _bittest(&v13, v12) )
    {
      if ( (*(_DWORD *)(v11 + 48) & 0x10000000) == 0 )
        return 0LL;
      *(_OWORD *)&v19.hg = 0LL;
      while ( 1 )
      {
        v20 = word_140363838[v7];
        if ( !v20 )
          break;
        if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v19, (char *)&v20, a3, 0, 0LL)
          || v19.hg == *(_DWORD *)(*(_QWORD *)this + 456LL) )
        {
          return 0LL;
        }
        v7 = (unsigned int)(v7 + 1);
      }
      v17 = 0;
      for ( LODWORD(v7) = WORD2(v19.pgdf[1].ppo); ; LODWORD(v7) = v18 )
      {
        v20 = word_140363840[v17];
        if ( !v20 )
          break;
        if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v19, (char *)&v20, a3, 1, 0LL) )
          return 0LL;
        ++v17;
        v18 = WORD2(v19.pgdf[1].ppo);
        if ( v18 <= (int)v7 )
          v18 = v7;
      }
      v15 = RFONTOBJ::pgdDefault(this, v8);
      LODWORD(v8) = v21;
      fxD = v15->fxD;
    }
  }
  if ( ((v9 | v10 | (unsigned int)v8 | (unsigned int)v7) & 0xFFFF0000) != 0 )
    return 0LL;
  *((_WORD *)a2 + 1) = v9;
  *((_WORD *)a2 + 2) = v10;
  *((_WORD *)a2 + 3) = (_WORD)v8;
  *((_WORD *)a2 + 6) = v7;
  *((_WORD *)a2 + 7) = fxD;
  *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
  result = 1LL;
  v16 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  *((_BYTE *)a2 + 8) = v16[108];
  *((_BYTE *)a2 + 9) = v16[109];
  *((_BYTE *)a2 + 11) = v16[110];
  *((_BYTE *)a2 + 10) = v16[111];
  return result;
}

/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1402912AC
 * Callers:
 *     FONTOBJ_cGetGlyphs @ 0x1400D8030 (FONTOBJ_cGetGlyphs.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DA118 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400DB1C4 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1402440B4 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 *     ?GetMaxGlyphSize@RFONTOBJ@@QEBA_KXZ @ 0x1403413F0 (-GetMaxGlyphSize@RFONTOBJ@@QEBA_KXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsLookaside(struct _FONTOBJ **this, struct _GLYPHPOS *a2, int a3)
{
  struct _FONTOBJ *v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 MaxGlyphSize; // rax
  unsigned int v9; // r14d
  PVOID v10; // rbp
  void *v11; // rcx
  struct _FONTOBJ *v12; // rax
  __int64 v13; // rbx
  HGLYPH hg; // r9d
  struct _FONTOBJ *v15; // r8
  unsigned int iUniq; // eax
  struct _GLYPHBITS *v17; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-30h] BYREF
  struct _GLYPHDATA *v19; // [rsp+98h] [rbp+20h] BYREF

  if ( a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v6 = *this;
  v18[0] = *(_QWORD *)&(*this)[2].iUniq;
  v7 = *(_QWORD *)(v18[0] + 96LL);
  if ( v7 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 24136LL) )
  {
    v6[10].flFontType = 0;
    hg = a2->hg;
    v15 = *this;
    iUniq = v6[10].iUniq;
    v19 = 0LL;
    v17 = 0LL;
    if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                         (PFFOBJ *)v18,
                         (struct DHPDEV__ *)v15[1].pvConsumer,
                         v15,
                         hg,
                         iUniq,
                         &v19,
                         &v17) == -1 )
      return 0LL;
    v19->gdf.pgb = v17;
    a2->pgdf = &v19->gdf;
  }
  else
  {
    MaxGlyphSize = RFONTOBJ::GetMaxGlyphSize((RFONTOBJ *)this);
    v9 = MaxGlyphSize;
    v10 = (PVOID)(MaxGlyphSize + 64);
    if ( MaxGlyphSize + 64 < 0x50 )
      return 0LL;
    if ( (*this)[9].pvConsumer < v10 )
    {
      v11 = *(void **)&(*this)[9].ulStyleSize;
      if ( v11 )
        Win32FreePool(v11);
      *(_QWORD *)&(*this)[9].ulStyleSize = PALLOCMEM((unsigned int)v10, 1667326791LL);
      v12 = *this;
      if ( !*(_QWORD *)&(*this)[9].ulStyleSize )
      {
        v12[9].pvConsumer = 0LL;
        return 0LL;
      }
      v12[9].pvConsumer = v10;
    }
    v13 = *(_QWORD *)&(*this)[9].ulStyleSize;
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)v18,
                         (struct DHPDEV__ *)(*this)[1].pvConsumer,
                         *this,
                         1u,
                         a2->hg,
                         (struct _GLYPHDATA *)v13,
                         (_DWORD *)(v13 + 64),
                         v9) == -1 )
      return 0LL;
    a2->pgdf = (GLYPHDEF *)v13;
    *(_QWORD *)v13 = v13 + 64;
  }
  return 1LL;
}

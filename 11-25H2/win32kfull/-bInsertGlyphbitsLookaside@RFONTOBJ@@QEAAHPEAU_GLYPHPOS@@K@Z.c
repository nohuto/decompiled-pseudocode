/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1400D1BE8
 * Callers:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400A9BB0 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400A9CCC (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1400D1B70 (FONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400AA550 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400AE594 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x14026831C (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2, __int64 a3)
{
  unsigned int *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v9; // rbx
  void *v10; // rcx
  __int64 v11; // rax
  struct _GLYPHDATA *v12; // rbx
  struct _GLYPHBITS *v13; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-20h] BYREF
  struct _GLYPHDATA *v15; // [rsp+88h] [rbp+20h] BYREF

  if ( (_DWORD)a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v5 = *(unsigned int **)this;
  v14[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v6 = *(_QWORD *)(v14[0] + 96LL);
  if ( v6 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 24152LL) )
  {
    v5[163] = 0;
    v7 = *(_QWORD *)this;
    v15 = 0LL;
    v13 = 0LL;
    if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                         (PFFOBJ *)v14,
                         *(struct DHPDEV__ **)(v7 + 112),
                         (struct _FONTOBJ *)v7,
                         a2->hg,
                         v5[160],
                         &v15,
                         &v13) != -1 )
    {
      v15->gdf.pgb = v13;
      a2->pgdf = &v15->gdf;
      return 1LL;
    }
    return 0LL;
  }
  v9 = *((_QWORD *)v5 + 79) + 64LL;
  if ( v9 >= 0x50 )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 624LL) < v9 )
    {
      v10 = *(void **)(*(_QWORD *)this + 616LL);
      if ( v10 )
        Win32FreePool(v10);
      *(_QWORD *)(*(_QWORD *)this + 616LL) = PALLOCMEM((unsigned int)v9, 1667326791LL);
      v11 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 616LL) )
      {
        *(_QWORD *)(v11 + 624) = 0LL;
        return 0LL;
      }
      *(_QWORD *)(v11 + 624) = v9;
    }
    v12 = *(struct _GLYPHDATA **)(*(_QWORD *)this + 616LL);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)v14,
                         *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                         *(struct _FONTOBJ **)this,
                         1u,
                         a2->hg,
                         v12,
                         &v12[1],
                         v5[158]) != -1 )
    {
      a2->pgdf = &v12->gdf;
      v12->gdf.pgb = (GLYPHBITS *)&v12[1];
      return 1LL;
    }
  }
  return 0LL;
}

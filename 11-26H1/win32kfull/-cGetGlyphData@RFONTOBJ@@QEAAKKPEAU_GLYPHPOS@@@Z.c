/*
 * XREFs of ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DA118
 * Callers:
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D42A0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14019BA1C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DBEC8 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1402912AC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

unsigned int __fastcall RFONTOBJ::cGetGlyphData(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  int v4; // ebx

  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) == 0 )
    return RFONTOBJ::cGetGlyphDataCache(this, a2, a3);
  v4 = 0;
  if ( a2 )
    LOBYTE(v4) = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(this, a3, *(_DWORD *)(*(_QWORD *)this + 88LL)) != 0;
  return v4;
}

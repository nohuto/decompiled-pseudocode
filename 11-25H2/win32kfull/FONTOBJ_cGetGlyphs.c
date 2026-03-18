/*
 * XREFs of FONTOBJ_cGetGlyphs @ 0x1400D1B70
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D1DA0 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1400D1BE8 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph)
{
  ULONG result; // eax
  HGLYPH v6; // eax
  int inserted; // eax
  struct _GLYPHPOS v8; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v9; // [rsp+68h] [rbp+20h] BYREF

  result = 0;
  memset(&v8, 0, sizeof(v8));
  if ( phg )
  {
    v6 = *phg;
    v9 = pfo;
    v8.hg = v6;
    inserted = RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)&v9, &v8, iMode);
    v9 = 0LL;
    if ( inserted )
    {
      *ppvGlyph = v8.pgdf;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
      return 1;
    }
    else
    {
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
      return 0;
    }
  }
  return result;
}

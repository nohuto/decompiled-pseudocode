/*
 * XREFs of ??1ATTACHOBJ@@QEAA@XZ @ 0x1400C2758
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1400FB968 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1403206C0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14033A800 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 */

void __fastcall ATTACHOBJ::~ATTACHOBJ(ATTACHOBJ *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)this + 8 * i));
}

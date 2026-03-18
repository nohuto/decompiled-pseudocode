/*
 * XREFs of towlower @ 0x140537DD0
 * Callers:
 *     ExpParseArcPathName @ 0x14083BA78 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14083CCD8 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14083CDCC (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14083CF4C (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x14083CFE8 (ExpTranslateHexStringToULONGLONG.c)
 *     EtwpCovSampCheckForSegments @ 0x140942D40 (EtwpCovSampCheckForSegments.c)
 *     ExpTranslateBootEntryNameToId @ 0x140A94BA8 (ExpTranslateBootEntryNameToId.c)
 * Callees:
 *     iswctype @ 0x140538ED8 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}

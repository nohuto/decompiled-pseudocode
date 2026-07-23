/*
 * XREFs of towlower @ 0x14053A250
 * Callers:
 *     ExpParseArcPathName @ 0x140841CB8 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140842F18 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14084300C (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14084318C (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140843228 (ExpTranslateHexStringToULONGLONG.c)
 *     ExpTranslateBootEntryNameToId @ 0x140A2D3F8 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x140A35E50 (EtwpCovSampCheckForSegments.c)
 * Callees:
 *     iswctype @ 0x14053B358 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}

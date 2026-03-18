/*
 * XREFs of towlower @ 0x1404FD490
 * Callers:
 *     ExpParseArcPathName @ 0x1407ACA88 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1407ADCC0 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1407ADDB4 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1407ADF34 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1407ADFD0 (ExpTranslateHexStringToULONGLONG.c)
 *     ExpTranslateBootEntryNameToId @ 0x140821048 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x140A011BC (EtwpCovSampCheckForSegments.c)
 * Callees:
 *     iswctype @ 0x1404FE4B0 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}

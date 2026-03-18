/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1401A4E58
 * Callers:
 *     toupper @ 0x1401A32E4 (toupper.c)
 *     mbtowc @ 0x1401A4C08 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}

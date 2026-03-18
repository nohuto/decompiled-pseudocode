/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1401C9338
 * Callers:
 *     toupper @ 0x1401C77FC (toupper.c)
 *     mbtowc @ 0x1401C90D0 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}

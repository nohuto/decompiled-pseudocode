/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x140085566
 * Callers:
 *     mbtowc @ 0x1400853C0 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}

/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x180097C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(qword_1801C5040, SourceCharacter);
}

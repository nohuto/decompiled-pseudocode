/*
 * XREFs of MiFindModuleBaseName @ 0x1406E6CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiFindModuleBaseName(__int64 a1, __int64 a2)
{
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a2, (PCUNICODE_STRING)(a1 + 88), 1u) )
    return 0LL;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 48);
  return 3221225473LL;
}

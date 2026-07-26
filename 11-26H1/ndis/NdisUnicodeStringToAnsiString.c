/*
 * XREFs of NdisUnicodeStringToAnsiString @ 0x1400D99D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisUnicodeStringToAnsiString(_STRING *a1, const UNICODE_STRING *a2)
{
  return RtlUnicodeStringToAnsiString(a1, a2, 0);
}

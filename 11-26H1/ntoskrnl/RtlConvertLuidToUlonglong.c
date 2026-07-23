/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x14063E73C
 * Callers:
 *     SepLogTokenSidManagement @ 0x140B2D560 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}

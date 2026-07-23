/*
 * XREFs of PsGetThreadSessionId @ 0x140A86D10
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return PsGetSessionId(*(_QWORD *)(a1 + 544));
}

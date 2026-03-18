/*
 * XREFs of PsGetThreadSessionId @ 0x140A80EA0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return PsGetSessionId(*(_QWORD *)(a1 + 544));
}

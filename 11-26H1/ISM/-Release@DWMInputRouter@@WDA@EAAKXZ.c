/*
 * XREFs of ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x1801002C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 48));
}

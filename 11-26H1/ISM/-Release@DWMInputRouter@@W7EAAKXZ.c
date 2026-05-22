/*
 * XREFs of ?Release@DWMInputRouter@@W7EAAKXZ @ 0x180100230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 8));
}

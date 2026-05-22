/*
 * XREFs of ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x180100250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 24));
}

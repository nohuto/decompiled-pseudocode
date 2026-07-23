/*
 * XREFs of SymCryptShake128Init @ 0x140573BF0
 * Callers:
 *     SymCryptMlDsaRejNttPoly @ 0x140572A10 (SymCryptMlDsaRejNttPoly.c)
 * Callees:
 *     SymCryptKeccakInit @ 0x14057804C (SymCryptKeccakInit.c)
 */

__int64 __fastcall SymCryptShake128Init(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 31;
  return SymCryptKeccakInit(a1, 168LL, a3);
}

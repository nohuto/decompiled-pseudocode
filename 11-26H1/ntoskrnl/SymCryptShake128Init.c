/*
 * XREFs of SymCryptShake128Init @ 0x14057498C
 * Callers:
 *     SymCryptMlDsaRejNttPoly @ 0x1405737E8 (SymCryptMlDsaRejNttPoly.c)
 * Callees:
 *     SymCryptKeccakInit @ 0x140575B9C (SymCryptKeccakInit.c)
 */

__int64 __fastcall SymCryptShake128Init(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 31;
  return SymCryptKeccakInit(a1, 168LL, a3);
}

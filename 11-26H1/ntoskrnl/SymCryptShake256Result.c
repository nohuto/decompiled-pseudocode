/*
 * XREFs of SymCryptShake256Result @ 0x140574A60
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkDecode @ 0x140572D9C (SymCryptMlDsaPkDecode.c)
 * Callees:
 *     SymCryptKeccakExtract @ 0x1405759D4 (SymCryptKeccakExtract.c)
 */

__int64 __fastcall SymCryptShake256Result(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return SymCryptKeccakExtract(a1, a2, 64LL, a4);
}

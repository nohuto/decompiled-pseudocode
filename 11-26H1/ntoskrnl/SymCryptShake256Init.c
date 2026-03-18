/*
 * XREFs of SymCryptShake256Init @ 0x140574A40
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkDecode @ 0x140572D9C (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140573664 (SymCryptMlDsaRejBoundedPoly.c)
 *     SymCryptMlDsaSampleInBall @ 0x14057389C (SymCryptMlDsaSampleInBall.c)
 * Callees:
 *     SymCryptKeccakInit @ 0x140575B9C (SymCryptKeccakInit.c)
 */

__int64 __fastcall SymCryptShake256Init(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 31;
  return SymCryptKeccakInit(a1, 136LL, a3);
}

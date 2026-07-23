/*
 * XREFs of SymCryptShake256Init @ 0x140573CA4
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140572870 (SymCryptMlDsaRejBoundedPoly.c)
 *     SymCryptMlDsaSampleInBall @ 0x140572AE0 (SymCryptMlDsaSampleInBall.c)
 * Callees:
 *     SymCryptKeccakInit @ 0x14057804C (SymCryptKeccakInit.c)
 */

__int64 __fastcall SymCryptShake256Init(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 31;
  return SymCryptKeccakInit(a1, 136LL, a3);
}

/*
 * XREFs of SymCryptShake256Extract @ 0x140573BD8
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaExpandMask @ 0x140571A18 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140572870 (SymCryptMlDsaRejBoundedPoly.c)
 *     SymCryptMlDsaRejNttPoly @ 0x140572A10 (SymCryptMlDsaRejNttPoly.c)
 *     SymCryptMlDsaSampleInBall @ 0x140572AE0 (SymCryptMlDsaSampleInBall.c)
 * Callees:
 *     SymCryptKeccakExtract @ 0x140577E84 (SymCryptKeccakExtract.c)
 */

__int64 SymCryptShake256Extract()
{
  return SymCryptKeccakExtract();
}

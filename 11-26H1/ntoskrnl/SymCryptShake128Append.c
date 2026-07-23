/*
 * XREFs of SymCryptShake128Append @ 0x140573BC0
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaExpandMask @ 0x140571A18 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140572870 (SymCryptMlDsaRejBoundedPoly.c)
 *     SymCryptMlDsaRejNttPoly @ 0x140572A10 (SymCryptMlDsaRejNttPoly.c)
 *     SymCryptMlDsaSampleInBall @ 0x140572AE0 (SymCryptMlDsaSampleInBall.c)
 * Callees:
 *     SymCryptKeccakAppend @ 0x140577C8C (SymCryptKeccakAppend.c)
 */

__int64 SymCryptShake128Append()
{
  return SymCryptKeccakAppend();
}

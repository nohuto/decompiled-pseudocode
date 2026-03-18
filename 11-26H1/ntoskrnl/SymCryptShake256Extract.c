/*
 * XREFs of SymCryptShake256Extract @ 0x140574974
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaExpandMask @ 0x140572830 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140573664 (SymCryptMlDsaRejBoundedPoly.c)
 *     SymCryptMlDsaRejNttPoly @ 0x1405737E8 (SymCryptMlDsaRejNttPoly.c)
 *     SymCryptMlDsaSampleInBall @ 0x14057389C (SymCryptMlDsaSampleInBall.c)
 * Callees:
 *     SymCryptKeccakExtract @ 0x1405759D4 (SymCryptKeccakExtract.c)
 */

__int64 SymCryptShake256Extract()
{
  return SymCryptKeccakExtract();
}

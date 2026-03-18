/*
 * XREFs of SymCryptShake128Append @ 0x14057495C
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaExpandMask @ 0x140572830 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaPkDecode @ 0x140572D9C (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaRejBoundedPoly @ 0x140573664 (SymCryptMlDsaRejBoundedPoly.c)
 *     SymCryptMlDsaRejNttPoly @ 0x1405737E8 (SymCryptMlDsaRejNttPoly.c)
 *     SymCryptMlDsaSampleInBall @ 0x14057389C (SymCryptMlDsaSampleInBall.c)
 * Callees:
 *     SymCryptKeccakAppend @ 0x1405757DC (SymCryptKeccakAppend.c)
 */

__int64 SymCryptShake128Append()
{
  return SymCryptKeccakAppend();
}

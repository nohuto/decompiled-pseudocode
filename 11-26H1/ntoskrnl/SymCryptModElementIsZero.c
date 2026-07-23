/*
 * XREFs of SymCryptModElementIsZero @ 0x14055EAD0
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x140566B94 (SymCryptEcpointTransform.c)
 *     SymCryptShortWeierstrassAdd @ 0x140574120 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1405746CC (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x140575810 (SymCryptShortWeierstrassIsZero.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140576630 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x140576F40 (SymCryptMontgomeryIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x14056E790 (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}

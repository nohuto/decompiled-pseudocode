/*
 * XREFs of SymCryptModElementIsZero @ 0x14055C5E8
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1405647A4 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140565760 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x140566090 (SymCryptMontgomeryIsZero.c)
 *     SymCryptShortWeierstrassAdd @ 0x1405664C0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140566A6C (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x140567BA0 (SymCryptShortWeierstrassIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x14056F5B0 (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}

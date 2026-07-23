/*
 * XREFs of SymCryptModElementIsEqual @ 0x14055EAB8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14055D2B8 (SymCryptEcurveInitialize.c)
 *     SymCryptEcurveIsSame @ 0x14055D85C (SymCryptEcurveIsSame.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1405755B0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x1405758E0 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140576440 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140576630 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140576770 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x140576E40 (SymCryptMontgomeryIsEqual.c)
 * Callees:
 *     SymCryptFdefModElementIsEqual @ 0x14056E754 (SymCryptFdefModElementIsEqual.c)
 */

__int64 SymCryptModElementIsEqual()
{
  return SymCryptFdefModElementIsEqual();
}

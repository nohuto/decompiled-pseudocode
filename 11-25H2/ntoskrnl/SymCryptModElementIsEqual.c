/*
 * XREFs of SymCryptModElementIsEqual @ 0x1405214A0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEcurveIsSame @ 0x140520298 (SymCryptEcurveIsSame.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140529440 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140529650 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140529790 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x140529EB0 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x14052B900 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14052BC50 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     SymCryptFdefModElementIsEqual @ 0x140533544 (SymCryptFdefModElementIsEqual.c)
 */

__int64 SymCryptModElementIsEqual()
{
  return SymCryptFdefModElementIsEqual();
}

/*
 * XREFs of SymCryptModElementCreate @ 0x140521454
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F23C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 *     SymCryptCrtSolve @ 0x140526674 (SymCryptCrtSolve.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140527480 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointCreateEx @ 0x1405281F0 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x140528618 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140528B50 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x140528F70 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140529440 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x1405296C0 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140529790 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x140529EB0 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140529FF0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x14052A5C0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052A9C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x14052B1A0 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x14052B4B0 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x14052B900 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x14052BBB0 (SymCryptShortWeierstrassNegate.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14052BC50 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140534FFC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140535128 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCreate @ 0x140533460 (SymCryptFdefModElementCreate.c)
 */

__int64 SymCryptModElementCreate()
{
  return SymCryptFdefModElementCreate();
}

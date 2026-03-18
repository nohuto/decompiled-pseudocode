/*
 * XREFs of SymCryptSizeofModElementFromModulus @ 0x140521890
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F23C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreEncScratchSpace @ 0x140522BB0 (SymCryptRsaCoreEncScratchSpace.c)
 *     SymCryptCrtSolve @ 0x140526674 (SymCryptCrtSolve.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140528B50 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x140528F70 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140529440 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140529790 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140529D0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryIsEqual @ 0x140529EB0 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140529FF0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140534FFC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140535128 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x14051FC7C (SymCryptFdefSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptSizeofModElementFromModulus(__int64 a1)
{
  return SymCryptFdefSizeofModElementFromModulus(a1);
}

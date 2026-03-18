/*
 * XREFs of SymCryptDigitsFromBits @ 0x14055C0D0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreate @ 0x14055A0C8 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14055ABE4 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055AD5C (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055B450 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405653EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140565E0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1405660C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1405677D8 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefDecideModulusType @ 0x14056EF38 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefDigitsFromBits @ 0x140570894 (SymCryptFdefDigitsFromBits.c)
 */

__int64 SymCryptDigitsFromBits()
{
  return SymCryptFdefDigitsFromBits();
}

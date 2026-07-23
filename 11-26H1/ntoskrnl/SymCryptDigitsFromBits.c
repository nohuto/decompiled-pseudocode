/*
 * XREFs of SymCryptDigitsFromBits @ 0x14055E5B8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14055C2A8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreate @ 0x14055C5E0 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055C930 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14055D0F8 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055D934 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptFdefDecideModulusType @ 0x14056E118 (SymCryptFdefDecideModulusType.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140575440 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405762C0 (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140576CC0 (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140576F70 (SymCryptMontgomeryPointScalarMul.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefDigitsFromBits @ 0x14056FA74 (SymCryptFdefDigitsFromBits.c)
 */

__int64 SymCryptDigitsFromBits()
{
  return SymCryptFdefDigitsFromBits();
}

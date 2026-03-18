/*
 * XREFs of SymCryptSizeofIntFromDigits @ 0x14055C9A8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCreate @ 0x14055A0C8 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14055A25C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14055ABE4 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055B450 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptEckeyCreate @ 0x14055B6F8 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14055BDA8 (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreDecCrtScratchSpace @ 0x14055E780 (SymCryptRsaCoreDecCrtScratchSpace.c)
 *     SymCryptRsaCoreVerifyInput @ 0x14055EA90 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140562430 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140562634 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140563700 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1405645A0 (SymCryptEcpointSetValue.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405653EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140565E0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1405660C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1405677D8 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefSizeofIntFromDigits @ 0x140570F58 (SymCryptFdefSizeofIntFromDigits.c)
 */

__int64 SymCryptSizeofIntFromDigits()
{
  return SymCryptFdefSizeofIntFromDigits();
}

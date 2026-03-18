/*
 * XREFs of SymCryptIntFromModulus @ 0x14052115C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEcurveIsSame @ 0x140520298 (SymCryptEcurveIsSame.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140520678 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140522BF8 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140526470 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140526674 (SymCryptCrtSolve.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x140528410 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntFromModulus @ 0x140533040 (SymCryptFdefIntFromModulus.c)
 */

__int64 SymCryptIntFromModulus()
{
  return SymCryptFdefIntFromModulus();
}

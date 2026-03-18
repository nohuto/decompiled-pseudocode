/*
 * XREFs of SymCryptIntCreate @ 0x14055C1F0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14055A25C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeyCreate @ 0x14055B6F8 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x14055E8B4 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreVerifyInput @ 0x14055EA90 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140562430 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140562634 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140563700 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1405645A0 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFdefDivisorCreate @ 0x1405708C4 (SymCryptFdefDivisorCreate.c)
 *     SymCryptFdefIntAllocate @ 0x140570934 (SymCryptFdefIntAllocate.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntCreate @ 0x140570B64 (SymCryptFdefIntCreate.c)
 */

__int64 SymCryptIntCreate()
{
  return SymCryptFdefIntCreate();
}

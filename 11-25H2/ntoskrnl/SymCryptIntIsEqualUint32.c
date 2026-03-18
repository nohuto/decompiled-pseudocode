/*
 * XREFs of SymCryptIntIsEqualUint32 @ 0x140521204
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140520678 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140526470 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527550 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntIsEqualUint32 @ 0x140534C6C (SymCryptFdefIntIsEqualUint32.c)
 */

__int64 SymCryptIntIsEqualUint32()
{
  return SymCryptFdefIntIsEqualUint32();
}

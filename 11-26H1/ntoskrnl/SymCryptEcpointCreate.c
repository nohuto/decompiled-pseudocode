/*
 * XREFs of SymCryptEcpointCreate @ 0x14056434C
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeyCreate @ 0x14055B6F8 (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14055B7B4 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140563700 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x1405641FC (SymCryptOfflinePrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x1405664C0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptEcDhSecretAgreement @ 0x140574A80 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     SymCryptEcpointCreateEx @ 0x14056436C (SymCryptEcpointCreateEx.c)
 */

__int64 __fastcall SymCryptEcpointCreate(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptEcpointCreateEx(a1, a2, a3, *(_DWORD *)(a3 + 8) & 0xF);
}

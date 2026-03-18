/*
 * XREFs of SymCryptEcpointIsZero @ 0x140567FFC
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14055B7B4 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140563700 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcDhSecretAgreement @ 0x140574A80 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsZero(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006300[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}

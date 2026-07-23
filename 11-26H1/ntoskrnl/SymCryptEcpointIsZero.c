/*
 * XREFs of SymCryptEcpointIsZero @ 0x1405671B0
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14055DC98 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140565AF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140566010 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcDhSecretAgreement @ 0x140573CE4 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsZero(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006300[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}

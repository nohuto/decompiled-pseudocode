/*
 * XREFs of SymCryptSizeofEcpointFromCurve @ 0x14056707C
 * Callers:
 *     SymCryptEckeyCreate @ 0x14055DBDC (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14055DC98 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14055E290 (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140565AF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140566010 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x1405665EC (SymCryptOfflinePrecomputation.c)
 *     SymCryptEcDhSecretAgreement @ 0x140573CE4 (SymCryptEcDhSecretAgreement.c)
 *     SymCryptShortWeierstrassAdd @ 0x140574120 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140575440 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405762C0 (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140576CC0 (SymCryptMontgomeryFillScratchSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSizeofEcpointFromCurve(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 8) & 0xF;
  if ( v1 && v1 <= 4 )
    return *(_DWORD *)(a1 + 36) * v1 + 32;
  else
    return 0LL;
}

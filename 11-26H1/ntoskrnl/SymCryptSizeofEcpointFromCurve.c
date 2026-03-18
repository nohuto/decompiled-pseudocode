/*
 * XREFs of SymCryptSizeofEcpointFromCurve @ 0x140564C8C
 * Callers:
 *     SymCryptEckeyCreate @ 0x14055B6F8 (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14055B7B4 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14055BDA8 (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140563700 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x1405641FC (SymCryptOfflinePrecomputation.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405653EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140565E0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassAdd @ 0x1405664C0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1405677D8 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptEcDhSecretAgreement @ 0x140574A80 (SymCryptEcDhSecretAgreement.c)
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

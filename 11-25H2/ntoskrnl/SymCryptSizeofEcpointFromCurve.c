/*
 * XREFs of SymCryptSizeofEcpointFromCurve @ 0x140528B20
 * Callers:
 *     SymCryptEckeyCreate @ 0x1405205BC (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140520678 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x140520C7C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527550 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x140528080 (SymCryptOfflinePrecomputation.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405292BC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140529D0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassAdd @ 0x14052A400 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x14052B794 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptEcDhSecretAgreement @ 0x140536738 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSizeofEcpointFromCurve(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8) & 0xF;
  if ( (unsigned int)(v1 - 1) > 3 )
    return 0;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 36) * v1 + 32);
}

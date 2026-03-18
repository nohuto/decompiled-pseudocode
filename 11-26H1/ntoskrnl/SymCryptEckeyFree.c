/*
 * XREFs of SymCryptEckeyFree @ 0x14055B790
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140562DAC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x1408ABC94 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x14055BD7C (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}

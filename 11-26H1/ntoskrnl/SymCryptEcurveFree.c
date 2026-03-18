/*
 * XREFs of SymCryptEcurveFree @ 0x14055AD7C
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140562DAC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x1408ABC94 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}

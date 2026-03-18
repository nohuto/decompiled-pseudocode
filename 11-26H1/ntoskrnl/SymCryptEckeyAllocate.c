/*
 * XREFs of SymCryptEckeyAllocate @ 0x14055B6A4
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140562DAC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x1408ABC94 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyCreate @ 0x14055B6F8 (SymCryptEckeyCreate.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14055BDA8 (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptCallbackAlloc @ 0x140722890 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptEckeyAllocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax

  v2 = 0LL;
  v3 = (unsigned int)SymCryptSizeofEckeyFromCurve();
  v4 = SymCryptCallbackAlloc(v3);
  if ( v4 )
    return SymCryptEckeyCreate(v4, (unsigned int)v3, a1);
  return v2;
}

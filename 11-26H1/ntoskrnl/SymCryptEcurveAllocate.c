/*
 * XREFs of SymCryptEcurveAllocate @ 0x14055D188
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x1405652BC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x1408B20D8 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptEcurveInitialize @ 0x14055D2B8 (SymCryptEcurveInitialize.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055D934 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveAllocate(__int64 a1, int a2)
{
  int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rsi
  _OWORD v10[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 0;
  v3 = a1;
  v4 = 0LL;
  if ( (unsigned __int8)SymCryptEcurveValidateAndComputeSizes(a1, v10) )
  {
    v5 = SymCryptCallbackAlloc(HIDWORD(v10[0]));
    if ( v5 )
    {
      v6 = HIDWORD(v11);
      v7 = SymCryptCallbackAlloc(HIDWORD(v11));
      v8 = v7;
      if ( !v7 )
        goto LABEL_7;
      v4 = SymCryptEcurveInitialize(v3, a2, (unsigned int)v10, v5, v7);
      if ( v4 )
        v5 = 0LL;
      SymCryptWipe(v8, v6);
      SymCryptCallbackFree(v8);
      if ( v5 )
LABEL_7:
        SymCryptCallbackFree(v5);
    }
  }
  return v4;
}

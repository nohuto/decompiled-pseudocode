/*
 * XREFs of HashpVerifyEcdsaSignature @ 0x1408B20D8
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     SymCryptEcurveAllocate @ 0x14055D188 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x14055D290 (SymCryptEcurveFree.c)
 *     SymCryptEckeyAllocate @ 0x14055DB88 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyFree @ 0x14055DC74 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 */

__int64 __fastcall HashpVerifyEcdsaSignature(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // edi
  __int64 v8; // rbp
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // ebx
  __int64 *v14; // rcx
  volatile signed __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi

  v7 = 0;
  v8 = a3;
  v11 = a1 - 11777;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return (unsigned int)-1073740760;
      v14 = (__int64 *)SymCryptEcurveParamsNistP521;
      v15 = &qword_140EF00F8;
      v16 = qword_140EF00F8;
    }
    else
    {
      v14 = (__int64 *)SymCryptEcurveParamsNistP384;
      v15 = &qword_140EF00F0;
      v16 = qword_140EF00F0;
    }
  }
  else
  {
    v14 = (__int64 *)SymCryptEcurveParamsNistP256;
    v15 = &qword_140EF00E8;
    v16 = qword_140EF00E8;
  }
  if ( !v16 )
  {
    v17 = SymCryptEcurveAllocate((__int64)v14, 0);
    if ( !v17 )
      return (unsigned int)-1073741801;
    if ( _InterlockedCompareExchange64(v15, v17, 0LL) )
      SymCryptEcurveFree(v17);
  }
  v18 = SymCryptEckeyAllocate(*v15);
  v19 = v18;
  if ( !v18 )
    return (unsigned int)-1073741801;
  if ( (unsigned int)SymCryptEckeySetValue(0LL, 0LL, a2, v8, 2u, 2, 4096, v18) )
  {
    v13 = -1073740760;
  }
  else
  {
    if ( (unsigned int)SymCryptEcDsaVerify(v19, a4, a5, a6, a7, 2, 0) )
      v7 = -1073740760;
    v13 = v7;
  }
  SymCryptEckeyFree(v19);
  return v13;
}

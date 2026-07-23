/*
 * XREFs of SymCryptCallbackAlloc @ 0x140727460
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14055BD14 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055C930 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x14055D188 (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyAllocate @ 0x14055DB88 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptMlDsakeyAllocate @ 0x1405606F0 (SymCryptMlDsakeyAllocate.c)
 *     SymCryptRsaPkcs1Sign @ 0x140561078 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x1405611D4 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 *     SymCryptFdefIntAllocate @ 0x14056FB14 (SymCryptFdefIntAllocate.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptEcDhSecretAgreement @ 0x140573CE4 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptAlloc @ 0x1408AB1A8 (MincryptAlloc.c)
 */

unsigned __int64 __fastcall SymCryptCallbackAlloc(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = MincryptAlloc(a1 + 36);
  if ( v2 )
  {
    v1 = (v2 + 35) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_DWORD *)(v1 - 4) = ((v2 + 35) & 0xFFFFFFE0) - v2;
  }
  return v1;
}

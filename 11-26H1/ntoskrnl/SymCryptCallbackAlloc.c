/*
 * XREFs of SymCryptCallbackAlloc @ 0x140722890
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x140559884 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x14055AC74 (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyAllocate @ 0x14055B6A4 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptMlDsakeyAllocate @ 0x14055E1CC (SymCryptMlDsakeyAllocate.c)
 *     SymCryptRsaPkcs1Sign @ 0x14055EB54 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x14055ECB0 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptMlDsaSelftest @ 0x140563120 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x1405632FC (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140563510 (SymCryptRsaSignVerifyPct.c)
 *     SymCryptFdefIntAllocate @ 0x140570934 (SymCryptFdefIntAllocate.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573FA0 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptEcDhSecretAgreement @ 0x140574A80 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptAlloc @ 0x1408A4D98 (MincryptAlloc.c)
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

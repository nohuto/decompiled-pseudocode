/*
 * XREFs of SymCryptEcDsaSelftest @ 0x140565454
 * Callers:
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptRestoreXmm @ 0x1404CF078 (SymCryptRestoreXmm.c)
 *     SymCryptEcurveAllocate @ 0x14055D188 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x14055D290 (SymCryptEcurveFree.c)
 *     SymCryptEckeyAllocate @ 0x14055DB88 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyFree @ 0x14055DC74 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptIntAllocate @ 0x14055E630 (SymCryptIntAllocate.c)
 *     SymCryptIntFree @ 0x14055E734 (SymCryptIntFree.c)
 *     SymCryptIntSetValue @ 0x14055E89C (SymCryptIntSetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptFatal @ 0x1405E7EE8 (SymCryptFatal.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 SymCryptEcDsaSelftest()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rsi
  _BYTE Buf1[64]; // [rsp+40h] [rbp-68h] BYREF

  v0 = SymCryptEcurveAllocate((__int64)SymCryptEcurveParamsNistP256, 0);
  v1 = v0;
  if ( !v0 )
    SymCryptFatal(1179209811LL);
  v2 = SymCryptEckeyAllocate(v0);
  if ( !v2 )
    SymCryptFatal(1179209811LL);
  v3 = SymCryptIntAllocate();
  if ( !v3 )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptIntSetValue() )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptEckeySetValue((__int64)qword_140024740, 32LL, (__int64)eckey1, 64LL, 2u, 2, 4352, v2) )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptEcDsaSignEx(v2, (int)rgbSha256Hash, 32, v3, 2, 1, (__int64)Buf1, 0x40uLL) )
    SymCryptFatal(1179209811LL);
  if ( memcmp(Buf1, rgbEcDsaKnownAnswerTestSignature, 0x40uLL) )
    SymCryptFatal(1179209811LL);
  SymCryptRestoreXmm();
  if ( (unsigned int)SymCryptEcDsaVerify(v2, (__int64)rgbSha256Hash, 0x20uLL, (__int64)Buf1, 64LL, 2, 0) )
    SymCryptFatal(1179209811LL);
  SymCryptIntFree(v3);
  SymCryptEckeyFree(v2);
  return SymCryptEcurveFree(v1);
}

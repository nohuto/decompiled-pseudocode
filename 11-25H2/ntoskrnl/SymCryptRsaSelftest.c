/*
 * XREFs of SymCryptRsaSelftest @ 0x140527154
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptRestoreXmm @ 0x140499A34 (SymCryptRestoreXmm.c)
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     SymCryptRsakeyAllocate @ 0x14051E894 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeyFree @ 0x14051F360 (SymCryptRsakeyFree.c)
 *     SymCryptRsakeySetValue @ 0x14051F388 (SymCryptRsakeySetValue.c)
 *     SymCryptRsaPkcs1Sign @ 0x140522CBC (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x140522E18 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptFatal @ 0x1405ADB00 (SymCryptFatal.c)
 *     SymCryptCallbackAlloc @ 0x14069A5E0 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x14069A618 (SymCryptCallbackFree.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

__int64 SymCryptRsaSelftest()
{
  const void *v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rdi
  unsigned __int64 v4; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v5[4]; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+1Fh] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+2Fh] BYREF

  v4 = 256LL;
  v0 = (const void *)SymCryptCallbackAlloc(256LL);
  if ( !v0 )
    SymCryptFatal(1179209811LL);
  v5[0] = 1;
  v7[0] = qword_14001FFE8;
  v5[1] = 2048;
  v7[1] = qword_140020068;
  v5[2] = 2;
  v5[3] = 1;
  v6[0] = 128LL;
  v6[1] = 128LL;
  v1 = SymCryptRsakeyAllocate((__int64)v5);
  v2 = (_DWORD *)v1;
  if ( !v1 )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptRsakeySetValue(
                       (int)qword_14001FEE8,
                       256,
                       (int)&rsakey,
                       1,
                       (__int64)v7,
                       (__int64)v6,
                       2,
                       2,
                       4352,
                       v1) )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptRsaPkcs1Sign(
                       (__int64)v2,
                       rgbSha256Hash,
                       0x20uLL,
                       (int *)&SymCryptSha256OidList,
                       2,
                       0,
                       2,
                       (__int64)v0,
                       v4,
                       &v4) )
    SymCryptFatal(1179209811LL);
  if ( memcmp(v0, rgbRsaPkcs1Sig, 0x100uLL) )
    SymCryptFatal(1179209811LL);
  SymCryptRestoreXmm();
  if ( (unsigned int)SymCryptRsaPkcs1Verify(
                       v2,
                       rgbSha256Hash,
                       0x20uLL,
                       (int)v0,
                       v4,
                       2,
                       (__int64)&SymCryptSha256OidList,
                       2uLL,
                       0) )
    SymCryptFatal(1179209811LL);
  SymCryptRsakeyFree((__int64)v2);
  SymCryptWipe((__int64)v0, v4);
  return SymCryptCallbackFree(v0);
}

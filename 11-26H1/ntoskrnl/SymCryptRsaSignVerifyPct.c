/*
 * XREFs of SymCryptRsaSignVerifyPct @ 0x140563510
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptRestoreXmm @ 0x1404D58B4 (SymCryptRestoreXmm.c)
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptRsaPkcs1Sign @ 0x14055EB54 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x14055ECB0 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptCallbackAlloc @ 0x140722890 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsaSignVerifyPct(_DWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned __int64 v5; // [rsp+50h] [rbp-28h] BYREF

  v5 = (unsigned __int64)(unsigned int)(a1[4] + 7) >> 3;
  v2 = SymCryptCallbackAlloc(v5);
  if ( v2 )
  {
    v3 = SymCryptRsaPkcs1Sign((__int64)a1, rgbSha256Hash, 0x20uLL, (int *)&SymCryptSha256OidList, 2, 0, 2, v2, v5, &v5);
    if ( !v3 )
    {
      SymCryptRestoreXmm();
      v3 = SymCryptRsaPkcs1Verify(a1, rgbSha256Hash, 0x20uLL, v2, v5, 2, (__int64)&SymCryptSha256OidList, 2uLL, 0);
    }
    SymCryptWipe(v2, v5);
    SymCryptCallbackFree(v2);
  }
  else
  {
    return 32783;
  }
  return v3;
}

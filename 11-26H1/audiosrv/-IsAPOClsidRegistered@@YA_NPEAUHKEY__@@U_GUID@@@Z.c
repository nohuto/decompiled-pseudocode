/*
 * XREFs of ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x1800480C0
 * Callers:
 *     ?FindApoRegistrationUnderDevice@@YAJPEAGU_GUID@@AEA_N@Z @ 0x1801618AC (-FindApoRegistrationUnderDevice@@YAJPEAGU_GUID@@AEA_N@Z.c)
 *     ?LookUpApoRegistration@@YAJPEAG0U_GUID@@@Z @ 0x180161F08 (-LookUpApoRegistration@@YAJPEAG0U_GUID@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180048340 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

char __fastcall IsAPOClsidRegistered(HKEY hKey, GUID *rguid)
{
  __int64 v3; // rcx
  OLECHAR *v4; // rax
  char v5; // bl
  HKEY hKeya; // [rsp+30h] [rbp-128h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-118h] BYREF
  WCHAR SubKey[80]; // [rsp+90h] [rbp-C8h] BYREF

  if ( StringFromGUID2(rguid, sz, 39) <= 0 )
    return 0;
  v3 = 39LL;
  v4 = sz;
  v5 = 1;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
    return 0;
  if ( ((39 - v3) & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64)) != 0x26 )
    return 0;
  if ( (int)StringCchPrintfW(SubKey, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", sz) < 0 )
    return 0;
  hKeya = 0LL;
  if ( RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &hKeya) )
    return 0;
  RegCloseKey(hKeya);
  return v5;
}

/*
 * XREFs of ?PpleHostCacheHelperIsDisallowListedApp@@YAJPEBGPEAE@Z @ 0x180097764
 * Callers:
 *     ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x18006978C (-PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x18006F8C8 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall PpleHostCacheHelperIsDisallowListedApp(const unsigned __int16 *a1, bool *a2)
{
  LSTATUS v3; // eax
  unsigned int v4; // ebx
  bool v5; // cc
  UINT32 packageFamilyNameLength; // [rsp+30h] [rbp-79h] BYREF
  DWORD cbData; // [rsp+34h] [rbp-75h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-71h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-69h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+50h] [rbp-59h] BYREF

  packageFamilyNameLength = 64;
  *(_DWORD *)Data = 0;
  cbData = 0;
  hKey = 0LL;
  if ( PackageFamilyNameFromFullName(a1, &packageFamilyNameLength, packageFamilyName) || packageFamilyNameLength >= 0x41 )
    return 2147483653LL;
  if ( 2 * (unsigned __int64)packageFamilyNameLength >= 0x82 )
    _report_rangecheckfailure();
  packageFamilyName[packageFamilyNameLength] = 0;
  v3 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\BackgroundModel\\EmptyHostDisallowList",
         0,
         0x20019u,
         &hKey);
  v4 = v3;
  v5 = v3 <= 0;
  if ( v3 )
    goto LABEL_5;
  cbData = 4;
  v3 = RegQueryValueExW(hKey, packageFamilyName, 0LL, 0LL, Data, &cbData);
  v4 = v3;
  if ( v3 == 2 )
  {
    *a2 = 0;
  }
  else
  {
    v5 = v3 <= 0;
    if ( v3 )
    {
LABEL_5:
      if ( !v5 )
        v4 = (unsigned __int16)v3 | 0xC0070000;
      goto LABEL_12;
    }
    *a2 = *(_DWORD *)Data != 0;
  }
  v4 = 0;
LABEL_12:
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}

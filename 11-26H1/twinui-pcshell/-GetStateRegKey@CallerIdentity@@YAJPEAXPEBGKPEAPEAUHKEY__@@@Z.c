/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800AAD30
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800A9A10 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     _lambda_a71db1969fba7bd0e2e9963c280e5bea_::operator() @ 0x180344738 (_lambda_a71db1969fba7bd0e2e9963c280e5bea_--operator().c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800AAF34 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetStateRegKey(
        CallerIdentity *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        HKEY *a4)
{
  REGSAM samDesired; // r12d
  int Error; // edi
  int v9; // edx
  int v10; // ecx
  LSTATUS v12; // eax
  LSTATUS Key; // eax
  HKEY v14; // rcx
  HKEY v15; // rcx
  LSTATUS v16; // eax
  HKEY hKey; // [rsp+50h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-18h]
  HKEY phkResult; // [rsp+60h] [rbp-10h] BYREF
  int v20; // [rsp+A8h] [rbp+38h] BYREF

  samDesired = (unsigned int)a3;
  *a4 = 0LL;
  v20 = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v20) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error == -2147024774 && v20 )
    {
      pv = 0LL;
      CoTaskMemFree(0LL);
      Error = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, 0, v20);
      if ( Error >= 0 )
      {
        hKey = 0LL;
        if ( (unsigned int)GetSystemAppDataKey(this, &hKey, pv, &v20)
          || (Error = ResultFromKnownLastError(), Error >= 0) )
        {
          if ( a2 )
          {
            phkResult = 0LL;
            v12 = RegOpenKeyExW(hKey, (LPCWSTR)pv, 0, 0x2001Fu, &phkResult);
            Error = v12;
            if ( v12 > 0 )
              Error = (unsigned __int16)v12 | 0x80070000;
            if ( Error >= 0 )
            {
              Key = RegCreateKeyExW(phkResult, a2, 0, 0LL, 0, samDesired, 0LL, a4, 0LL);
              Error = Key;
              if ( Key > 0 )
                Error = (unsigned __int16)Key | 0x80070000;
            }
            v14 = phkResult;
            phkResult = 0LL;
            if ( v14 )
              RegCloseKey(v14);
          }
          else
          {
            v16 = RegOpenKeyExW(hKey, (LPCWSTR)pv, 0, samDesired, a4);
            Error = v16;
            if ( v16 > 0 )
              Error = (unsigned __int16)v16 | 0x80070000;
          }
        }
        v15 = hKey;
        hKey = 0LL;
        if ( v15 )
          RegCloseKey(v15);
      }
      CoTaskMemFree(pv);
    }
  }
  return (unsigned int)Error;
}

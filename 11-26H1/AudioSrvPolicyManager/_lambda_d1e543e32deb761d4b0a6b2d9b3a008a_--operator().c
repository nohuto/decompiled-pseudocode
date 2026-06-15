/*
 * XREFs of _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18001699C
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180016950 (-DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001700C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator()(__int64 a1)
{
  int v2; // ebx
  HKEY v3; // rbx
  WCHAR *v4; // rbx
  LSTATUS v5; // eax
  unsigned int v6; // edi
  HKEY v7; // rcx
  LSTATUS v9; // eax
  LPCWSTR lpSubKey[4]; // [rsp+30h] [rbp-20h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+20h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp+28h] BYREF
  char v13; // [rsp+80h] [rbp+30h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         L"%s\\%s",
         *(_QWORD *)(*(_QWORD *)a1 + 8LL),
         L"Configs");
  if ( v2 < 0 )
  {
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    if ( hKey )
      RegCloseKey(hKey);
    return (unsigned int)v2;
  }
  else
  {
    v3 = hKey;
    if ( hKey )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v13);
      RegCloseKey(v3);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v13);
    }
    v4 = (WCHAR *)lpSubKey[0];
    v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
    v6 = v5;
    if ( v5 )
    {
      if ( v5 > 0 )
        v6 = (unsigned __int16)v5 | 0x80070000;
      if ( v4 )
        CoTaskMemFree(v4);
      v7 = hKey;
      if ( !hKey )
        return v6;
      goto LABEL_10;
    }
    phkResult = 0LL;
    v9 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, &phkResult);
    v6 = v9;
    if ( v9 )
    {
      if ( v9 > 0 )
        v6 = (unsigned __int16)v9 | 0x80070000;
      if ( phkResult )
        RegCloseKey(phkResult);
      if ( v4 )
        CoTaskMemFree(v4);
      v7 = hKey;
      if ( !hKey )
        return v6;
LABEL_10:
      RegCloseKey(v7);
      return v6;
    }
    **(_BYTE **)(a1 + 16) = 1;
    if ( phkResult )
      RegCloseKey(phkResult);
    if ( v4 )
      CoTaskMemFree(v4);
    if ( hKey )
      RegCloseKey(hKey);
    return 0LL;
  }
}

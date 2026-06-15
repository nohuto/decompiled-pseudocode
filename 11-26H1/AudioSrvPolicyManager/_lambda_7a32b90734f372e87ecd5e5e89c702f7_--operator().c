/*
 * XREFs of _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x180016E10
 * Callers:
 *     ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180016DD0 (-DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_N.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001700C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180017240 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator()(_BYTE **a1)
{
  unsigned int v2; // ebx
  HKEY v3; // rbx
  LSTATUS v4; // eax
  LSTATUS v5; // eax
  HKEY v7; // rcx
  LPCWSTR lpSubKey[4]; // [rsp+60h] [rbp-20h] BYREF
  DWORD cSubKeys; // [rsp+A0h] [rbp+20h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp+28h] BYREF
  char v11; // [rsp+B0h] [rbp+30h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         L"%s\\%s",
         *((_QWORD *)*a1 + 1),
         L"GroupConfigs");
  if ( (v2 & 0x80000000) != 0 )
  {
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    v7 = hKey;
    if ( !hKey )
      return v2;
LABEL_14:
    RegCloseKey(v7);
    return v2;
  }
  v3 = hKey;
  if ( hKey )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v11);
    RegCloseKey(v3);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v11);
  }
  v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
  v2 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      v2 = (unsigned __int16)v4 | 0x80070000;
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    v7 = hKey;
    if ( !hKey )
      return v2;
    goto LABEL_14;
  }
  cSubKeys = 0;
  v5 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  v2 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      v2 = (unsigned __int16)v5 | 0x80070000;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v2;
  }
  *a1[1] = cSubKeys != 0;
  if ( lpSubKey[0] )
    CoTaskMemFree((LPVOID)lpSubKey[0]);
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}

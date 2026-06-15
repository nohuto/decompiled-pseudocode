/*
 * XREFs of _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x180016C00
 * Callers:
 *     ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180016910 (-IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@E.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001700C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180017240 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator()(_BYTE **a1)
{
  unsigned int v2; // ebx
  HKEY v3; // rbx
  LSTATUS v4; // eax
  HKEY v5; // rcx
  LSTATUS v7; // eax
  LPCWSTR lpSubKey[4]; // [rsp+30h] [rbp-20h] BYREF
  DWORD cbData; // [rsp+70h] [rbp+20h] BYREF
  DWORD Type; // [rsp+78h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF
  char v12; // [rsp+88h] [rbp+38h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         L"%s\\%s",
         *((_QWORD *)*a1 + 1),
         L"Configs");
  if ( (v2 & 0x80000000) != 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v2;
  }
  v3 = hKey;
  if ( hKey )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v12);
    RegCloseKey(v3);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
  }
  v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
  v2 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      v2 = (unsigned __int16)v4 | 0x80070000;
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    v5 = hKey;
    if ( !hKey )
      return v2;
    goto LABEL_10;
  }
  Type = 0;
  cbData = 0;
  v7 = RegQueryValueExW(hKey, L"GlobalProfileId", 0LL, &Type, 0LL, &cbData);
  v2 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v2 = (unsigned __int16)v7 | 0x80070000;
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    v5 = hKey;
    if ( !hKey )
      return v2;
LABEL_10:
    RegCloseKey(v5);
    return v2;
  }
  *a1[1] = 1;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return 0LL;
}

/*
 * XREFs of _lambda_5a51ce284699f0acc741bd28450f0086_::operator() @ 0x1801D85BC
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x1801D8570 (-DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@Z @ 0x1802BFB88 (-IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5a51ce284699f0acc741bd28450f0086_::operator()(__int64 a1)
{
  LSTATUS v2; // eax
  unsigned int v3; // ebx
  HKEY *phkResult; // rax
  LSTATUS v6; // eax
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *v7; // rcx
  HKEY hKey; // [rsp+50h] [rbp+20h] BYREF
  HKEY v9; // [rsp+58h] [rbp+28h] BYREF

  hKey = 0LL;
  v2 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, *(LPCWSTR *)(*(_QWORD *)a1 + 8LL), 0, 0x20019u, &hKey);
  v3 = v2;
  if ( v2 > 0 )
  {
    v3 = (unsigned __int16)v2 | 0x80070000;
LABEL_3:
    if ( hKey )
      RegCloseKey(hKey);
    return v3;
  }
  if ( v2 )
    goto LABEL_3;
  v9 = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v9);
  v6 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, phkResult);
  v3 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v3 = (unsigned __int16)v6 | 0x80070000;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v9);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v3;
  }
  **(_BYTE **)(a1 + 16) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::IsValidProfile(v7, v9);
  if ( v9 )
    RegCloseKey(v9);
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}

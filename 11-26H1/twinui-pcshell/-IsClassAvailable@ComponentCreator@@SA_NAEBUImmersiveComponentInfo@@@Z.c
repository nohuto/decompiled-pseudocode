/*
 * XREFs of ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x18018BFCC
 * Callers:
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18018BEF0 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803D8F48 (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803D9BA0 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800BFC54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ComponentCreator::IsClassAvailable(const struct ImmersiveComponentInfo *a1)
{
  unsigned int v2; // eax
  unsigned __int8 (*v3)(void); // rax
  HKEY *phkResult; // rax
  bool v5; // bl
  HKEY v7[2]; // [rsp+30h] [rbp-178h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-168h] BYREF
  WCHAR SubKey[128]; // [rsp+90h] [rbp-118h] BYREF

  v2 = *((_DWORD *)a1 + 3);
  if ( *((_QWORD *)a1 + 2) )
    v2 = (*((__int64 (__fastcall **)(_QWORD))a1 + 2))(v2);
  if ( (v2 & s_exclusionsInEffect) != 0 )
    return 0;
  v3 = (unsigned __int8 (*)(void))*((_QWORD *)a1 + 3);
  if ( v3 )
  {
    if ( !v3() )
      return 0;
  }
  if ( (*((_BYTE *)a1 + 8) & 1) == 0 )
    return 1;
  StringFromGUID2(*(const GUID *const *)a1, sz, 39);
  StringCchPrintfW(SubKey, 128LL, L"SOFTWARE\\Classes\\CLSID\\%s", sz);
  v7[0] = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(v7);
  v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, phkResult) == 0;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v7);
  return v5;
}

/*
 * XREFs of ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803E4EC8
 * Callers:
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803D98A0 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803D8F48 (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@Z @ 0x1803D9010 (--$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_1.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803D9538 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x1803D95E0 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall ImmersiveShellComponentsConfiguration::GetComponents(_QWORD *a1, HKEY a2, __int64 a3, HKEY a4)
{
  HKEY *v6; // rax
  const WCHAR *v7; // rdx
  const WCHAR *v8; // rbx
  HKEY *phkResult; // rax
  HKEY hKey; // [rsp+30h] [rbp-69h] BYREF
  HKEY v12; // [rsp+38h] [rbp-61h] BYREF
  int v13; // [rsp+40h] [rbp-59h]
  _QWORD v14[2]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v15[4]; // [rsp+58h] [rbp-41h] BYREF
  __int128 v16; // [rsp+78h] [rbp-21h] BYREF
  LPCWSTR v17[4]; // [rsp+88h] [rbp-11h] BYREF
  LPCWSTR lpSubKey[4]; // [rsp+A8h] [rbp+Fh] BYREF

  v15[3] = a1;
  v14[0] = a3;
  hKey = a4;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v13 = 1;
  wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[16],unsigned short const * &>((unsigned __int16 *)lpSubKey);
  v12 = 0LL;
  v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v12);
  v7 = (const WCHAR *)lpSubKey;
  if ( lpSubKey[3] > (LPCWSTR)7 )
    v7 = lpSubKey[0];
  if ( !RegOpenKeyW(a2, v7, v6) )
  {
    v16 = 0LL;
    v15[0] = &v16;
    v15[1] = &v12;
    v15[2] = a1;
    ForEachValueName<_lambda_10825b8ae890a1dc19d83ed8e1513741_>(v12, (__int64)v15);
    wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[21],unsigned short const * &>((unsigned __int16 *)v17);
    v14[0] = &v16;
    v14[1] = a1;
    v8 = (const WCHAR *)v17;
    if ( v17[3] > (LPCWSTR)7 )
      v8 = v17[0];
    hKey = 0LL;
    phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
    if ( !RegOpenKeyExW(a2, v8, 0, 0x20019u, phkResult) )
      ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(hKey, (__int64)v14);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    std::wstring::_Tidy_deallocate(v17);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v12);
  std::wstring::_Tidy_deallocate(lpSubKey);
  return a1;
}

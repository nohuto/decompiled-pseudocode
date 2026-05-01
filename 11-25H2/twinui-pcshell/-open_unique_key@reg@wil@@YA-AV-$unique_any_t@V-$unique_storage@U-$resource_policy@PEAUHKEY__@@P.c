/*
 * XREFs of ?open_unique_key@reg@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@PEAUHKEY__@@PEBGW4key_access@12@@Z @ 0x1803B402C
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803A6C80 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z @ 0x1803B3D24 (-get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
HKEY *__fastcall wil::reg::open_unique_key(HKEY *a1, __int64 a2, const WCHAR *a3)
{
  HKEY *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  REGSAM access_flags; // eax
  int v10; // eax
  bool v11; // sf
  int phkResult; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  v5 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(a1);
  access_flags = wil::reg::reg_view_details::get_access_flags(1, v6, v7, v8);
  v10 = RegOpenKeyExW(HKEY_CURRENT_USER, a3, 0, access_flags, v5);
  v11 = v10 < 0;
  if ( v10 > 0 )
  {
    v10 = (unsigned __int16)v10 | 0x80070000;
    v11 = v10 < 0;
  }
  if ( v11 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v10,
      phkResult);
  return a1;
}

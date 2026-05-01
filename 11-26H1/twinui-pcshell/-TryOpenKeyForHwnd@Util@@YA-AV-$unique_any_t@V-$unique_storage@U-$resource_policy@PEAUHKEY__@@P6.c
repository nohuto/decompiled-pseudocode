/*
 * XREFs of ?TryOpenKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x180652108
 * Callers:
 *     ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x1806514B0 (-TryGetValue@InProcPropertyStore@Util@@UEAA-AUhstring@winrt@@_KAEBU34@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x18035A874 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x18064CA10 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
HKEY *__fastcall Util::TryOpenKeyForHwnd(HKEY *a1, __int64 a2)
{
  HKEY *phkResult; // rsi
  char *KeyPathForHwnd; // rax
  unsigned int v6; // ebx
  HKEY v7; // rax
  HKEY v9[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]

  v9[0] = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(v9);
  KeyPathForHwnd = Util::GetKeyPathForHwnd((char *)&v10, a2);
  if ( *((_QWORD *)KeyPathForHwnd + 3) > 7uLL )
    KeyPathForHwnd = *(char **)KeyPathForHwnd;
  v6 = RegOpenKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForHwnd, 1u, 0xF003Fu, phkResult);
  std::wstring::_Tidy_deallocate(&v10);
  if ( v6 == 2 )
  {
    v7 = 0LL;
  }
  else
  {
    LODWORD(v10) = 0;
    v11 = 0LL;
    winrt::check_win32<unsigned long>((winrt::impl *)v6);
    v7 = v9[0];
    v9[0] = 0LL;
  }
  *a1 = v7;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v9);
  return a1;
}

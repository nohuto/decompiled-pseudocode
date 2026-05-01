/*
 * XREFs of ??$GetForWindowsEdition@$0?HPPPPPPO@@ShellProgramConfiguration@@SA?AU0@PEBG@Z @ 0x1804494AC
 * Callers:
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18044EBB0 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803CFA4C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 */

HKEY *__fastcall ShellProgramConfiguration::GetForWindowsEdition<-2147483646>(HKEY *a1)
{
  HKEY *phkResult; // rax
  const WCHAR *v3; // rdx
  LPCWSTR lpSubKey[4]; // [rsp+40h] [rbp-38h] BYREF

  wil::str_printf<std::wstring>(
    (__int64)lpSubKey,
    (__int64)L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\%s",
    L"StartMenu");
  *a1 = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(a1);
  v3 = (const WCHAR *)lpSubKey;
  if ( lpSubKey[3] > (LPCWSTR)7 )
    v3 = lpSubKey[0];
  RegOpenKeyExW(HKEY_LOCAL_MACHINE, v3, 0, 0x20019u, phkResult);
  std::wstring::_Tidy_deallocate((void **)lpSubKey);
  return a1;
}

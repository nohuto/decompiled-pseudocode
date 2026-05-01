/*
 * XREFs of ?MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800F9ED0
 * Callers:
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x1800F874C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool __fastcall dynamic_config::MakeOrOpenKey(HKEY hKey, LPCWSTR lpSubKey, HKEY *a3)
{
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  unsigned int v7; // ebx
  DWORD dwOptions; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(a3);
  Key = RegCreateKeyExW(hKey, lpSubKey, 0, 0LL, 0, 2u, 0LL, phkResult, 0LL);
  v7 = Key;
  if ( Key )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x14,
      (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\dynamic_config.h",
      (const char *)Key,
      dwOptions);
  return v7 == 0;
}

/*
 * XREFs of ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x1800C37F8
 * Callers:
 *     ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x1800C2544 (-SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800F1F4C (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?SetStartupSoundDefaultKey@Theming@@YAX_N@Z @ 0x1802C72C8 (-SetStartupSoundDefaultKey@Theming@@YAX_N@Z.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800C3F7C (-MakeOrOpenKey@dynamic_config@@YA_NPEAUHKEY__@@PEBGAEAV-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall dynamic_config::SetRegValueAndLog(
        HKEY hKey,
        const WCHAR *lpSubKey,
        DWORD dwType,
        LPCWSTR lpValueName,
        BYTE *a5,
        DWORD cbData,
        char a7)
{
  unsigned int v11; // eax
  __int64 v12; // rdx
  HKEY *v13; // rax
  unsigned int lpData; // [rsp+20h] [rbp-28h]
  HKEY hKeya[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  hKeya[0] = 0LL;
  if ( !a7 )
  {
    if ( !(unsigned __int8)dynamic_config::MakeOrOpenKey(hKey, lpSubKey) )
      goto LABEL_8;
    v11 = RegSetValueExW(hKeya[0], lpValueName, 0, dwType, a5, cbData);
    if ( !v11 )
      goto LABEL_8;
    v12 = 38LL;
    goto LABEL_5;
  }
  v13 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hKeya);
  v11 = RegOpenKeyExW(hKey, lpSubKey, 0, 2u, v13);
  if ( v11 )
  {
    v12 = 29LL;
LABEL_5:
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)v12,
      (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\dynamic_config.h",
      (const char *)v11,
      lpData);
    goto LABEL_8;
  }
  RegDeleteValueW(hKeya[0], lpValueName);
LABEL_8:
  if ( hKeya[0] )
    RegCloseKey(hKeya[0]);
}

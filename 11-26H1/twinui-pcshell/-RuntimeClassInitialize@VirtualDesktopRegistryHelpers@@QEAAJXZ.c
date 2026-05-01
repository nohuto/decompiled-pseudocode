/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x1801D18E0
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x1801D17DC (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::RuntimeClassInitialize(HKEY *this)
{
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  HKEY *v4; // rax
  int v5; // eax
  HKEY *v6; // rax
  unsigned int v7; // eax
  DWORD dwOptions; // [rsp+20h] [rbp-38h]
  DWORD dwOptionsa; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(this + 3);
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VirtualDesktops",
          0,
          0LL,
          0,
          3u,
          0LL,
          phkResult,
          0LL);
  if ( Key )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0xC1,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)Key,
      dwOptions);
  hKey = 0LL;
  v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v5 = SHCreateSessionKey(4LL, v4);
  if ( v5 >= 0 )
  {
    v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(this + 2);
    v7 = RegCreateKeyExW(hKey, L"VirtualDesktops", 0, 0LL, 1u, 3u, 0LL, v6, 0LL);
    if ( v7 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xC6,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
        (const char *)v7,
        dwOptionsa);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}

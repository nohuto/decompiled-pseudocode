/*
 * XREFs of ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x1806A32F0
 * Callers:
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x1806A3BA4 (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z @ 0x1806A3B0C (-GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_::operator()(bool **a1, const unsigned __int16 **a2)
{
  int SyncRootManagerRegistryLocation; // eax
  unsigned int v4; // ebx
  HKEY *phkResult; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  DWORD cSubKeys; // [rsp+88h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+30h] BYREF
  LPCWSTR lpSubKey; // [rsp+98h] [rbp+38h] BYREF

  lpSubKey = 0LL;
  SyncRootManagerRegistryLocation = Windows::Internal::SyncRootHelpers::GetSyncRootManagerRegistryLocation(
                                      (Windows::Internal::SyncRootHelpers *)&lpSubKey,
                                      a2);
  v4 = SyncRootManagerRegistryLocation;
  if ( SyncRootManagerRegistryLocation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
      (const char *)(unsigned int)SyncRootManagerRegistryLocation);
    return v4;
  }
  hKey = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x20119u, phkResult);
  if ( v7 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x3E,
           (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
           (const char *)v7);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v4;
  }
  cSubKeys = 0;
  v8 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( v8 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x42,
           (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
           (const char *)v8);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v4;
  }
  **a1 = cSubKeys != 0;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return 0LL;
}

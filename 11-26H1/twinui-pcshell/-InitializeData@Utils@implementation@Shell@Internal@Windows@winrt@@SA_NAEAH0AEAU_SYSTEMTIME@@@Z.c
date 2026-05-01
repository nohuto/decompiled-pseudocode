/*
 * XREFs of ?InitializeData@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NAEAH0AEAU_SYSTEMTIME@@@Z @ 0x18061B708
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18061B350 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@@Z @ 0x18061A818 (-ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::Utils::InitializeData(
        LPBYTE lpData,
        LPBYTE a2,
        struct _SYSTEMTIME *a3)
{
  char v4; // bl
  const WCHAR *v7; // rax
  PHKEY phkResult; // r9
  DWORD lpcbData; // [rsp+30h] [rbp-10h] BYREF
  DWORD v11; // [rsp+34h] [rbp-Ch] BYREF
  HKEY hKey; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbData; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  hKey = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v7 = winrt::hstring::c_str((winrt::hstring *)&c_miracastDiscoveryRegPath);
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, v7, 0, 0x20019u, phkResult) )
  {
    GetSystemTime(a3);
    winrt::Windows::Internal::Shell::implementation::Utils::ConfigureRegistryKeys(
      *(_DWORD *)lpData,
      *(_DWORD *)a2,
      (const BYTE *)a3);
LABEL_7:
    v4 = 1;
    goto LABEL_8;
  }
  cbData = 4;
  if ( !RegQueryValueExW(hKey, L"NotificationCount", 0LL, 0LL, lpData, &cbData) )
  {
    lpcbData = 4;
    if ( !RegQueryValueExW(hKey, L"DisableNotification", 0LL, 0LL, a2, &lpcbData) )
    {
      v11 = 16;
      if ( !RegQueryValueExW(hKey, L"LastNotifiedTime", 0LL, 0LL, (LPBYTE)a3, &v11) )
        goto LABEL_7;
    }
  }
LABEL_8:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v4;
}

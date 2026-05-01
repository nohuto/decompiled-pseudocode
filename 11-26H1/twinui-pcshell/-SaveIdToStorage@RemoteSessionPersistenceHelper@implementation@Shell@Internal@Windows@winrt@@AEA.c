/*
 * XREFs of ?SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEB_KAEBUhstring@6@AEB_N@Z @ 0x180663D74
 * Callers:
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180663F80 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x1806640B8 (-SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEB.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801A950C (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBUhstring@6@AEB_N@Z @ 0x1801F2FE0 (-GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028E950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=6
HKEY *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveIdToStorage(
        __int64 a1,
        HKEY *a2,
        unsigned __int64 *a3,
        winrt::hstring *a4,
        _BYTE *a5)
{
  HKEY *phkResult; // r12
  __int64 KeyPathForSystem; // rax
  unsigned int Key; // ebx
  HKEY *v12; // rbx
  _WORD *v13; // r10
  unsigned __int64 v14; // r9
  const WCHAR *v15; // rdx
  unsigned int v16; // ebx
  HKEY v17; // rax
  HKEY hKey; // [rsp+50h] [rbp-51h] BYREF
  HKEY v20[2]; // [rsp+58h] [rbp-49h] BYREF
  LPCWSTR lpSubKey[9]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v22[6]; // [rsp+B2h] [rbp+11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  hKey = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  KeyPathForSystem = winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetKeyPathForSystem(
                       a1,
                       (__int64)lpSubKey,
                       a4,
                       a5);
  if ( *(_QWORD *)(KeyPathForSystem + 24) > 7uLL )
    KeyPathForSystem = *(_QWORD *)KeyPathForSystem;
  Key = RegCreateKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForSystem, 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
  std::wstring::_Tidy_deallocate(lpSubKey);
  if ( Key )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      286LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)Key);
    *a2 = 0LL;
  }
  else
  {
    v20[0] = 0LL;
    v12 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(v20);
    v13 = v22;
    v14 = *a3;
    do
    {
      *--v13 = v14 % 0xA + 48;
      v14 /= 0xAuLL;
    }
    while ( v14 );
    std::wstring::wstring((__int64)lpSubKey, (__int64)v13, (__int64)v22);
    v15 = (const WCHAR *)lpSubKey;
    if ( lpSubKey[3] > (LPCWSTR)7 )
      v15 = lpSubKey[0];
    v16 = RegCreateKeyExW(hKey, v15, 0, 0LL, 1u, 0xF003Fu, 0LL, v12, 0LL);
    std::wstring::_Tidy_deallocate(lpSubKey);
    if ( v16 )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        307LL,
        (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v16);
      v17 = 0LL;
    }
    else
    {
      v17 = v20[0];
      v20[0] = 0LL;
    }
    *a2 = v17;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v20);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return a2;
}

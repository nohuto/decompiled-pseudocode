/*
 * XREFs of ?SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEB_KAEBUhstring@6@AEB_N@Z @ 0x18063E258
 * Callers:
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18063E414 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x18063E54C (-SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEB.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBUhstring@6@AEB_N@Z @ 0x1801BEF30 (-GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802975F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18062F428 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveIdToStorage(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        winrt::hstring *a4,
        _BYTE *a5)
{
  HKEY *phkResult; // r15
  _OWORD *KeyPathForSystem; // rax
  unsigned int Key; // ebx
  HKEY *v12; // rbx
  char **v13; // rax
  unsigned int v14; // ebx
  HKEY hKey; // [rsp+50h] [rbp-21h] BYREF
  HKEY v17[2]; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v18[2]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  hKey = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  KeyPathForSystem = winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetKeyPathForSystem(
                       a1,
                       v18,
                       a4,
                       a5);
  if ( *((_QWORD *)KeyPathForSystem + 3) > 7uLL )
    KeyPathForSystem = *(_OWORD **)KeyPathForSystem;
  Key = RegCreateKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForSystem, 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
  std::wstring::_Tidy_deallocate((void **)v18);
  if ( Key )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      292LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)Key);
    *a2 = 0LL;
    *a2 = 0LL;
  }
  else
  {
    v17[0] = 0LL;
    v12 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(v17);
    v13 = std::to_wstring((char **)v18, *a3);
    if ( (unsigned __int64)v13[3] > 7 )
      v13 = (char **)*v13;
    v14 = RegCreateKeyExW(hKey, (LPCWSTR)v13, 0, 0LL, 1u, 0xF003Fu, 0LL, v12, 0LL);
    std::wstring::_Tidy_deallocate((void **)v18);
    if ( v14 )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        313LL,
        (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
        (const char *)v14);
      *a2 = 0LL;
      *a2 = 0LL;
    }
    else
    {
      *a2 = v17[0];
      v17[0] = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v17);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return a2;
}

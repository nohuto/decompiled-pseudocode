/*
 * XREFs of ?TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@AEB_N@Z @ 0x18027C47C
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x18066186C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661B9C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661B9C.c)
 *     ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x180662F60 (-DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBUhstring@6@AEB_N@Z @ 0x1801F2FE0 (-GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028E950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
HKEY *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::TryOpenTrackedIdsKey(
        __int64 a1,
        HKEY *a2,
        winrt::hstring *a3,
        _BYTE *a4)
{
  HKEY *v8; // rbp
  __int64 KeyPathForSystem; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  HKEY v13; // rax
  unsigned int phkResult; // [rsp+20h] [rbp-78h]
  HKEY v16[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v16[0] = 0LL;
  v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(v16);
  KeyPathForSystem = winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetKeyPathForSystem(
                       a1,
                       (__int64)v17,
                       a3,
                       a4);
  if ( *(_QWORD *)(KeyPathForSystem + 24) > 7uLL )
    KeyPathForSystem = *(_QWORD *)KeyPathForSystem;
  v10 = RegOpenKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForSystem, 1u, 0xF003Fu, v8);
  std::wstring::_Tidy_deallocate(v17);
  LOBYTE(v11) = 3;
  LOBYTE(v12) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    v12,
    v11);
  if ( v10 == 2 )
    goto LABEL_7;
  if ( v10 )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x1CE,
      (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v10,
      phkResult);
LABEL_7:
    v13 = 0LL;
    goto LABEL_8;
  }
  v13 = v16[0];
  v16[0] = 0LL;
LABEL_8:
  *a2 = v13;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v16);
  return a2;
}

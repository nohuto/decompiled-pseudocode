/*
 * XREFs of ?GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBI@Z @ 0x18066338C
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x18066186C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661B9C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661B9C.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028E950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x18035A874 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806504E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     _lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___ @ 0x1806617B4 (_lambda_38c2e9ac3688a7625bc550deaa567694_--operator()_unsigned_short_const___int_unsigned_long__.c)
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x180662A90 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180663864 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_.c)
 */

// Hidden C++ exception states: #wind=2
const unsigned __int16 *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetHostProcessDataFromStorage(
        __int64 a1,
        volatile signed __int32 *a2,
        HKEY *a3,
        const unsigned int *a4)
{
  winrt::impl *v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rdx
  const char *v10; // r9
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  winrt::hstring *v18; // rbx
  winrt::hstring *v19; // rax
  const unsigned __int16 *v21; // rax
  DWORD v22; // [rsp+60h] [rbp-4A8h] BYREF
  const unsigned __int16 *v23; // [rsp+68h] [rbp-4A0h] BYREF
  HKEY *v24; // [rsp+70h] [rbp-498h] BYREF
  int v25; // [rsp+78h] [rbp-490h] BYREF
  int v26; // [rsp+7Ch] [rbp-48Ch] BYREF
  int v27; // [rsp+80h] [rbp-488h] BYREF
  int v28; // [rsp+84h] [rbp-484h] BYREF
  int v29; // [rsp+88h] [rbp-480h] BYREF
  int v30; // [rsp+8Ch] [rbp-47Ch] BYREF
  int v31; // [rsp+90h] [rbp-478h] BYREF
  int v32; // [rsp+98h] [rbp-470h]
  __int128 v33; // [rsp+A0h] [rbp-468h]
  unsigned __int16 v34[264]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int16 v35[264]; // [rsp+2D0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+0h]

  v23 = (const unsigned __int16 *)a2;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  v32 = 0;
  v33 = 0LL;
  v22 = 2;
  v6 = (winrt::impl *)(unsigned int)lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
                                      &v24,
                                      (LPCWSTR *)off_180760650,
                                      &v22,
                                      v35);
  try
  {
    winrt::check_win32<unsigned long>(v6);
    v32 = 0;
    v33 = 0LL;
    v22 = 2;
    v7 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
           &v24,
           (LPCWSTR *)off_180760658,
           &v22,
           v34);
    winrt::check_win32<unsigned long>((winrt::impl *)v7);
    v32 = 0;
    v33 = 0LL;
    v22 = 16;
    v8 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
           &v24,
           (LPCWSTR *)off_180760648,
           &v22,
           &v31);
    winrt::check_win32<unsigned long>((winrt::impl *)v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDE,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      v10);
    v21 = v23;
    *(_QWORD *)v23 = 0LL;
    *((_QWORD *)v21 + 1) = 0LL;
    return v23;
  }
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::GetImpl'::`2'::impl,
    v9);
  v22 = 16;
  v11 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v24,
          (LPCWSTR *)off_180760640,
          &v22,
          &v30);
  if ( v11 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      235LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v11);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
    1u,
    v12);
  v22 = 16;
  v23 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
  v13 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v24,
          &v23,
          &v22,
          &v29);
  if ( v13 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      244LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v13);
  v22 = 16;
  v23 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
  v14 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v24,
          &v23,
          &v22,
          &v28);
  if ( v14 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      245LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v14);
  v22 = 16;
  v23 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
  v15 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v24,
          &v23,
          &v22,
          &v27);
  if ( v15 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      246LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v15);
  v22 = 16;
  v23 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
  v16 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v24,
          &v23,
          &v22,
          &v26);
  if ( v16 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      247LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v16);
  v22 = 16;
  v23 = winrt::hstring::c_str((winrt::hstring *)&c_supportBlendedDisplaySettings);
  v17 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v24,
          &v23,
          &v22,
          &v25);
  if ( v17 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      250LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v17);
  v18 = winrt::hstring::hstring((winrt::hstring *)&v24, v34);
  v19 = winrt::hstring::hstring((winrt::hstring *)&v23, v35);
  std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int const &,winrt::hstring,winrt::hstring,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
    a2,
    a4,
    v19,
    v18,
    &v31,
    &v30,
    &v29,
    &v28,
    &v27,
    &v26,
    &v25);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v23);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
  return (const unsigned __int16 *)a2;
}

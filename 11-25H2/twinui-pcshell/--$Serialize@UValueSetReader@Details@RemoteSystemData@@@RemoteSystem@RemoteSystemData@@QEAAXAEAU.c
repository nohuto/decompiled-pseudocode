/*
 * XREFs of ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18061E9F4
 * Callers:
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x180625358 (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180028358 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x1800ABDCC (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1801BA818 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BD538 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1801BF430 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BF430.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180244648 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable@Foundation@Windows@1@@Z @ 0x180453A54 (--$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable.c)
 *     ??$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable@Foundation@Windows@1@@Z @ 0x180622818 (--$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable.c)
 *     ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806228BC (--$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA-AUhstr.c)
 *     ??$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectable@Foundation@Windows@1@@Z @ 0x180622964 (--$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectab.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AC70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall RemoteSystemData::RemoteSystem::Serialize<RemoteSystemData::Details::ValueSetReader>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  _QWORD *v4; // rax
  const char *v5; // r9
  char v6; // bl
  volatile signed __int32 *v7; // rdx
  char v8; // al
  _QWORD *v9; // rax
  const char *v10; // r9
  char v11; // al
  _QWORD *v12; // rax
  const char *v13; // r9
  char v14; // al
  __int64 v15; // rdx
  _QWORD *v16; // rax
  const char *v17; // r9
  __int64 (__fastcall ***v18)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-49h] BYREF
  volatile signed __int32 *v19; // [rsp+28h] [rbp-41h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-39h] BYREF
  void *v21[4]; // [rsp+40h] [rbp-29h] BYREF
  void *v22[4]; // [rsp+60h] [rbp-9h] BYREF
  void *v23[4]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  std::wstring::wstring((char **)v23, (__int128 *)&RemoteSystemData::RemoteSystem::defaultPrefix);
  v4 = std::operator+<unsigned short>(v22, (__int64)v23, RemoteSystemData::Properties::Id);
  std::wstring::operator std::basic_string_view<unsigned short>(v4, v20);
  winrt::param::hstring::hstring((__int64)v21, v20);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
    a2,
    (winrt *)&v18,
    v21);
  v6 = 1;
  if ( v18 )
  {
    winrt::impl::unbox_value_type<winrt::hstring,winrt::Windows::Foundation::IInspectable const &>(&v19, &v18);
    if ( (volatile signed __int32 **)a1 != &v19 )
    {
      v7 = v19;
      v19 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)a1, (__int64)v7);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v18);
    v8 = 0;
  }
  else
  {
    v8 = 1;
  }
  if ( v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v5);
  std::wstring::_Tidy_deallocate(v22);
  v9 = std::operator+<unsigned short>(v21, (__int64)v23, RemoteSystemData::Properties::State);
  std::wstring::operator std::basic_string_view<unsigned short>(v9, v20);
  winrt::param::hstring::hstring((__int64)v22, v20);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
    a2,
    (winrt *)&v18,
    v22);
  if ( v18 )
  {
    *(_DWORD *)(a1 + 8) = winrt::impl::unbox_value_type<unsigned int,winrt::Windows::Foundation::IInspectable const &>(&v18);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v18);
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  if ( v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v10);
  std::wstring::_Tidy_deallocate(v21);
  v12 = std::operator+<unsigned short>(v21, (__int64)v23, RemoteSystemData::Properties::UpdateTimestamp);
  std::wstring::operator std::basic_string_view<unsigned short>(v12, v20);
  winrt::param::hstring::hstring((__int64)v22, v20);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
    a2,
    (winrt *)&v18,
    v22);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 16) = winrt::impl::unbox_value_type<unsigned __int64,winrt::Windows::Foundation::IInspectable const &>(&v18);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v18);
    v14 = 0;
  }
  else
  {
    v14 = 1;
  }
  if ( v14 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x38,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v13);
  std::wstring::_Tidy_deallocate(v21);
  LOBYTE(v15) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
    v15);
  if ( !(unsigned int)CloudPCHelpers::GetCloudPCMode() )
  {
    v16 = std::operator+<unsigned short>(v21, (__int64)v23, RemoteSystemData::Properties::TimeOut);
    std::wstring::operator std::basic_string_view<unsigned short>(v16, v20);
    winrt::param::hstring::hstring((__int64)v22, v20);
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
      a2,
      (winrt *)&v18,
      v22);
    if ( v18 )
    {
      *(_WORD *)(a1 + 24) = winrt::impl::unbox_value_type<unsigned short,winrt::Windows::Foundation::IInspectable const &>(&v18);
      if ( v18 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v18);
      v6 = 0;
    }
    if ( v6 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3D,
        (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
        v17);
    std::wstring::_Tidy_deallocate(v21);
  }
  std::wstring::_Tidy_deallocate(v23);
}

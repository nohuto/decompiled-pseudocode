/*
 * XREFs of ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18064449C
 * Callers:
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x18064B0D4 (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18002843C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1801BBE68 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BBE68.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180235658 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1804605A4 (--$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable.c)
 *     ??$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1804AB254 (--$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectab.c)
 *     ??$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAUhstring@winrt@@@Z @ 0x18064471C (--$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_stri.c)
 *     ??$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806482A8 (--$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650680 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall RemoteSystemData::RemoteSystem::Serialize<RemoteSystemData::Details::ValueSetReader>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  _QWORD *v4; // rax
  const char *v5; // r9
  _QWORD *v6; // rax
  const char *v7; // r9
  char v8; // bl
  char v9; // al
  _QWORD *v10; // rax
  const char *v11; // r9
  char v12; // al
  __int64 v13; // rdx
  _QWORD *v14; // rax
  const char *v15; // r9
  __int64 (__fastcall ***v17[2])(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-59h] BYREF
  __int64 v18[4]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v21[4]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  std::wstring::wstring((__int64)v19, (__int64)&RemoteSystemData::RemoteSystem::defaultPrefix);
  v4 = std::operator+<unsigned short>(v18, (__int64)v19, (__int64)RemoteSystemData::Properties::Id);
  std::wstring::operator std::basic_string_view<unsigned short>(v4, v17);
  if ( !(unsigned __int8)RemoteSystemData::Details::ValueSetReader::TrySerialize<winrt::hstring>(a2, v17, a1) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v5);
  std::wstring::_Tidy_deallocate(v18);
  v6 = std::operator+<unsigned short>(v21, (__int64)v19, (__int64)RemoteSystemData::Properties::State);
  std::wstring::operator std::basic_string_view<unsigned short>(v6, v18);
  winrt::param::hstring::hstring((__int64)v20, v18);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
    a2,
    (winrt *)v17,
    v20);
  v8 = 1;
  if ( v17[0] )
  {
    *(_DWORD *)(a1 + 8) = winrt::impl::unbox_value_type<unsigned int,winrt::Windows::Foundation::IInspectable const &>(v17);
    if ( v17[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v17);
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  if ( v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v7);
  std::wstring::_Tidy_deallocate(v21);
  v10 = std::operator+<unsigned short>(v20, (__int64)v19, (__int64)RemoteSystemData::Properties::UpdateTimestamp);
  std::wstring::operator std::basic_string_view<unsigned short>(v10, v18);
  winrt::param::hstring::hstring((__int64)v21, v18);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
    a2,
    (winrt *)v17,
    v21);
  if ( v17[0] )
  {
    *(_QWORD *)(a1 + 16) = winrt::impl::unbox_value_type<unsigned __int64,winrt::Windows::Foundation::IInspectable const &>(v17);
    if ( v17[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v17);
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  if ( v12 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x38,
      (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
      v11);
  std::wstring::_Tidy_deallocate(v20);
  LOBYTE(v13) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
    v13);
  if ( !(unsigned int)CloudPCHelpers::GetCloudPCMode() )
  {
    v14 = std::operator+<unsigned short>(v20, (__int64)v19, (__int64)RemoteSystemData::Properties::TimeOut);
    std::wstring::operator std::basic_string_view<unsigned short>(v14, v18);
    winrt::param::hstring::hstring((__int64)v21, v18);
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
      a2,
      (winrt *)v17,
      v21);
    if ( v17[0] )
    {
      *(_WORD *)(a1 + 24) = winrt::impl::unbox_value_type<unsigned short,winrt::Windows::Foundation::IInspectable const &>(v17);
      if ( v17[0] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v17);
      v8 = 0;
    }
    if ( v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3D,
        (int)"onecoreuap\\internal\\shell\\inc\\RemoteSystemData.h",
        v15);
    std::wstring::_Tidy_deallocate(v20);
  }
  return std::wstring::_Tidy_deallocate(v19);
}

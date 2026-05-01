/*
 * XREFs of ??$call@AEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIJsonArrayStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@Z @ 0x18068B6F8
 * Callers:
 *     ?TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z @ 0x1806985AC (-TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?TryParse@?$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAUJsonArray@Json@Data@Windows@3@@Z @ 0x180698500 (-TryParse@-$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>::call<_lambda_26a4133d97793dfa5f7c7dd7c88d483b_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  char v4; // di
  char v5; // al
  char v6; // bl
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-50h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-40h]
  __int64 v11[4]; // [rsp+40h] [rbp-30h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 **); // [rsp+60h] [rbp-10h] BYREF

  v9 = (__int64 *)L"Windows.Data.Json.JsonArray";
  *(_QWORD *)&v10 = 27LL;
  winrt::param::hstring::hstring((__int64)v11, (__int64 *)&v9);
  v12 = 0LL;
  LODWORD(v9) = 0;
  v10 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v8,
    v11,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonArrayStatics>,
    (__int64)&v12);
  winrt::check_hresult((int *)&v8, (int)v8, (__int64)&v9);
  v8 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  v9 = 0LL;
  if ( !v12 )
  {
    v3 = 0LL;
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9);
  v3 = v9;
  if ( !v9 )
    goto LABEL_3;
  v4 = 1;
LABEL_4:
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  if ( v4 )
  {
    v9 = &qword_1808DB348;
    _InterlockedIncrement64(&qword_1808DB348);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB350);
    }
    v5 = winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
           &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>,
           *a2,
           a2[1]);
    _InterlockedDecrement64(&qword_1808DB348);
  }
  else
  {
    v5 = winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
           &v8,
           *a2,
           a2[1]);
  }
  v6 = v5;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return v6;
}

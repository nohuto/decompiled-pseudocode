/*
 * XREFs of ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x1802991BC
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034B670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18005D0B4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800ABC8C (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180150860 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x180150A24 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z @ 0x1802993A8 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z.c)
 *     ??$append@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x18029941C (--$append@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ??$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z @ 0x180299478 (--$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z.c)
 *     ?CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802995E0 (-CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall GamingOverlayExperienceManager::SignalGamepadConnect(__int64 a1, __int64 *a2, __int64 *a3)
{
  struct winrt::impl::shared_hstring_header **v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  volatile signed __int32 *v9; // [rsp+20h] [rbp-49h] BYREF
  struct winrt::impl::shared_hstring_header *v10; // [rsp+28h] [rbp-41h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v13; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v14[4]; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-11h]
  __int64 *v16; // [rsp+60h] [rbp-9h]
  __int64 *v17; // [rsp+68h] [rbp-1h]
  __int64 *v18; // [rsp+70h] [rbp+7h]
  void *Src[2]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v20; // [rsp+88h] [rbp+1Fh]
  unsigned __int64 v21; // [rsp+90h] [rbp+27h]
  unsigned int v22[4]; // [rsp+98h] [rbp+2Fh] BYREF

  v16 = a2;
  v17 = a3;
  std::wstring::wstring((char **)Src, L"ms-gamebar://gamepadConnect");
  winrt::Windows::Foundation::GuidHelper::CreateNewGuid();
  std::wstring::append(Src, L"?CorrelationId=", 0xFuLL);
  v5 = winrt::to_hstring(&v10, v22);
  std::wstring::append<winrt::hstring,0>(Src, v5);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v10);
  v6 = winrt::operator+((__int64)&v9, (__int64)L"&VID=", a2);
  std::wstring::append<winrt::hstring,0>(Src, v6);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  v7 = winrt::operator+((__int64)&v11, (__int64)L"&PID=", a3);
  std::wstring::append<winrt::hstring,0>(Src, v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
  v8 = (__int64 *)Src;
  if ( v21 > 7 )
    v8 = (__int64 *)Src[0];
  if ( v20 )
  {
    if ( *((_WORD *)v8 + v20) )
      abort();
    v14[0] = 1;
    v14[1] = v20;
    v15 = v8;
    v13 = v14;
  }
  else
  {
    v13 = 0LL;
  }
  v12 = (__int64 *)&v13;
  v18 = &qword_180899948;
  _InterlockedIncrement64(&qword_180899948);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      &v9,
      (__int64 *)&v13);
    _InterlockedDecrement64(&qword_180899948);
  }
  else
  {
    _InterlockedDecrement64(&qword_180899948);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      v8,
      &v9,
      &v12);
  }
  winrt::Windows::System::Launcher::LaunchUriAsync((const struct winrt::Windows::Foundation::Uri *)&v10);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  GamingOverlayTelemetry::GamepadConnect<winrt::guid &>(v22);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  std::wstring::_Tidy_deallocate(Src);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}

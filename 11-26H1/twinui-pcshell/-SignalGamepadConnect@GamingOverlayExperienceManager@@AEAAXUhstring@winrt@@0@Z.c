/*
 * XREFs of ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x18028FEA0
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034F230 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180142568 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x18014283C (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1801C55E4 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ??$append@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x1802900B0 (--$append@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z @ 0x1802900EC (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z.c)
 *     ??$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z @ 0x180290188 (--$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z.c)
 *     ?CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802902FC (-CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall GamingOverlayExperienceManager::SignalGamepadConnect(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v5; // rax
  const void *v6; // rcx
  unsigned __int64 v7; // rax
  void *v8; // rcx
  struct winrt::impl::shared_hstring_header **v9; // rax
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rax
  __int64 *p_Src; // rcx
  __int64 *v13; // [rsp+20h] [rbp-39h] BYREF
  __int64 v14; // [rsp+28h] [rbp-31h] BYREF
  _DWORD *v15; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-21h] BYREF
  __int64 *v17; // [rsp+48h] [rbp-11h]
  __int64 *v18; // [rsp+50h] [rbp-9h]
  __int64 *v19; // [rsp+58h] [rbp-1h]
  __int64 *v20; // [rsp+60h] [rbp+7h]
  __int128 Src; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+78h] [rbp+1Fh]
  unsigned int v23[4]; // [rsp+88h] [rbp+2Fh] BYREF

  v18 = a2;
  v19 = a3;
  Src = 0LL;
  v22 = 0LL;
  v5 = std::_WChar_traits<wchar_t>::length((__int64)L"ms-gamebar://gamepadConnect");
  std::wstring::_Construct<1,unsigned short const *>((char **)&Src, v6, v5);
  winrt::Windows::Foundation::GuidHelper::CreateNewGuid();
  v7 = std::_WChar_traits<wchar_t>::length((__int64)L"?CorrelationId=");
  std::wstring::append(&Src, v8, v7);
  v9 = winrt::to_hstring((struct winrt::impl::shared_hstring_header **)&v13, v23);
  std::wstring::append<winrt::hstring,0>(&Src, v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
  v10 = winrt::operator+((volatile signed __int32 *)&v13, L"&VID=", a2);
  std::wstring::append<winrt::hstring,0>(&Src, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
  v11 = winrt::operator+((volatile signed __int32 *)&v13, L"&PID=", a3);
  std::wstring::append<winrt::hstring,0>(&Src, v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
  p_Src = (__int64 *)&Src;
  if ( *((_QWORD *)&v22 + 1) > 7uLL )
    p_Src = (__int64 *)Src;
  if ( (_DWORD)v22 )
  {
    if ( *((_WORD *)p_Src + (unsigned int)v22) )
      abort();
    v16[0] = 1;
    v16[1] = v22;
    v17 = p_Src;
    v15 = v16;
  }
  else
  {
    v15 = 0LL;
  }
  v13 = (__int64 *)&v15;
  v20 = &qword_1808D9FA8;
  _InterlockedIncrement64(&qword_1808D9FA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      &v14,
      (__int64 *)&v15);
    _InterlockedDecrement64(&qword_1808D9FA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808D9FA8);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      p_Src,
      &v14,
      &v13);
  }
  winrt::Windows::System::Launcher::LaunchUriAsync((const struct winrt::Windows::Foundation::Uri *)&v13);
  if ( v14 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  GamingOverlayTelemetry::GamepadConnect<winrt::guid &>(v23);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
  std::wstring::_Tidy_deallocate(&Src);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}

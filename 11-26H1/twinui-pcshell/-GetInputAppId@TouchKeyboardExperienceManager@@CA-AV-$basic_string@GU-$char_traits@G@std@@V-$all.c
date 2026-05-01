/*
 * XREFs of ?GetInputAppId@TouchKeyboardExperienceManager@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800CD758
 * Callers:
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator() @ 0x18046A0E4 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800CD988 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801909B8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY07$$CBG@Z @ 0x180231EB8 (--$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x18039A2B4 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ??$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY08$$CBG@Z @ 0x180464B44 (--$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall TouchKeyboardExperienceManager::GetInputAppId(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 *v5; // rax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rax
  __int64 *v8; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h]
  volatile signed __int32 *v11; // [rsp+50h] [rbp-B0h] BYREF
  void *v12; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v13; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v14[4]; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v15; // [rsp+80h] [rbp-80h]
  _QWORD *v16; // [rsp+88h] [rbp-78h]
  _BYTE Src[528]; // [rsp+90h] [rbp-70h] BYREF

  v16 = a1;
  std::wstring::wstring((__int64)a1);
  v10 = 1;
  memset_0(Src, 0, 0x208uLL);
  pcbData = 520;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", L"InputAppId", 2u, 0LL, Src, &pcbData)
    || pcbData <= 2 )
  {
    if ( aComMicrosoftWi_9[35] )
      abort();
    v14[0] = 1;
    v14[1] = 35;
    v15 = L"com.microsoft.windows.app.textinput";
    v13 = v14;
    v11 = (volatile signed __int32 *)&v13;
    v12 = &qword_1808DBE08;
    _InterlockedIncrement64(&qword_1808DBE08);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v8,
        &v13);
      v3 = 13;
      _InterlockedDecrement64(&qword_1808DBE08);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DBE08);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
        v2,
        &v8,
        &v11);
      v3 = 5;
    }
    v10 = v3 | 2;
    if ( v8 )
    {
      v6 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
             &v8,
             &v11);
      winrt::hstring::operator std::basic_string_view<unsigned short>(v6, &v12);
      std::wstring::assign(a1, v12);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
      v7 = (volatile signed __int32 *)a1;
      if ( a1[3] > 7uLL )
        v7 = (volatile signed __int32 *)*a1;
      v11 = v7;
      TouchKeyboardExperienceTelemetryLogger::InputAppIdInitialized<unsigned short const *,unsigned short const (&)[8]>(&v11);
    }
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  }
  else
  {
    std::wstring::operator=((char *)a1, Src);
    v5 = a1;
    if ( a1[3] > 7uLL )
      v5 = (__int64 *)*a1;
    v8 = v5;
    TouchKeyboardExperienceTelemetryLogger::InputAppIdInitialized<unsigned short const *,unsigned short const (&)[9]>(&v8);
  }
  return a1;
}

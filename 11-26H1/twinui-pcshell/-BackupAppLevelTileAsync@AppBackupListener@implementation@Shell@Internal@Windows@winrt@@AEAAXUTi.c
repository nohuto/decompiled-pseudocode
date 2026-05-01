/*
 * XREFs of ?BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTileId@StartScreen@UI@WindowsUdk@6@Uhstring@6@@Z @ 0x1800F5C60
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x180615350 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x1806156E0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x180615980 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800286C8 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F6290 (-ToString@-$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@imp.c)
 *     winrt::Windows::Internal::Shell::implementation::CensorTileId @ 0x1800F6354 (winrt--Windows--Internal--Shell--implementation--CensorTileId.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7710 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A0EEC (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ??$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z @ 0x1802C01CC (--$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z.c)
 *     ??$NullFactory_Error@AEAY0FI@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FI@$$CBG@Z @ 0x1802C53A0 (--$NullFactory_Error@AEAY0FI@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FI@$$CBG@Z.c)
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1803CEF00 (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1803CF530 (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactorySt_ea_1803CF530.c)
 *     ?BackupTileAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppListBackupExtensionStatics6@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollection@StartScreen@UI@WindowsUdk@3@AEBUTileId@5673@AEBUhstring@param@3@@Z @ 0x18061303C (-BackupTileAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppLi.c)
 *     ?GetDateTime@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@V?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180614BD0 (-GetDateTime@-$consume_Windows_Foundation_IPropertyValue@U-$IReference@V-$time_point@Uclock@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync(
        __int64 a1,
        __int64 *a2,
        winrt::hstring *a3)
{
  char v6; // bl
  winrt::hstring *v7; // rax
  const WCHAR *v8; // rax
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rcx
  __int64 **v12; // rax
  _QWORD *View; // rax
  __int64 **v14; // rax
  _QWORD *v15; // rax
  char v16; // di
  const unsigned __int16 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r12
  void *v20; // rbx
  __int64 v21; // [rsp+30h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v24[8]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v25; // [rsp+68h] [rbp-90h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-88h] BYREF
  _DWORD *v27; // [rsp+78h] [rbp-80h] BYREF
  _DWORD v28[4]; // [rsp+80h] [rbp-78h] BYREF
  const wchar_t *v29; // [rsp+90h] [rbp-68h]
  _DWORD *v30; // [rsp+98h] [rbp-60h] BYREF
  _DWORD v31[4]; // [rsp+A0h] [rbp-58h] BYREF
  const unsigned __int16 *v32; // [rsp+B0h] [rbp-48h]
  const unsigned __int16 *v33; // [rsp+100h] [rbp+8h] BYREF
  __int64 *v34; // [rsp+108h] [rbp+10h]
  winrt::hstring *v35; // [rsp+110h] [rbp+18h]
  __int64 v36; // [rsp+118h] [rbp+20h] BYREF

  v35 = a3;
  v34 = a2;
  v6 = 0;
  LODWORD(v33) = 0;
  v7 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::WindowsUdk::UI::StartScreen::TileId>::ToString(
                           a2,
                           &v33);
  v8 = winrt::hstring::c_str(v7);
  v9 = winrt::Windows::Internal::Shell::implementation::CensorTileId(v8);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v9,
    -1LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v33);
  v10 = a1 + 152;
  winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
    (__int64 **)(a1 + 152),
    &v36,
    a2);
  if ( !v36 )
    goto LABEL_5;
  v12 = (__int64 **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                      &v36,
                      v23);
  LODWORD(v33) = 1;
  View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
           v12,
           &v25);
  v6 = 3;
  LODWORD(v33) = 3;
  if ( !*View )
    goto LABEL_4;
  v14 = (__int64 **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                      &v36,
                      v24);
  LODWORD(v33) = 7;
  v15 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
          v14,
          &v21);
  v6 = 15;
  LODWORD(v33) = 15;
  if ( *(_QWORD *)winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<std::chrono::time_point<winrt::clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>::GetDateTime(
                    v15,
                    &v26) )
LABEL_5:
    v16 = 0;
  else
LABEL_4:
    v16 = 1;
  if ( (v6 & 8) != 0 )
  {
    v6 &= ~8u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  }
  if ( (v6 & 4) != 0 )
  {
    v6 &= ~4u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v24);
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
  }
  if ( (v6 & 1) != 0 )
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v23);
  if ( v16 )
  {
    if ( v36 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v36);
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    v28[0] = 1;
    v28[1] = 52;
    v29 = L"WindowsUdk.System.UserProfile.AppListBackupExtension";
    v27 = v28;
    if ( aComMicrosoftWi_4[45] )
      abort();
    v31[0] = 1;
    v31[1] = 45;
    v32 = L"com.microsoft.windows.extension.applistbackup";
    v30 = v31;
    v23[0] = &v30;
    v23[1] = &v27;
    v26 = &qword_1808DBDC8;
    _InterlockedIncrement64(&qword_1808DBDC8);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>,
        &v33,
        &v30,
        &v27);
      _InterlockedDecrement64(&qword_1808DBDC8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DBDC8);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_7b7c9298bfeaa6f21443744179c3c395_ &>(
        v11,
        &v33,
        v23);
    }
    v17 = v33;
    v21 = 0LL;
    if ( v33 )
    {
      (**(void (__fastcall ***)(const unsigned __int16 *, void *, __int64 *))v33)(
        v33,
        &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>,
        &v21);
      v18 = v21;
      v19 = v21;
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
    }
    if ( v17 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v33);
    if ( v19 )
    {
      v33 = winrt::hstring::c_str(a3);
      v20 = pv;
      v23[0] = pv;
      CAppBackupListenerTelemetry::AttemptAppLevelTileBackup<unsigned short *,unsigned short const *>(v23, &v33);
      v23[0] = *(_QWORD *)a3;
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>::BackupTileAsync(
        (unsigned int)&v21,
        (unsigned int)&v33,
        v10,
        (_DWORD)a2,
        (__int64)v23);
      if ( v33 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v33);
    }
    else
    {
      CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[88]>();
      v20 = pv;
    }
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
    if ( v36 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v36);
    if ( v20 )
      CoTaskMemFree(v20);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}

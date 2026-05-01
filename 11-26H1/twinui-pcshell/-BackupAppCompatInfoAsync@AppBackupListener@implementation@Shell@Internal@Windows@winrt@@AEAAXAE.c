/*
 * XREFs of ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180613528
 * Callers:
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x1802948CC (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x180613E78 (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802B4E7C (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802B4E7C.c)
 *     ??$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z @ 0x1806109A4 (--$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z @ 0x1806113F4 (--$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  void (__fastcall ***v3)(_QWORD, void *, __int64 **); // rcx
  __int64 *v4; // rdi
  const WCHAR *v5; // rax
  __int64 v6; // rax
  const winrt::hresult_error *v7; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8[4]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v10[64]; // [rsp+68h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+B0h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+B8h] [rbp+10h]
  __int64 v13; // [rsp+C0h] [rbp+18h] BYREF
  const WCHAR *v14; // [rsp+C8h] [rbp+20h] BYREF

  v12 = a2;
  v11 = a1;
  v2 = a2;
  v8[0] = (__int64)L"WindowsUdk.System.UserProfile.AppListBackupExtension";
  v8[1] = 52LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, L"com.microsoft.windows.extension.applistbackup");
  try
  {
    v3 = *(void (__fastcall ****)(_QWORD, void *, __int64 **))winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                                                                (const struct winrt::param::hstring *)&v13,
                                                                (const struct winrt::param::hstring *)v10,
                                                                (__int64)v9);
    v11 = 0LL;
    if ( v3 )
    {
      (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics4>, &v11);
      v4 = v11;
    }
    else
    {
      v4 = 0LL;
    }
    if ( v13 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    if ( v4 )
    {
      v5 = (const WCHAR *)v2;
      if ( (unsigned __int64)v2[3] > 7 )
        v5 = (const WCHAR *)*v2;
      v14 = v5;
      CAppBackupListenerTelemetry::AttemptCompatInfoBackup<unsigned short const *>(&v14);
      if ( (unsigned __int64)v2[3] > 7 )
        v2 = (__int64 *)*v2;
      winrt::param::hstring::hstring((winrt::param::hstring *)v8, (const unsigned __int16 *const)v2);
      winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
        &v11,
        &v14,
        v8);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    }
    else
    {
      CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[85]>((__int64)v3);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  catch ( const winrt::hresult_error *v7 )
  {
    v6 = (__int64)v12;
    if ( (unsigned __int64)v12[3] > 7 )
      v6 = *v12;
    v13 = v6;
    LODWORD(v11) = *((_DWORD *)v7 + 3);
    CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
      (unsigned int)v11,
      &v11,
      &v13);
  }
}

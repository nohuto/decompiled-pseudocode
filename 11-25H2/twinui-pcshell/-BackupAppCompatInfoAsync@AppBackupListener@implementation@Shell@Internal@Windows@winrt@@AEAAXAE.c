/*
 * XREFs of ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1805EE9D8
 * Callers:
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x18029C608 (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x1805EF390 (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18005D0B4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802BD5A0 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802BD5A0.c)
 *     ??$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805EBD3C (--$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z @ 0x1805EC78C (--$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v6; // rax
  const WCHAR *v7[2]; // [rsp+20h] [rbp-98h] BYREF
  const winrt::hresult_error *v8; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v10[32]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v11[8]; // [rsp+78h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+C8h] [rbp+10h]
  __int64 *v14; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+20h] BYREF

  v13 = a2;
  v12 = a1;
  v2 = a2;
  v7[0] = L"WindowsUdk.System.UserProfile.AppListBackupExtension";
  v7[1] = (const WCHAR *)52;
  winrt::param::hstring::hstring((__int64)v9, (__int64 *)v7);
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, L"com.microsoft.windows.extension.applistbackup");
  try
  {
    v3 = *(void (__fastcall ****)(_QWORD, void *, __int64 **))winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                                                                (const struct winrt::param::hstring *)&v15,
                                                                (const struct winrt::param::hstring *)v10,
                                                                (__int64)v9);
    if ( v3 )
    {
      v14 = 0LL;
      (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics4>, &v14);
      v4 = v14;
      v12 = v14;
    }
    else
    {
      v12 = 0LL;
      v4 = 0LL;
    }
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
    if ( v4 )
    {
      v5 = (const WCHAR *)v2;
      if ( (unsigned __int64)v2[3] > 7 )
        v5 = (const WCHAR *)*v2;
      v7[0] = v5;
      CAppBackupListenerTelemetry::AttemptCompatInfoBackup<unsigned short const *>(v7);
      if ( (unsigned __int64)v2[3] > 7 )
        v2 = (__int64 *)*v2;
      winrt::param::hstring::hstring((winrt::param::hstring *)v11, (const unsigned __int16 *const)v2);
      winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
        &v12,
        v7,
        v11);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
    }
    else
    {
      CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[85]>((__int64)v3);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  catch ( const winrt::hresult_error *v8 )
  {
    v6 = v13;
    if ( (unsigned __int64)v13[3] > 7 )
      v6 = (__int64 *)*v13;
    v14 = v6;
    LODWORD(v12) = *((_DWORD *)v8 + 3);
    CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
      (unsigned int)v12,
      &v12,
      (__int64 *)&v14);
  }
}

/*
 * XREFs of ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180399060
 * Callers:
 *     _lambda_668917084cb4c0da526c2ffad1d9f84c_::operator() @ 0x180398914 (_lambda_668917084cb4c0da526c2ffad1d9f84c_--operator().c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1803995C0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801C80BC (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ?CortanaStoreApp_AppNotFoundWithExpectedExtension@CortanaProactiveTelemetry@@SAXXZ @ 0x180398E60 (-CortanaStoreApp_AppNotFoundWithExpectedExtension@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ @ 0x180399580 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
CortanaExperienceHelpers::Testing *__fastcall CortanaExperienceHelpers::GetStoreCortanaAumId(
        CortanaExperienceHelpers::Testing *a1)
{
  volatile signed __int32 **v2; // rax
  char v3; // di
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rcx
  char v6; // di
  _BYTE v8[48]; // [rsp+28h] [rbp-30h] BYREF
  CortanaExperienceHelpers::Testing *v9; // [rsp+80h] [rbp+28h] BYREF
  volatile signed __int32 *v10; // [rsp+88h] [rbp+30h] BYREF
  __int64 *v11; // [rsp+90h] [rbp+38h] BYREF
  volatile signed __int32 *v12; // [rsp+98h] [rbp+40h] BYREF

  v9 = a1;
  if ( CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(a1) )
  {
    winrt::hstring::hstring((winrt::hstring *)&v12, L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m!App");
    v2 = &v12;
    v3 = 9;
    v4 = v12;
  }
  else
  {
    LODWORD(v9) = 1;
    winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"com.microsoft.windows.app.cortana");
    winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
      (const struct winrt::param::hstring *)&v11,
      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v8,
      (__int64)&v9);
    if ( v11 )
    {
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
        &v11,
        &v10);
      v4 = v10;
    }
    else
    {
      CortanaProactiveTelemetry::CortanaStoreApp_AppNotFoundWithExpectedExtension(v5);
      v4 = 0LL;
      v10 = 0LL;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    v2 = &v10;
    v3 = 50;
  }
  *v2 = 0LL;
  *(_QWORD *)a1 = v4;
  v6 = v3 | 4;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  if ( (v6 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  return a1;
}

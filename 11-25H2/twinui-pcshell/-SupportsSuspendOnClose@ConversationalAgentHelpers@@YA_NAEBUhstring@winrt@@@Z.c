/*
 * XREFs of ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x1801DB860
 * Callers:
 *     ?SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z @ 0x180399C60 (-SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AC6D0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?FindAll@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x1801DBA64 (-FindAll@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtension.c)
 *     ??$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@Z @ 0x180398430 (--$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x1803987A4 (--D-$fast_iterator@U-$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall ConversationalAgentHelpers::SupportsSuspendOnClose(
        ConversationalAgentHelpers *this,
        const struct winrt::hstring *a2)
{
  int v3; // edi
  int NetworkConnectivityLevel; // esi
  __int64 *v5; // rax
  char v6; // bl
  volatile signed __int32 *v8[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+38h] [rbp-38h]
  _QWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v12; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v13[4]; // [rsp+58h] [rbp-18h] BYREF
  const wchar_t *v14; // [rsp+68h] [rbp-8h]
  int v15; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 *v17; // [rsp+B8h] [rbp+48h] BYREF

  v15 = 1;
  if ( aComMicrosoftWi_3[67] )
    abort();
  v13[0] = 1;
  v13[1] = 67;
  v14 = L"com.microsoft.windows.app.conversationalAgent.supportSuspendOnClose";
  v12 = v13;
  v11[0] = &v12;
  v11[1] = &v15;
  v8[1] = (volatile signed __int32 *)&qword_18089B708;
  _InterlockedIncrement64(&qword_18089B708);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::FindAll(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      &v16,
      &v12,
      &v15);
    _InterlockedDecrement64(&qword_18089B708);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B708);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6efd2761bda3320a8aa70aa0ac08757d_ &>(
      this,
      &v16,
      v11);
  }
  v9 = &v16;
  v3 = 0;
  v10 = 0;
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v16);
  while ( v3 != NetworkConnectivityLevel )
  {
    winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>>::operator*(
      &v9,
      &v17);
    v5 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
           &v17,
           v8);
    v6 = winrt::operator==(v5, (__int64 *)this);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    if ( v6 )
    {
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
      return 1;
    }
    v10 = ++v3;
  }
  if ( v16 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
  return 0;
}

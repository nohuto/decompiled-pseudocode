/*
 * XREFs of ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x18023C280
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801BFCB8 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ?GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA?AW4SearchAppIdentityToUse@123@XZ @ 0x1802BA698 (-GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA-AW4SearchAppIdentityToUse@123@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803BAD20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=8
volatile signed __int32 **__fastcall CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID(
        __int64 a1,
        volatile signed __int32 **a2)
{
  unsigned int v3; // r8d
  volatile signed __int32 **v4; // rax
  char v5; // di
  volatile signed __int32 *v6; // rsi
  volatile signed __int32 *v7; // rax
  int IdentityToUse; // eax
  const unsigned __int16 *v9; // rdx
  __int64 *v11; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-11h] BYREF
  volatile signed __int32 *v13; // [rsp+50h] [rbp-9h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-1h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp+7h] BYREF
  volatile signed __int32 *v16; // [rsp+68h] [rbp+Fh] BYREF
  volatile signed __int32 *v17; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v18[7]; // [rsp+78h] [rbp+1Fh] BYREF
  int pvData; // [rsp+D0h] [rbp+77h] BYREF
  volatile signed __int32 *v20; // [rsp+D8h] [rbp+7Fh] BYREF

  pcbData[1] = 0;
  LODWORD(v20) = 1;
  v18[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v12, L"com.microsoft.windows.app.search");
  winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
    (const struct winrt::param::hstring *)&v11,
    (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v18,
    (__int64)&v20);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v12);
  if ( v11 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
    {
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
        &v11,
        &v13);
      LODWORD(v20) = 1;
      v18[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v15, L"com.microsoft.windows.app.searchMI");
      winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
        (const struct winrt::param::hstring *)&v12,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v18,
        (__int64)&v20);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      if ( v12 )
      {
        v4 = (volatile signed __int32 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                                           &v12,
                                           &v17);
        v5 = 1;
      }
      else
      {
        v4 = (volatile signed __int32 **)winrt::hstring::hstring(
                                           (winrt::hstring *)&v16,
                                           (const struct winrt::hstring *)&v13,
                                           v3);
        v5 = 2;
      }
      v6 = *v4;
      *v4 = 0LL;
      v20 = v6;
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
      }
      if ( (v5 & 1) != 0 )
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
      pvData = 0;
      pcbData[0] = 4;
      if ( RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
             L"LaunchLowILNextTime",
             0x10u,
             0LL,
             &pvData,
             pcbData)
        || pvData != 1 )
      {
        v20 = 0LL;
        *a2 = v6;
      }
      else
      {
        v7 = v13;
        v13 = 0LL;
        *a2 = v7;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    }
    else
    {
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
        &v11,
        a2);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  else
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    IdentityToUse = Windows::Search::SearchAppIdentity::GetIdentityToUse();
    if ( IdentityToUse )
    {
      if ( IdentityToUse == 1 )
        v9 = L"Microsoft.Search_8wekyb3d8bbwe!CortanaUI";
      else
        v9 = L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI";
    }
    else
    {
      v9 = L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI";
    }
    winrt::hstring::hstring((winrt::hstring *)a2, v9);
  }
  return a2;
}

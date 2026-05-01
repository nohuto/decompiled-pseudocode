/*
 * XREFs of ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1803B90BC
 * Callers:
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803B9E2C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?IsWebSearchEnabled@?$consume_WindowsUdk_System_UserProfile_SearchSettings_ISearchPolicySettings@UISearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180338500 (-IsWebSearchEnabled@-$consume_WindowsUdk_System_UserProfile_SearchSettings_ISearchPolicySettings.c)
 *     ??$UndockedSearchExperienceManager_SkipInstallDefaultWebProviderApp@PEBGW4SkipInstallDefaultWebProviderAppReason@@@SearchAppExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAW4SkipInstallDefaultWebProviderAppReason@@@Z @ 0x1803A82D8 (--$UndockedSearchExperienceManager_SkipInstallDefaultWebProviderApp@PEBGW4SkipInstallDefaultWebP.c)
 *     ?CanUserInstallStoreApps@@YA_NXZ @ 0x1803B06F8 (-CanUserInstallStoreApps@@YA_NXZ.c)
 *     ?GetDefault@SearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@SA@XZ @ 0x1803B469C (-GetDefault@SearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@SA@XZ.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1803B59B4 (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall UndockedSearchAppExperienceManager::ShouldInstallDefaultWebSearchProvider(
        UndockedSearchAppExperienceManager *this)
{
  __int64 *Default; // rax
  char IsWebSearchEnabled; // bl
  __int64 v5; // [rsp+30h] [rbp+10h] BYREF
  const unsigned __int16 *v6; // [rsp+38h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 913) )
    return 0;
  if ( IsWebSearchProviderInstalledLatest() )
  {
    LODWORD(v5) = 5;
LABEL_5:
    v6 = winrt::hstring::c_str((UndockedSearchAppExperienceManager *)((char *)this + 848));
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_SkipInstallDefaultWebProviderApp<unsigned short const *,enum SkipInstallDefaultWebProviderAppReason>(&v6);
    return 0;
  }
  Default = winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings::GetDefault(&v5);
  IsWebSearchEnabled = winrt::impl::consume_WindowsUdk_System_UserProfile_SearchSettings_ISearchPolicySettings<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettings>::IsWebSearchEnabled(Default);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  if ( !IsWebSearchEnabled )
  {
    LODWORD(v5) = 3;
    goto LABEL_5;
  }
  if ( !CanUserInstallStoreApps() )
  {
    LODWORD(v5) = 4;
    goto LABEL_5;
  }
  return 1;
}

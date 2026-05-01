/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802A7974
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A78F4 (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805D2C40 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x1805D42D4 (-IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Manage.c)
 *     ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x18063F8C0 (-CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FC18 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FDF0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x180641074 (-IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ.c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806415E0 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18064AF90 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E5DC (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180142630 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 */

volatile signed __int32 *__fastcall winrt::operator+(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // r8
  const WCHAR *v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  v10[0] = a3;
  v4 = std::_WChar_traits<wchar_t>::length(a3);
  v6 = *v5;
  v10[1] = v4;
  if ( v6 )
  {
    v8 = *(const WCHAR **)(v6 + 16);
    v9 = *(unsigned int *)(v6 + 4);
  }
  else
  {
    v9 = 0LL;
    v8 = &pvData;
  }
  winrt::impl::concat_hstring(a1, (__int64)&v8, (__int64)v10);
  return a1;
}

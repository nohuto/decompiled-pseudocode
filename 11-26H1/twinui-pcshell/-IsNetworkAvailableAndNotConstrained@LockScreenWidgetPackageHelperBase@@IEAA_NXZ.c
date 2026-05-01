/*
 * XREFs of ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4684
 * Callers:
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x1805CE3B0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x1805CE4B0 (-AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1805CE4F0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?IsManagedByOrganization@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801E3D30 (-IsManagedByOrganization@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapI.c)
 *     ?GetApplication@?$consume_Windows_Internal_StateRepository_IApplicationExtension@UIApplicationExtension@StateRepository@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180204D50 (-GetApplication@-$consume_Windows_Internal_StateRepository_IApplicationExtension@UIApplicationEx.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180208578 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ @ 0x1805D2728 (-GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(
        LockScreenWidgetPackageHelperBase *this)
{
  char v1; // si
  char v2; // di
  bool v3; // bl
  int v4; // ebx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+8h]
  char v10; // [rsp+48h] [rbp+10h]
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    v1 = 0;
    v8 = 0;
    v2 = 1;
    v3 = 1;
    v10 = 1;
    winrt::Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile(&v13);
    if ( v13 )
    {
      if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v13) == 3 )
      {
        v1 = 1;
        v8 = 1;
        winrt::impl::consume_Windows_Internal_StateRepository_IApplicationExtension<winrt::Windows::Internal::StateRepository::IApplicationExtension>::GetApplication(
          &v13,
          &v12);
        if ( v12 )
        {
          v4 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v12);
          v3 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::IsManagedByOrganization(&v12)
            || winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(&v12)
            || (unsigned int)(v4 - 2) <= 1;
          v10 = v3;
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
      }
      else
      {
        v1 = 0;
        v8 = 0;
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1E9,
      (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
      v5);
    v2 = 1;
    v1 = v8;
    v3 = v10;
  }
  if ( !v1 || v3 )
    return 0;
  return v2;
}

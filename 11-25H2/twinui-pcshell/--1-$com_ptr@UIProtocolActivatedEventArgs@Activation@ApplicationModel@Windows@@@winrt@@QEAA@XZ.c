/*
 * XREFs of ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028F234
 * Callers:
 *     _GetPinnablePidl_::_1_::dtor$0 @ 0x1806B2366 (_GetPinnablePidl_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$6 @ 0x1806B23B7 (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$6.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$0 @ 0x1806B23ED (_GetUnpackagedAppPinnableItem_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::GamingPostureController_::_1_::dtor$3 @ 0x1806BAA98 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BAA98.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806BB574 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB574.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806BB5A9 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB5A9.c)
 *     _InstallWebSearchPackage_::_1_::dtor$13 @ 0x1806C0195 (_InstallWebSearchPackage_--_1_--dtor$13.c)
 *     _InstallWebSearchPackage_::_1_::dtor$16 @ 0x1806C01A7 (_InstallWebSearchPackage_--_1_--dtor$16.c)
 *     _InstallWebSearchPackage_::_1_::dtor$17 @ 0x1806C01B9 (_InstallWebSearchPackage_--_1_--dtor$17.c)
 *     _InstallWebSearchPackage_::_1_::dtor$18 @ 0x1806C01CB (_InstallWebSearchPackage_--_1_--dtor$18.c)
 *     _VirtualDesktopController::IsRemoteDesktopDisconnecting_::_1_::dtor$4 @ 0x1806C7896 (_VirtualDesktopController--IsRemoteDesktopDisconnecting_--_1_--dtor$4.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$6 @ 0x1806C9210 (_GetPidlsFromTaskbarLayout_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor$4 @ 0x1806CC05E (_winrt--Windows--Internal--Shell--implementation--LaunchRemoteDesktopUriHandler--Ex_ea_1806CC05E.c)
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$7 @ 0x1806CEB72 (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$7.c)
 *     _SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId_::_1_::dtor$0 @ 0x1806D2ABF (_SnapLauncher--TryLaunchWithRegisteredAumidAndSnapId_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$8 @ 0x1806D5961 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_1806D5961.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$5 @ 0x1806D5D0B (_GetPidlsFromTaskbarLayout_--_1_--dtor$5.c)
 *     _winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath_::_1_::dtor$1 @ 0x1806D61CE (_winrt--Windows--Internal--Shell--implementation--Utils--GetWallpaperImagePath_--_1_--dtor$1.c)
 *     __anonymous_namespace_::TryGetPackagedAppTileLogo_::_1_::dtor$0 @ 0x1806D6828 (__anonymous_namespace_--TryGetPackagedAppTileLogo_--_1_--dtor$0.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$5 @ 0x1806D68CA (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$5.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 */

__int64 __fastcall winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(a1);
  return result;
}

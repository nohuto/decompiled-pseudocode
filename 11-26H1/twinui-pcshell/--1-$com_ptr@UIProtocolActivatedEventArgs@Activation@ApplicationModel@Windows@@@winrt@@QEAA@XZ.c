/*
 * XREFs of ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028CDD4
 * Callers:
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$5 @ 0x1806DCF29 (_GetPidlsFromTaskbarLayout_--_1_--dtor$5.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$6 @ 0x1806DCF7A (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$6.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$0 @ 0x1806DCF9E (_GetUnpackagedAppPinnableItem_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::GamingPostureController_::_1_::dtor$3 @ 0x1806E1ADC (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1ADC.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806E27F1 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E27F1.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806E2826 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2826.c)
 *     _InstallWebSearchPackage_::_1_::dtor$13 @ 0x1806E80F7 (_InstallWebSearchPackage_--_1_--dtor$13.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$6 @ 0x1806E8109 (_GetPidlsFromTaskbarLayout_--_1_--dtor$6.c)
 *     _InstallWebSearchPackage_::_1_::dtor$17 @ 0x1806E811B (_InstallWebSearchPackage_--_1_--dtor$17.c)
 *     _InstallWebSearchPackage_::_1_::dtor$18 @ 0x1806E812D (_InstallWebSearchPackage_--_1_--dtor$18.c)
 *     _VirtualDesktopController::IsRemoteDesktopDisconnecting_::_1_::dtor$4 @ 0x1806EF814 (_VirtualDesktopController--IsRemoteDesktopDisconnecting_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor$4 @ 0x1806F4608 (_winrt--Windows--Internal--Shell--implementation--LaunchRemoteDesktopUriHandler--Ex_ea_1806F4608.c)
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$7 @ 0x1806F72E5 (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$7.c)
 *     _SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId_::_1_::dtor$0 @ 0x1806FA994 (_SnapLauncher--TryLaunchWithRegisteredAumidAndSnapId_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$8 @ 0x1806FDBC9 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_1806FDBC9.c)
 *     __lambda_0b18bae158eb7b112561ba3eda31e137_::operator()_::_1_::dtor$0 @ 0x1806FE032 (__lambda_0b18bae158eb7b112561ba3eda31e137_--operator()_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$13 @ 0x1806FE1C0 (_CopilotHotkeyManager--InvokeCopilotOrCustomOption_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath_::_1_::dtor$1 @ 0x1806FE483 (_winrt--Windows--Internal--Shell--implementation--Utils--GetWallpaperImagePath_--_1_--dtor$1.c)
 *     __anonymous_namespace_::TryGetPackagedAppTileLogo_::_1_::dtor$0 @ 0x1806FEB42 (__anonymous_namespace_--TryGetPackagedAppTileLogo_--_1_--dtor$0.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$5 @ 0x1806FEBBB (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$5.c)
 *     _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$22 @ 0x1807028F7 (_CopilotHotkeyManager--InvokeCopilotOrCustomOption_--_1_--dtor$22.c)
 *     _CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180702A5B (_CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1_::_1_::dtor$5 @ 0x18070301E (_CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1_--_1_--dtor$5.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 */

__int64 __fastcall winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(a1, a2);
  return result;
}

/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802E0404
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x18031D784 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$25 @ 0x1806A973A (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--catch$25.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$89 @ 0x1806ABF87 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$89.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$46 @ 0x1806B3D75 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$46.c)
 *     _wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch$0 @ 0x1806B76E9 (_wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x1806B9BC7 (_winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--Initialize_ea_1806B9BC7.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$42 @ 0x1806BB786 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB786.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$43 @ 0x1806BB7E4 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB7E4.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$44 @ 0x1806BB83E (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB83E.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch$5 @ 0x1806BB9F9 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB9F9.c)
 *     _CStartExperienceManager::SetDockedStartController_::_1_::catch$17 @ 0x1806BF35B (_CStartExperienceManager--SetDockedStartController_--_1_--catch$17.c)
 *     _CStartExperienceManager::SetDockedStartController_::_1_::catch$18 @ 0x1806BF3B1 (_CStartExperienceManager--SetDockedStartController_--_1_--catch$18.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$51 @ 0x1806C23E1 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$51.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$6 @ 0x1806C3189 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$6.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$20 @ 0x1806CD365 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806CD365.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$16 @ 0x1806D3E81 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--NotifyDesktopReady_--_1_--ca.c)
 *     __lambda_bef5e417c8b7d926babf502a16e6c1c1_::operator()_::_1_::catch$3 @ 0x1806D5E05 (__lambda_bef5e417c8b7d926babf502a16e6c1c1_--operator()_--_1_--catch$3.c)
 *     __lambda_e444c801a41511fb3819c6a1e051bb24_::operator()_::_1_::catch$3 @ 0x1806D5E76 (__lambda_e444c801a41511fb3819c6a1e051bb24_--operator()_--_1_--catch$3.c)
 *     __lambda_e9273f30aaf408505b3f0162e09ecc61_::operator()_::_1_::catch$4 @ 0x1806D5EF9 (__lambda_e9273f30aaf408505b3f0162e09ecc61_--operator()_--_1_--catch$4.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$4 @ 0x1806DD4D4 (_PersistEnterprisePinDataToRegistry_--_1_--catch$4.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$26 @ 0x1806DD581 (_ShouldAddEnterprisePinToOutput_--_1_--catch$26.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-28h]
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = *(unsigned int *)g_pfnResultFromCaughtExceptionInternal(v3, 0LL, 0LL, &v5), (int)result >= 0) )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xDAF, (int)"wil", (const char *)0x8007023ELL, v2);
  }
  return result;
}

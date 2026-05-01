/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180319DC4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$89 @ 0x1806D2D05 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$89.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$22 @ 0x1806D459A (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--catch$22.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$46 @ 0x1806DAE3F (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$46.c)
 *     _wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch$0 @ 0x1806DEAB6 (_wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x1806E0C83 (_winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--Initialize_ea_1806E0C83.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$42 @ 0x1806E2A03 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2A03.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$43 @ 0x1806E2A61 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2A61.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$44 @ 0x1806E2ABB (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2ABB.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch$16 @ 0x1806E2C56 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2C56.c)
 *     _CStartExperienceManager::SetDockedStartController_::_1_::catch$17 @ 0x1806E723A (_CStartExperienceManager--SetDockedStartController_--_1_--catch$17.c)
 *     _CStartExperienceManager::SetDockedStartController_::_1_::catch$18 @ 0x1806E7290 (_CStartExperienceManager--SetDockedStartController_--_1_--catch$18.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$51 @ 0x1806EA2EC (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$51.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$6 @ 0x1806EB0B2 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$6.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$20 @ 0x1806F5958 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806F5958.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$17 @ 0x1806FBEA3 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--NotifyDesktopReady_--_1_--ca.c)
 *     __lambda_02d18896a6f04e84a63129cc1fd81310_::operator()_::_1_::catch$4 @ 0x1806FDFBC (__lambda_02d18896a6f04e84a63129cc1fd81310_--operator()_--_1_--catch$4.c)
 *     __lambda_037aa076caca4eb578368a6543edcedb_::operator()_::_1_::catch$3 @ 0x1806FE044 (__lambda_037aa076caca4eb578368a6543edcedb_--operator()_--_1_--catch$3.c)
 *     __lambda_0b18bae158eb7b112561ba3eda31e137_::operator()_::_1_::catch$3 @ 0x1806FE0BB (__lambda_0b18bae158eb7b112561ba3eda31e137_--operator()_--_1_--catch$3.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$4 @ 0x18070610D (_PersistEnterprisePinDataToRegistry_--_1_--catch$4.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$26 @ 0x1807061DE (_ShouldAddEnterprisePinToOutput_--_1_--catch$26.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xDD9, (int)"wil", (const char *)0x8007023ELL, v2);
  }
  return result;
}

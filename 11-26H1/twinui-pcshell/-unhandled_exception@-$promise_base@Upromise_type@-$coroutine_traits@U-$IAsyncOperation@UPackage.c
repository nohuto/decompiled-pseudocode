/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333580
 * Callers:
 *     _LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806E1C03 (_LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_--_1_--c.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$15 @ 0x1806E1D7B (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1D7B.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$150 @ 0x1806E265B (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E265B.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::catch$32 @ 0x1806E2B03 (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--catch$3.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::catch$20 @ 0x1806E2BC3 (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_--_1_--.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::catch$52 @ 0x1806E354E (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E354E.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::catch$58 @ 0x1806E4B28 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--catch$58.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1_::_1_::catch$2 @ 0x1806FA95B (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance_ea_1806FA95B.c)
 *     _LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1_::_1_::catch$72 @ 0x1806FB68B (_LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1_--_1_--catch$72.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$52 @ 0x1806FBB6B (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--catch$52.c)
 *     _LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1_::_1_::catch$15 @ 0x1806FBE0F (_LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_Resume_ea_1806FBE0F.c)
 *     _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::catch$5 @ 0x180702D2E (_CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1_--_1_--catch$5.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x1801ABB7C (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x18021FC60 (--1exception_ptr@std@@QEAA@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18028D81C (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802C34B0 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x180329384 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180330E80 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::unhandled_exception(
        __int64 a1)
{
  _QWORD *v2; // rax
  std::exception_ptr *v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (RTL_SRWLOCK *)(a1 + 72));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=((void *)(a1 + 56), v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)(a1 + 56));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    *(_DWORD *)(a1 + 96) = 2;
  }
  catch ( ... )
  {
    *(_DWORD *)(a1 + 96) = 3;
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}

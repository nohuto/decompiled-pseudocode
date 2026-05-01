/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333DA0
 * Callers:
 *     _LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806BAC43 (_LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_--_1_--c.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1_::_1_::catch$13 @ 0x1806BAD63 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BAD63.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$15 @ 0x1806BB0A2 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB0A2.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$111 @ 0x1806BB46D (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB46D.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::catch$32 @ 0x1806BB886 (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--catch$3.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::catch$52 @ 0x1806BC285 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BC285.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::catch$43 @ 0x1806BD4FF (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--catch$43.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1_::_1_::catch$2 @ 0x1806D2A86 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance_ea_1806D2A86.c)
 *     _LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1_::_1_::catch$72 @ 0x1806D3787 (_LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1_--_1_--catch$72.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$52 @ 0x1806D3BD5 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--catch$52.c)
 *     _LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1_::_1_::catch$15 @ 0x1806D3E0F (_LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_Resume_ea_1806D3E0F.c)
 *     _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::catch$12 @ 0x1806DA1FC (_CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1_--_1_--catch$12.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x1801B33E4 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x18022EF04 (--1exception_ptr@std@@QEAA@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180295DBC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802CBEC8 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18032BF8C (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180331E10 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::unhandled_exception(
        __int64 a1)
{
  _QWORD *v2; // rax
  std::exception_ptr *v3; // rcx
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (RTL_SRWLOCK *)(a1 + 72));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=((void *)(a1 + 56), v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)(a1 + 56));
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

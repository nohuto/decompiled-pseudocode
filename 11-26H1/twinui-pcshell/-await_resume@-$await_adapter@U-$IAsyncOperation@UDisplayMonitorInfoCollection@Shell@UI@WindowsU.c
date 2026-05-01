/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180339EFC
 * Callers:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180237D20 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180239C50 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1802536A0 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x18027CF30 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180388050 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1803EA4E0 (winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateMonitorInfoColl.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053A1A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805D2C40 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_resume(
        __int64 a1,
        winrt *a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void **); // rbx
  struct IUnknown *v8; // rdx
  void **v9; // rax
  int v10; // eax
  int v12; // [rsp+28h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  winrt *v15; // [rsp+58h] [rbp+10h]

  v15 = a2;
  v12 = 0;
  v13 = 0LL;
  winrt::check_hresult(&v14, *(_DWORD *)(a1 + 20), (__int64)&v12);
  winrt::impl::check_status_canceled((winrt::impl *)*(unsigned int *)(a1 + 16), v4);
  v5 = *(__int64 **)(a1 + 8);
  *(_QWORD *)a2 = 0LL;
  v6 = *v5;
  v12 = 0;
  v13 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 64LL);
  v9 = winrt::put_abi(a2, v8);
  v10 = v7(v6, v9);
  winrt::check_hresult(&v14, v10, (__int64)&v12);
  return a2;
}

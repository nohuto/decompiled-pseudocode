/*
 * XREFs of ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180237FD4
 * Callers:
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180366BF0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180366CF0 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180366D90 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800678F8 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801D06A4 (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x18023821C (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180238260 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x1802A2C48 (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97caca280bc1831b2fa8b4bd22a72139_____lambda_97caca280bc1831b2fa8b4bd22a72139___ @ 0x180363308 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_97caca280bc18.c)
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803679A4 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ @ 0x180369C54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CActionCenterExperienceManager::OnVisibilityChanged(ExperienceManagerUtils **this)
{
  unsigned __int8 v2; // r14
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 *v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // r15d
  unsigned int v11; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rdx
  HWND v13; // rax
  HMONITOR v14; // rax
  const char *v15; // r9
  ExperienceManagerUtils **v16; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v17[3]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  ExperienceManagerUtils **v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 42) == 2 )
  {
    v2 = 1;
    v3 = CActionCenterExperienceManager::SetWindowRegion((CActionCenterExperienceManager *)this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x51D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  else
  {
    v2 = 0;
  }
  v4 = CActionCenterExperienceManager::RaisePropertyChangedEvent((CActionCenterExperienceManager *)this, L"Ready", v2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x521,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v20 = 0LL;
  v19 = this;
  v5 = wil::com_weak_query<CActionCenterExperienceManager *>(&v21, &v19);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    &v20,
    v5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  v16 = this;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)v17,
    &v20);
  BYTE8(v17[0]) = v2;
  v6 = *((_DWORD *)this + 166);
  v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97caca280bc1831b2fa8b4bd22a72139_____lambda_97caca280bc1831b2fa8b4bd22a72139___(
                    &v19,
                    &v16);
  v8 = *v7;
  *v7 = 0LL;
  v9 = (volatile signed __int32 *)v19;
  if ( v19 )
  {
    v19 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v17);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x53D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  try
  {
    winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current(&v21);
    LODWORD(v16) = 0;
    v17[0] = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 72LL))(v21, 0LL, v2 ^ 1u);
    winrt::check_hresult(&v19, v11, &v16);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_41356296>::GetImpl'::`2'::impl) )
    {
      v13 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[19], v12);
      v14 = MonitorFromWindow(v13, 1u);
      LODWORD(v19) = v2 ^ 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        this + 100,
        v14,
        &v19);
    }
    else
    {
      LODWORD(v19) = v2 ^ 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
        this + 100,
        &v19);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x551,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      v15);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
}

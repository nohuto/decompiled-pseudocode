/*
 * XREFs of ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804E1340
 * Callers:
 *     ??0?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@QEAA@XZ @ 0x1804E110C (--0-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1801522D0 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18021E19C (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180293F84 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$GetActivationFactory@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804E021C (--$GetActivationFactory@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@W.c)
 *     ??0?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@Unon_agile@3@@winrt@@QEAA@XZ @ 0x1804E1010 (--0-$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePosit.c)
 *     ??0GamingFallbackWindow@@QEAA@PEAVGamingPosturePositioner@@@Z @ 0x1804E11CC (--0GamingFallbackWindow@@QEAA@PEAVGamingPosturePositioner@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23
GamingPosturePositioner *__fastcall GamingPosturePositioner::GamingPosturePositioner(
        GamingPosturePositioner *this,
        __int64 a2)
{
  __int64 *v3; // r14
  GamingFallbackWindow *v4; // rbx
  volatile int *v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // r8d
  const WCHAR *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  GamingFallbackWindow *v16; // [rsp+48h] [rbp+10h] BYREF

  winrt::implements<GamingPosturePositioner,winrt::immersive_shell_component,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,winrt::non_agile>::implements<GamingPosturePositioner,winrt::immersive_shell_component,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,winrt::non_agile>(
    this,
    a2);
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IGamingPosturePositioner,void>'};
  *((_QWORD *)this + 1) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IBasicPositioner,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IShellPositionerViewHandoff,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IImmersiveMonitorNotification,void>'};
  *((_QWORD *)this + 4) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IPositionerApplicationClosePolicy,void>'};
  *((_QWORD *)this + 5) = &wil::details::module_count_wrapper<GamingPosturePositioner>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 6) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  *((_QWORD *)this + 7) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IWindowManagementShowMoveSizeEvents,void>'};
  *((_QWORD *)this + 8) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 9) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 10) = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 12) = &GamingPosturePositioner::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 0;
  *((_WORD *)this + 308) = 0;
  *((_BYTE *)this + 618) = 0;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  v3 = (__int64 *)((char *)this + 696);
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (RTL_SRWLOCK *)this + 8,
    (__int128 *)&GUID_e0e78cc4_82f7_4d70_bd5c_217e39804a26);
  v4 = (GamingFallbackWindow *)operator new(0x28uLL);
  v16 = v4;
  GamingFallbackWindow::GamingFallbackWindow(v4, this);
  *(_QWORD *)v4 = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  *((_QWORD *)v4 + 1) = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  v16 = v4;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 90, (__int64 *)&v16);
  if ( v16 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v16);
  v6 = *v3;
  *v3 = 0LL;
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
      v6,
      v5);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((_QWORD *)this + 87);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x131,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v7,
      v14);
  v10 = wil::GetActivationFactory<Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>(
          (const WCHAR *)&v16,
          v8,
          v9);
  v11 = *(_QWORD *)v10;
  *(_QWORD *)v10 = 0LL;
  v12 = *((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v16);
  return this;
}

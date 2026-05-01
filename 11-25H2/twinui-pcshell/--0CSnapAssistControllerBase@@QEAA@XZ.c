/*
 * XREFs of ??0CSnapAssistControllerBase@@QEAA@XZ @ 0x180206BFC
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCSnapAssistControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180206B54 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCSnapAssistControllerBase@@@WRL@Micro.c)
 * Callees:
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18007FFF4 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAppTransitionMana.c)
 *     ??0?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x180206D30 (--0-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=12
CSnapAssistControllerBase *__fastcall CSnapAssistControllerBase::CSnapAssistControllerBase(
        CSnapAssistControllerBase *this,
        __int64 a2)
{
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>>(
    (__int64)this,
    a2);
  *(_QWORD *)this = &CSnapAssistControllerBase::`vftable'{for `ISnapAssistController'};
  *((_QWORD *)this + 1) = &CSnapAssistControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 2) = &CSnapAssistControllerBase::`vftable'{for `ISnapAssistCallback'};
  *((_QWORD *)this + 3) = &CSnapAssistControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 4) = &CSnapAssistControllerBase::`vftable'{for `Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2'};
  *((_QWORD *)this + 5) = &CSnapAssistControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 19);
  InitializeSRWLock((PSRWLOCK)this + 20);
  *((_QWORD *)this + 21) = 0LL;
  std::deque<tagRECT>::deque<tagRECT>((char *)this + 176);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 1;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  return this;
}

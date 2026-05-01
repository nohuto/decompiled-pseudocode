/*
 * XREFs of ??0AccessibilityExperienceManager@@QEAA@XZ @ 0x18047AF20
 * Callers:
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x1801755EC (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18047ACF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_18047ACF0.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x18047AEE0 (--0-$test_watcher@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18047B280 (--1-$test_watcher@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 */

AccessibilityExperienceManager *__fastcall AccessibilityExperienceManager::AccessibilityExperienceManager(
        AccessibilityExperienceManager *this)
{
  __int64 v2; // rax
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 1) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 6) = &AccessibilityExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &AccessibilityExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &AccessibilityExperienceManager::`vftable'{for `IImmersiveLayoutChanges'};
  *((_QWORD *)this + 17) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 18) = &AccessibilityExperienceManager::`vftable'{for `Windows::UI::Internal::Input::IEyeControlManager'};
  *((_QWORD *)this + 19) = &AccessibilityExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 20) = &AccessibilityExperienceManager::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 21) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 8, 0, 0);
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 392) = 0;
  *((_DWORD *)this + 99) = 100;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  tip2::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>((struct wil::details::IFailureCallback *)v4);
  v2 = v5;
  *((_QWORD *)this + 52) = v5;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 280));
  tip2::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>(v4);
  *((_OWORD *)this + 27) = 0LL;
  *((_OWORD *)this + 28) = 0LL;
  *((_WORD *)this + 232) = 0;
  *(_QWORD *)((char *)this + 468) = 0x8000000LL;
  *((_QWORD *)this + 30) = 0LL;
  return this;
}

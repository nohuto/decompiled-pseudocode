/*
 * XREFs of ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x1800F9800
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800F974C (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1800B9D10 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800FAB4C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802AB714 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@WRL@Microsoft@@QEAA@XZ @ 0x1802BF130 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualTouchpadExperienceManager@Exp.c)
 */

// Hidden C++ exception states: #wind=14
CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager(
        CVirtualTouchpadExperienceManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>();
  *(_QWORD *)this = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 1) = &CVirtualTouchpadExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 3) = &CVirtualTouchpadExperienceManager::`vftable'{for `IScaleChangeSink'};
  *((_QWORD *)this + 4) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 7) = &CVirtualTouchpadExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience((__int64)this + 64, (__int64)this + 56, 1);
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 317;
  *((_DWORD *)this + 71) = 420;
  *((_DWORD *)this + 72) = 420;
  *((_DWORD *)this + 73) = 360;
  *((_DWORD *)this + 74) = 4;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *((_WORD *)this + 158) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((CVirtualTouchpadExperienceManager *)((char *)this + 376));
  *((_QWORD *)this + 47) = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  *((_BYTE *)this + 704) = 0;
  *((_DWORD *)this + 177) = 15;
  *(GUID *)((char *)this + 712) = GUID_NULL;
  *((_QWORD *)this + 91) = 0LL;
  *((_BYTE *)this + 736) = 0;
  *((_DWORD *)this + 185) = 17;
  *(GUID *)((char *)this + 744) = GUID_NULL;
  *((_QWORD *)this + 95) = 0LL;
  *((_DWORD *)this + 192) = 4;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_BYTE *)this + 816) = 0;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((CVirtualTouchpadExperienceManager *)((char *)this + 864));
  return this;
}

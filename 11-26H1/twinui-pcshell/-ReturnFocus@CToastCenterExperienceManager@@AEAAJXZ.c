/*
 * XREFs of ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001D97C
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003E5A0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C32C (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C494 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartActivity@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001DF0C (-StartActivity@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D7C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040E74 (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068D48 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C4D70 (--1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18037D9AC (-ReturnedToActiveApp@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?ReturnedToLock@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18037D9E8 (-ReturnedToLock@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v2; // rdx
  HWND v3; // rdi
  unsigned int v4; // esi
  ExperienceManagerUtils *v5; // rdi
  __int64 (__fastcall *v6)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-E0h]
  __int64 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  void **v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[272]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[8]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v17[48]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v14,
    (__int64)"EM_ReturnFocusActivity");
  v14 = &ToastCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  ToastCenterTelemetry::EM_ReturnFocusActivity::StartActivity((ToastCenterTelemetry::EM_ReturnFocusActivity *)&v14);
  v3 = ExperienceManagerUtils::WindowFromViewWrapper(this[16], v2);
  v4 = 0;
  if ( this[16] && this[81] && GetForegroundWindow() == v3 )
  {
    if ( *((_BYTE *)this + 400) )
    {
      v13[0] = 0LL;
      v5 = this[76];
      v6 = *(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
      v7 = v6(v5, &IID_ILockScreenViewManager, &GUID_053bf212_5a22_4a75_87eb_dfca4ea90e02, v13);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1000LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
LABEL_13:
        ToastCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((ToastCenterTelemetry::EM_ReturnFocusActivity *)&v14);
        return v8;
      }
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 80LL))(v13[0]);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1001LL;
        goto LABEL_9;
      }
      ToastCenterTelemetry::EM_ReturnFocusActivity::ReturnedToLock((ToastCenterTelemetry::EM_ReturnFocusActivity *)&v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[81] + 24LL))(
              this[81],
              0xFFFFLL);
      v8 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3EE,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v10,
          v12);
        goto LABEL_13;
      }
      ToastCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((ToastCenterTelemetry::EM_ReturnFocusActivity *)&v14);
    }
  }
  else
  {
    v4 = -2147418113;
  }
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v14, v4);
  v14 = &ToastCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v14);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v17);
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v16);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v15);
  return 0LL;
}

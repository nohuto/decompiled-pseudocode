/*
 * XREFs of ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801E7318
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003E5A0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C32C (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C494 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D7C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040E74 (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068D48 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?StartActivity@EM_ShowActivity@ToastCenterTelemetry@@QEAAX_N@Z @ 0x1801E7484 (-StartActivity@EM_ShowActivity@ToastCenterTelemetry@@QEAAX_N@Z.c)
 *     ??1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C479C (--1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?NoOp_AlreadyVisible@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18037C9F0 (-NoOp_AlreadyVisible@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037DB1C (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowingInHolographic@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18037DCBC (-ShowingInHolographic@EM_ShowActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180681E1C (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::Show(CToastCenterExperienceManager *this, unsigned __int8 a2)
{
  int v2; // edi
  char *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v10[68]; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v11; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v12[48]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v2 = a2;
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v9,
    (__int64)"EM_ShowActivity");
  *(_QWORD *)v9 = &ToastCenterTelemetry::EM_ShowActivity::`vftable';
  ToastCenterTelemetry::EM_ShowActivity::StartActivity((ToastCenterTelemetry::EM_ShowActivity *)v9, v2);
  v4 = (char *)this + 104;
  if ( *((_DWORD *)this + 36) == 2 )
  {
    if ( (_BYTE)v2 )
      CSingleViewShellExperience::BringToForeground((CToastCenterExperienceManager *)((char *)this + 104));
    else
      ToastCenterTelemetry::EM_ShowActivity::NoOp_AlreadyVisible((ToastCenterTelemetry::EM_ShowActivity *)v9);
    goto LABEL_11;
  }
  if ( *((_QWORD *)this + 92) )
  {
    if ( *((_DWORD *)this + 186) == 1 )
    {
      ToastCenterTelemetry::EM_ShowActivity::ShowingInHolographic((ToastCenterTelemetry::EM_ShowActivity *)v9);
      v5 = CToastCenterExperienceManager::ShowInHolographic(this);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3AC,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
LABEL_12:
        ToastCenterTelemetry::EM_ShowActivity::~EM_ShowActivity((ToastCenterTelemetry::EM_ShowActivity *)v9);
        return v6;
      }
    }
  }
  v7 = CSingleViewShellExperience::Show(
         (__int64)v4,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v2 ^ 1u));
  v6 = v7;
  if ( v7 >= 0 )
  {
LABEL_11:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9, 0);
    v6 = 0;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B3,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  *(_QWORD *)v9 = &ToastCenterTelemetry::EM_ShowActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v12);
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v11);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v10);
  return v6;
}

/*
 * XREFs of ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001A1A8
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003E5A0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     _lambda_c4a594d693bc8f986314a47dadfe11ef_::operator() @ 0x18037BCB4 (_lambda_c4a594d693bc8f986314a47dadfe11ef_--operator().c)
 *     ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18037CFD0 (-OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnToastShowPendingTimerTick@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037D208 (-OnToastShowPendingTimerTick@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001B9D4 (-StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C32C (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001F810 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D7C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040E74 (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068D48 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18021D06C (--1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?NoOp_AlreadyHidden@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802C3768 (-NoOp_AlreadyHidden@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037C490 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?HidingInHolographic@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18037C594 (-HidingInHolographic@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::Hide(CToastCenterExperienceManager *this)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+28h] [rbp-D8h] BYREF
  char v9; // [rsp+2Ch] [rbp-D4h]
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  const char *v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  char v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[152]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v16; // [rsp+110h] [rbp+10h]
  int v17; // [rsp+120h] [rbp+20h]
  __int64 v18; // [rsp+128h] [rbp+28h]
  int *v19; // [rsp+130h] [rbp+30h]
  __int64 v20; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v21[3]; // [rsp+140h] [rbp+40h] BYREF
  int v22; // [rsp+158h] [rbp+58h]
  int *v23; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v8 = 0;
  v9 = 0;
  v13 = 0;
  v10 = 0;
  v11 = "EM_HideActivity";
  v12 = 0LL;
  v14 = 0;
  v16 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v17 = 1;
  v18 = 0LL;
  v19 = &v8;
  v20 = 0LL;
  v21[0] = 0LL;
  v21[1] = v7;
  v21[2] = 0LL;
  v22 = 0;
  v23 = &v10;
  *(_QWORD *)v7 = &ToastCenterTelemetry::EM_HideActivity::`vftable';
  ToastCenterTelemetry::EM_HideActivity::StartActivity((ToastCenterTelemetry::EM_HideActivity *)v7);
  *((_OWORD *)this + 36) = 0LL;
  v2 = (char *)this + 104;
  if ( *((_DWORD *)this + 36) == 2 )
  {
    if ( *((_QWORD *)this + 92) )
    {
      ToastCenterTelemetry::EM_HideActivity::HidingInHolographic((ToastCenterTelemetry::EM_HideActivity *)v7);
      v6 = CToastCenterExperienceManager::HideInHolographic(this);
      v3 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D0,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
        ToastCenterTelemetry::EM_HideActivity::~EM_HideActivity((ToastCenterTelemetry::EM_HideActivity *)v7);
        return v3;
      }
    }
    v5 = CSingleViewShellExperience::Hide(v2, 0LL);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D3,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v7[0]);
      goto LABEL_4;
    }
  }
  else
  {
    ToastCenterTelemetry::EM_HideActivity::NoOp_AlreadyHidden((ToastCenterTelemetry::EM_HideActivity *)v7);
  }
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7, 0LL);
  v3 = 0;
LABEL_4:
  *(_QWORD *)v7 = &ToastCenterTelemetry::EM_HideActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v21);
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v20);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(&v8);
  return v3;
}

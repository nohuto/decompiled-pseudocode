/*
 * XREFs of ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801F5998
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801F58E8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180015354 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030EF4 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800311B0 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003271C (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032A04 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032CF4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180049788 (-StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?RequestingLaunch@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1801F5A90 (-RequestingLaunch@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ??1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CD54C (--1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnNewNotification(PTP_TIMER *pv)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-168h] BYREF
  _DWORD v6[68]; // [rsp+28h] [rbp-160h] BYREF
  volatile signed __int32 *v7; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v8[48]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)"EM_NewNotificationActivity");
  *(_QWORD *)v5 = &ToastCenterTelemetry::EM_NewNotificationActivity::`vftable';
  ToastCenterTelemetry::EM_NewNotificationActivity::StartActivity((ToastCenterTelemetry::EM_NewNotificationActivity *)v5);
  ToastCenterTelemetry::EM_NewNotificationActivity::RequestingLaunch((ToastCenterTelemetry::EM_NewNotificationActivity *)v5);
  v2 = CToastCenterExperienceManager::Launch(pv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, 0);
    ToastCenterTelemetry::EM_NewNotificationActivity::~EM_NewNotificationActivity((ToastCenterTelemetry::EM_NewNotificationActivity *)v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x301,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    *(_QWORD *)v5 = &ToastCenterTelemetry::EM_NewNotificationActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)v5);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v8);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v7);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v6);
    return v3;
  }
}

/*
 * XREFs of ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801EBC58
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801EBBA8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180019BCC (-StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001C030 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C32C (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C494 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D7C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040E74 (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068D48 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?RequestingLaunch@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1801EBD50 (-RequestingLaunch@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ??1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C49A8 (--1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
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
      (void *)0x307,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    *(_QWORD *)v5 = &ToastCenterTelemetry::EM_NewNotificationActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v8);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v7);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v6);
    return v3;
  }
}

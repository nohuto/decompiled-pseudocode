/*
 * XREFs of ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180114330
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018F54 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x180019334 (-StartActivity@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019A80 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114930 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?reset@?$shared_object@V?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180114A1C (-reset@-$shared_object@V-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180114A78 (--1-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x180114AE8 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewDestroyed(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  void **v4; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[272]; // [rsp+28h] [rbp-160h] BYREF
  _BYTE v6[8]; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v7[48]; // [rsp+140h] [rbp-48h] BYREF

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v4,
    (__int64)"EM_ViewDestroyedActivity");
  v4 = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity *)&v4);
  CControlCenterExperienceManager::OnVisibilityChanged((CControlCenterExperienceManager *)((char *)this - 104));
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v4, 0);
  v4 = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v4);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v7);
  wil::details::shared_object<wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v6);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v5);
  return 0LL;
}

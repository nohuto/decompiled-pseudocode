/*
 * XREFs of ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801EA790
 * Callers:
 *     <none>
 * Callees:
 *     ?RepositioningView@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180015C94 (-RepositioningView@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030EF4 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800311B0 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003271C (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032A04 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032CF4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801EA8C8 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802C6A0C (-StartActivity@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v9; // rdx
  _DWORD v10[4]; // [rsp+20h] [rbp-E0h] BYREF
  void **v11; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v12[68]; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v13; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v14[48]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v11,
    (__int64)"EM_DisplaySettingsChangeActivity");
  v11 = &ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::`vftable';
  ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::StartActivity((ToastCenterTelemetry::EM_DisplaySettingsChangeActivity *)&v11);
  v10[0] = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 56LL))(a2, v10);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v9 = 797LL;
    goto LABEL_7;
  }
  if ( v10[0] )
  {
    if ( (a3 & 0x3F) != 0 )
    {
      ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::RepositioningView((ToastCenterTelemetry::EM_DisplaySettingsChangeActivity *)&v11);
      v6 = CToastCenterExperienceManager::PositionView((CToastCenterExperienceManager *)(a1 - 40));
      v7 = retaddr;
      if ( v6 < 0 )
      {
        v9 = 808LL;
LABEL_7:
        wil::details::in1diag3::_Log_Hr(
          v7,
          (void *)v9,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
      }
    }
  }
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v11, 0);
  v11 = &ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v11);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v14);
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v13);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v12);
  return 0LL;
}

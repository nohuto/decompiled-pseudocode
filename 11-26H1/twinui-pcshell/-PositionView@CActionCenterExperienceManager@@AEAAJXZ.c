/*
 * XREFs of ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180099D14
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003A800 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801E0B30 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180213D68 (-OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180367A5C (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180066200 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800662A0 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180066358 (-reset@-$shared_object@V-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ??$NewWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x180097EB4 (--$NewWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCent.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180097F60 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ??$CurrentWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x1800982A8 (--$CurrentWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@Notification.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800987C0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??$ViewExperienceRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x180099C2C (--$ViewExperienceRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCente.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18021960C (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802BA760 (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180365AE0 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803679A4 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::PositionView(CActionCenterExperienceManager *this)
{
  int ViewPosition; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 v6; // r9
  float left; // xmm9_4
  double v8; // xmm1_8
  float v9; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  int v13; // [rsp+28h] [rbp-E0h] BYREF
  float right; // [rsp+2Ch] [rbp-DCh] BYREF
  float rc; // [rsp+30h] [rbp-D8h] BYREF
  float rc_4; // [rsp+34h] [rbp-D4h] BYREF
  struct tagRECT rc_8; // [rsp+38h] [rbp-D0h] BYREF
  void **v18; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v19[272]; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v20; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v21[48]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v18,
    (__int64)"EM_PositionViewActivity");
  v18 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)&v18);
  if ( *((_QWORD *)this + 19) )
  {
    rc_8 = 0LL;
    ViewPosition = CActionCenterExperienceManager::GetViewPosition(this, &rc_8);
    v3 = ViewPosition;
    if ( ViewPosition < 0 )
    {
      v4 = 1452LL;
LABEL_13:
      v6 = (unsigned int)ViewPosition;
      goto LABEL_14;
    }
    *(float *)&v13 = (float)rc_8.bottom;
    right = (float)rc_8.right;
    rc = (float)rc_8.top;
    rc_4 = (float)rc_8.left;
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::ViewExperienceRect<float,float,float,float>(
      (int *)&rc_4,
      (int *)&rc,
      (int *)&right,
      &v13);
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 26) + 96LL))(
           *((_QWORD *)this + 26),
           &rc_8);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20D,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5);
      v6 = v3;
      v4 = 1454LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)v6);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)&v18);
      return v3;
    }
    left = (float)rc_8.left;
    v8 = *((double *)this + 82);
    v9 = (double)(rc_8.bottom - rc_8.top) - v8;
    v10 = (float)(rc_8.right - rc_8.left);
    v11 = v8;
    rc_4 = v11;
    rc = v10;
    right = v9;
    *(float *)&v13 = (float)rc_8.left;
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::NewWindowRegionRect<float,float,float,float>(
      &v13,
      (int *)&right,
      (int *)&rc,
      (int *)&rc_4);
    rc_4 = *((float *)this + 163);
    rc = *((float *)this + 162);
    right = *((float *)this + 161);
    v13 = *((int *)this + 160);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::CurrentWindowRegionRect<float,float,float,float>(
      &v13,
      (int *)&right,
      (int *)&rc,
      (int *)&rc_4);
    if ( left != *((float *)this + 160)
      || v9 != *((float *)this + 161)
      || v10 != *((float *)this + 162)
      || v11 != *((float *)this + 163) )
    {
      *((float *)this + 160) = left;
      *((float *)this + 161) = v9;
      *((float *)this + 162) = v10;
      *((float *)this + 163) = v11;
      if ( *((_DWORD *)this + 42) == 2 )
      {
        ViewPosition = CActionCenterExperienceManager::SetWindowRegion(this);
        v3 = ViewPosition;
        if ( ViewPosition < 0 )
        {
          v4 = 1469LL;
          goto LABEL_13;
        }
      }
    }
  }
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v18, 0);
  v18 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v18);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v21);
  wil::details::shared_object<wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v20);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v19);
  return 0LL;
}

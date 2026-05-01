/*
 * XREFs of ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x180366990
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@@Z @ 0x180363784 (--$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@Notif.c)
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180364094 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180365DA8 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803688E4 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnDismiss(CActionCenterExperienceManager *this)
{
  CActionCenterExperienceManager *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-178h] BYREF
  unsigned int v6[3]; // [rsp+24h] [rbp-174h] BYREF
  _BYTE v7[336]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v1 = (CActionCenterExperienceManager *)((char *)this - 8);
  if ( *((_DWORD *)this + 40) == 2 )
  {
    v5 = 0;
    v6[0] = 3;
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::Start<enum NotificationCenterUITelemetry::DismissMethod,enum NotificationCenterUITelemetry::InputType>(
      (struct wil::details::IFailureCallback *)v7,
      v6,
      (unsigned int *)&v5);
    v2 = CActionCenterExperienceManager::Hide(v1);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x507,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v7);
      return v3;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v7);
  }
  return 0LL;
}

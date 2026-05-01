/*
 * XREFs of ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180366230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180214F10 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18021CC08 (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@$$QEA_N@Z @ 0x1803637F0 (--$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@Contr.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18036404C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnDismiss(CControlCenterExperienceManager *this)
{
  int v2; // eax
  DWORD v3; // edx
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-178h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-174h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v9[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  if ( *((_DWORD *)this + 38) == 2 )
  {
    LOBYTE(v6) = 0;
    v7 = 0;
    v8 = 3;
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::Start<enum ControlCenterUITelemetry::DismissMethod,enum ControlCenterUITelemetry::InputType,bool>(
      (struct wil::details::IFailureCallback *)v9,
      &v8,
      &v7,
      &v6);
    v2 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)((char *)this + 24), 0LL, 0);
    v4 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v9);
      return v4;
    }
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v9,
      v3);
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v9);
  }
  return 0LL;
}

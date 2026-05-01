/*
 * XREFs of ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180214F10
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180043100 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180225640 (-OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x1803658D0 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180366230 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18036641C (-OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x1802150D8 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18021CC08 (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@$$QEA_N@Z @ 0x1803637F0 (--$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@Contr.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18036404C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803657C0 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::Hide(CControlCenterExperienceManager *this, HSTRING a2, char a3)
{
  HSTRING v5; // rcx
  PCWSTR StringRawBuffer; // rdi
  char *v7; // rax
  int v8; // edx
  int v9; // ecx
  char v10; // al
  int v11; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // [rsp+20h] [rbp-178h] BYREF
  int v17; // [rsp+24h] [rbp-174h] BYREF
  int v18; // [rsp+28h] [rbp-170h] BYREF
  _BYTE v19[336]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  *((_BYTE *)this + 728) = a3 != 0;
  if ( *((_DWORD *)this + 32) != 2 )
    goto LABEL_14;
  if ( !*((_BYTE *)this + 730) )
    goto LABEL_9;
  v5 = (HSTRING)*((_QWORD *)this + 90);
  if ( !v5 )
    goto LABEL_9;
  StringRawBuffer = WindowsGetStringRawBuffer(v5, 0LL);
  v7 = (char *)((char *)WindowsGetStringRawBuffer(a2, 0LL) - (char *)StringRawBuffer);
  do
  {
    v8 = *(unsigned __int16 *)&v7[(_QWORD)StringRawBuffer];
    v9 = *StringRawBuffer - v8;
    if ( v9 )
      break;
    ++StringRawBuffer;
  }
  while ( v8 );
  if ( !v9 )
    v10 = 1;
  else
LABEL_9:
    v10 = 0;
  if ( a2 )
  {
    if ( !v10 )
    {
      v11 = CControlCenterExperienceManager::RaiseHideDeepLinkRequestedEvent(
              (CControlCenterExperienceManager *)((char *)this - 32),
              a2,
              *((_BYTE *)this + 728));
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x260,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      goto LABEL_14;
    }
  }
  else if ( !v10 )
  {
    v15 = CControlCenterExperienceManager::HideExperience((CControlCenterExperienceManager *)((char *)this - 32));
    v14 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
      return v14;
    }
LABEL_14:
    *((_BYTE *)this + 728) = 0;
    return 0LL;
  }
  LOBYTE(v16) = 0;
  v17 = 0;
  v18 = 6;
  ((void (__fastcall *)(_BYTE *, int *, int *, int *))ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::Start<enum ControlCenterUITelemetry::DismissMethod,enum ControlCenterUITelemetry::InputType,bool>)(
    v19,
    &v18,
    &v17,
    &v16);
  v13 = CControlCenterExperienceManager::HideExperience((CControlCenterExperienceManager *)((char *)this - 32));
  v14 = v13;
  if ( v13 >= 0 )
  {
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v19);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x255,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v13);
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v19);
  return v14;
}

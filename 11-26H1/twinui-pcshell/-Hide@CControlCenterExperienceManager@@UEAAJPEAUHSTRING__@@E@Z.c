/*
 * XREFs of ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180112D10
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003BE00 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180216470 (-OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18036CA70 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x18036D3E0 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18036D5CC (-OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180112ED8 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18020ECAC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@$$QEA_N@Z @ 0x18036A9FC (--$Start@W4DismissMethod@ControlCenterUITelemetry@@W4InputType@2@_N@DismissControlCenterV1@Contr.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18036B250 (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18036C950 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::Hide(CControlCenterExperienceManager *this, HSTRING a2, char a3)
{
  CControlCenterExperienceManager *v5; // rsi
  HSTRING v6; // rcx
  PCWSTR StringRawBuffer; // rdi
  char *v8; // rax
  int v9; // edx
  int v10; // ecx
  char v11; // al
  int v12; // eax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  int v17; // [rsp+20h] [rbp-188h] BYREF
  int v18; // [rsp+24h] [rbp-184h] BYREF
  int v19; // [rsp+28h] [rbp-180h] BYREF
  _BYTE v20[336]; // [rsp+30h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v5 = (CControlCenterExperienceManager *)((char *)this - 32);
  *((_BYTE *)this + 728) = a3 != 0;
  if ( *((_DWORD *)this + 32) != 2 )
    goto LABEL_14;
  if ( !*((_BYTE *)this + 730) )
    goto LABEL_9;
  v6 = (HSTRING)*((_QWORD *)this + 90);
  if ( !v6 )
    goto LABEL_9;
  StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
  v8 = (char *)((char *)WindowsGetStringRawBuffer(a2, 0LL) - (char *)StringRawBuffer);
  do
  {
    v9 = *(unsigned __int16 *)&v8[(_QWORD)StringRawBuffer];
    v10 = *StringRawBuffer - v9;
    if ( v10 )
      break;
    ++StringRawBuffer;
  }
  while ( v9 );
  if ( !v10 )
    v11 = 1;
  else
LABEL_9:
    v11 = 0;
  if ( a2 )
  {
    if ( !v11 )
    {
      v12 = CControlCenterExperienceManager::RaiseHideDeepLinkRequestedEvent(v5, a2, *((_BYTE *)this + 728));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x260,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
      goto LABEL_14;
    }
  }
  else if ( !v11 )
  {
    v16 = CControlCenterExperienceManager::HideExperience(v5);
    v15 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      return v15;
    }
LABEL_14:
    *((_BYTE *)this + 728) = 0;
    return 0LL;
  }
  LOBYTE(v17) = 0;
  v18 = 0;
  v19 = 6;
  ((void (__fastcall *)(_BYTE *, int *, int *, int *))ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::Start<enum ControlCenterUITelemetry::DismissMethod,enum ControlCenterUITelemetry::InputType,bool>)(
    v20,
    &v19,
    &v18,
    &v17);
  v14 = CControlCenterExperienceManager::HideExperience(v5);
  v15 = v14;
  if ( v14 >= 0 )
  {
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v20);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x255,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v20);
  return v15;
}

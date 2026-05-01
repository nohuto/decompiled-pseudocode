/*
 * XREFs of ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x180507CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BEBCC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050686C (--1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x180506BAC (-ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLA.c)
 *     ?GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x180507E9C (-GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE.c)
 *     ?StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050A634 (-StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerT.c)
 *     ?Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXUtagRECT@@0@Z @ 0x18050B2E8 (-Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetCortanaAppDefaultLaunchPosition(
        VoiceAssistantPositioner *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rdi
  int MonitorInformation; // eax
  HMONITOR v6; // r8
  unsigned int v7; // ebx
  int v8; // ebx
  HMONITOR v9; // r8
  int v10; // eax
  struct tagRECT v11; // xmm0
  int v13; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v14[3]; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v15; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v16; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v17; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v18; // [rsp+B8h] [rbp-50h] BYREF
  RECT rc; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v20; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v21[42]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"VAPositioner_GetCortanaAppDefaultLaunchPositionActivity");
  v21[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v21);
  rc = (RECT)*((_OWORD *)this + 18);
  v4 = MonitorFromRect(&rc, 1u);
  v13 = 0;
  v16 = 0LL;
  v15 = 0LL;
  *(_OWORD *)&v14[1] = 0LL;
  MonitorInformation = VoiceAssistantPositioner::GetMonitorInformation(
                         (VoiceAssistantPositioner *)((char *)this - 104),
                         v4,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v13,
                         &v16,
                         &v15,
                         (struct tagRECT *)&v14[1]);
  v7 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v8 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x198, (ExperienceManagerUtils *)v4, v6);
    v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)0x2EC,
            (ExperienceManagerUtils *)v4,
            v9);
    v17 = 0LL;
    v18 = rc;
    VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
      (__int64)&v16,
      &v20,
      v13,
      v8,
      v10,
      (__int64)&v16,
      &v15,
      (__m128i *)&v14[1],
      (__m128i *)&v18,
      &v17,
      0);
    v11 = v20;
    *a2 = v20;
    v18 = v11;
    v17 = rc;
    VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::Stop(
      (VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v21,
      &v17,
      &v18);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)MonitorInformation);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::~VAPositioner_GetCortanaAppDefaultLaunchPositionActivity((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v21);
  return v7;
}

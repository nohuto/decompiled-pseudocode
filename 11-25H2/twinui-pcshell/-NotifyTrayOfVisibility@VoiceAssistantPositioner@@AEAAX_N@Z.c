/*
 * XREFs of ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1804E84CC
 * Callers:
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E6A88 (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1804EBD60 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C9FB8 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804E5D6C (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804E61BC (--1VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x1804E950C (-StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804E97AC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VoiceAssistantPositioner::NotifyTrayOfVisibility(VoiceAssistantPositioner *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  TaskbarHelpers *v4; // rax
  HMONITOR v5; // rdx
  HWND TrayWindowForMonitor; // rax
  _QWORD v7[42]; // [rsp+20h] [rbp-168h] BYREF

  v2 = a2;
  if ( *((_BYTE *)this + 424) != a2 )
  {
    wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v7);
    v7[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::`vftable';
    VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::StartActivity(
      (VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity *)v7,
      v2);
    v4 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 392), 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v4, v5);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, v2, 0LL);
    *((_BYTE *)this + 424) = v2;
    wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::~VAPositioner_NotifyTrayOfVisibilityActivity((VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity *)v7);
  }
}

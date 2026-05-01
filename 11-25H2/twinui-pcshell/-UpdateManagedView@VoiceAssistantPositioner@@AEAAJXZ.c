/*
 * XREFs of ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1804EBD60
 * Callers:
 *     ?OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z @ 0x180206840 (-OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_.c)
 *     ?DisplaySettingsChange@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180223DD0 (-DisplaySettingsChange@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR.c)
 *     ?InputHostHiding@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180239300 (-InputHostHiding@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804E6670 (-ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804E7C50 (-InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?InputHostShowing@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1804E7D40 (-InputHostShowing@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11.c)
 *     ?ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804E8B30 (-ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804E6B58 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1804E84CC (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::UpdateManagedView(VoiceAssistantPositioner *this)
{
  int AppViewOperationToUpdateView; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  struct IUnknown *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationViewOperation *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 47) )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    AppViewOperationToUpdateView = VoiceAssistantPositioner::CreateAppViewOperationToUpdateView(
                                     this,
                                     *((struct IApplicationView **)this + 47),
                                     (struct tagSIZE *)&v9);
    v3 = AppViewOperationToUpdateView;
    if ( AppViewOperationToUpdateView < 0 )
    {
      v4 = 668LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)AppViewOperationToUpdateView);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
      return v3;
    }
    v8 = 0;
    AppViewOperationToUpdateView = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)v9 + 104LL))(
                                     v9,
                                     &v8);
    v3 = AppViewOperationToUpdateView;
    if ( AppViewOperationToUpdateView < 0 )
    {
      v4 = 670LL;
      goto LABEL_8;
    }
    AppViewOperationToUpdateView = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewOperation *))(**((_QWORD **)this + 47) + 320LL))(
                                     *((_QWORD *)this + 47),
                                     v9);
    v3 = AppViewOperationToUpdateView;
    if ( AppViewOperationToUpdateView < 0 )
    {
      v4 = 671LL;
      goto LABEL_8;
    }
    if ( v8 )
    {
      VoiceAssistantPositioner::NotifyTrayOfVisibility(this, 1u);
      v6 = (struct IUnknown *)*((_QWORD *)this + 52);
      if ( v6 )
      {
        if ( SHIsSameObject(v6, *((struct IUnknown **)this + 47)) )
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 52);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  }
  return 0LL;
}

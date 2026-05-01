/*
 * XREFs of ?OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z @ 0x1801FA840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180506590 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805067BC (--1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050A2A4 (-StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050ADBC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050D2D8 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?VAPositioner_PositionPendingViewBelongsToAppAdded@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050D724 (-VAPositioner_PositionPendingViewBelongsToAppAdded@VAPositioner_AppAddedToTaskbarActivity@VoiceA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::OnAppAddedToSwitchers(__int64 a1, __int64 a2, int a3)
{
  VoiceAssistantPositioner *v5; // rsi
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, void **); // rbx
  void **v8; // rax
  int updated; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-E0h] BYREF
  void *v13; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v14[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( a3 == 2 )
  {
    v5 = (VoiceAssistantPositioner *)(a1 - 144);
    if ( *(_QWORD *)(a1 - 144 + 416) )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v14);
      v14[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::`vftable';
      VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v14);
      v13 = 0LL;
      v6 = *(_QWORD *)(a1 + 272);
      v7 = *(void (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 136LL);
      v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v13);
      v7(v6, v8);
      v12 = 0;
      (*(void (__fastcall **)(__int64, void *, int *))(*(_QWORD *)a2 + 88LL))(a2, v13, &v12);
      if ( v12 )
      {
        VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::VAPositioner_PositionPendingViewBelongsToAppAdded((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v14);
        updated = VoiceAssistantPositioner::UpdateManagedView(v5);
        v10 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x224,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
            (const char *)(unsigned int)updated);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v13);
          VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v14);
          return v10;
        }
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v13);
      VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v14);
    }
  }
  return 0LL;
}

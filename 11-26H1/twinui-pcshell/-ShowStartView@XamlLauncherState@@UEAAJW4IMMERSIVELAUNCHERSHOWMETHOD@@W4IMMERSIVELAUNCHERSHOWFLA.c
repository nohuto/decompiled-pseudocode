/*
 * XREFs of ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801D4810 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180248E00 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     wil::details::CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70__&_long_&_0_ @ 0x18045F3B4 (wil--details--CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70__-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18001DBC0 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x180050904 (-reset@-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180059D70 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180077628 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800968A0 (--$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009777C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag.c)
 *     ?Split@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180099294 (-Split@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800C9318 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CA0BC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800F978C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801EAC60 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1801EAC60.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180214D4C (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1802495B8 (-ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180281DD4 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180281E90 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180282404 (-ensure_data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1802A2424 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x1802A8A30 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x1802B89B8 (-watch_errors@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowTelemetry@@J@Z @ 0x1802BBBB8 (-CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowT.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802BD360 (--1-$test_watcher@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C5BFC (--1-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@U.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802C604C (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x1803306B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1803B8AA0 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804595C0 (--4-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@U.c)
 *     ??4?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180459630 (--4-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAAEAV.c)
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x18045E56C (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 *     wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_7d8ec5034082e9a06c60a2b58ed48b70___ @ 0x18045FE24 (wil--details--RunWhenCompleteAction_IUnknown_Windows--Foundation--IAsyncAction____lambda_7d8ec50.c)
 *     ??$StartInvoke_DesktopSwitchTimedOut@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@Z @ 0x1804602C4 (--$StartInvoke_DesktopSwitchTimedOut@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@StartWindowTelemetry@@SA.c)
 *     ??$StartShowDelayedDueToFullScreenExperience@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1804603D8 (--$StartShowDelayedDueToFullScreenExperience@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAU.c)
 *     ??$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180460464 (--$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFL.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180460554 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@det.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180460AB0 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x1804619D8 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ @ 0x180462D40 (-ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG@Z @ 0x180462E30 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50176083@@@details@wil@@QEAA_NXZ @ 0x1804633AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50176083@@@details@wil@@QEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1804633E8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall __noreturn XamlLauncherState::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  __int64 v5; // r15
  char v6; // bl
  bool v7; // di
  enum _TABLETMODESTATE *v8; // rdx
  TabletModeHelpers *v9; // rcx
  char v10; // r13
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, SID *, GUID *, unsigned __int16 **); // rbx
  int v13; // eax
  unsigned __int16 *v14; // rbx
  __int64 (__fastcall *v15)(unsigned __int16 *, __int64 *); // rdi
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rbx
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  HRESULT v26; // eax
  void **v27; // rax
  HRESULT v28; // eax
  unsigned __int16 *v29; // rbx
  int v30; // eax
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rax
  void *v38; // rdx
  _QWORD *v39; // rbx
  GUID *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // edi
  bool IsSearchDisabledByPolicy; // bl
  __int64 v45; // r8
  __int64 v46; // rdx
  char v47; // [rsp+30h] [rbp-D0h]
  unsigned __int16 *p_pguid; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  int v53[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h]
  char v55; // [rsp+70h] [rbp-90h]
  _BYTE v56[56]; // [rsp+78h] [rbp-88h] BYREF
  GUID pguid; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v58[42]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v59[42]; // [rsp+210h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  v3 = a3;
  LODWORD(v51) = a3;
  v49 = a2;
  LODWORD(v52) = a2;
  LODWORD(v50) = a3;
  v5 = a1 - 24;
  if ( XamlLauncherState::IsSessionIdle((XamlLauncherState *)(a1 - 24)) && !*(_BYTE *)(a1 + 1039) )
  {
    StartWindowTelemetry::ShowAttemptSkippedDueToIdle();
    return;
  }
  v6 = *(_BYTE *)(a1 + 1038) == 0;
  v7 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    v7 = (unsigned int)IsGamingFullScreenExperienceActive() != 0;
    v6 |= v7;
  }
  if ( !v6 )
  {
    *(_WORD *)(a1 + 1035) = 0;
    v22 = *(_DWORD *)(a1 + 40);
    v53[0] = v22;
    v53[1] = *(_DWORD *)&pguid.Data2;
    v54 = v5;
    v55 = 1;
    if ( v22 )
    {
      v23 = v22 - 6;
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          *(_DWORD *)(a1 + 40) = 4;
          if ( (v3 & 8) == 0 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 120LL))(*(_QWORD *)(a1 + 64));
        }
        goto LABEL_41;
      }
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread(a1 + 616, v58);
      v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 96LL))(*(_QWORD *)(a1 + 64));
      v25 = v24;
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27D,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v24);
      if ( *v58[34] == 1 )
        XamlLauncherState::CompleteCortanaTelemetry(
          (XamlLauncherState *)v5,
          (struct StartWindowTelemetry::CortanaLauncherInvokeActivity *)v58,
          v25);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v58);
    }
    *(_BYTE *)(a1 + 1037) = 0;
    *(_DWORD *)(a1 + 40) = XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)v5) ? 15 : 1;
LABEL_41:
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v59);
    v59[0] = (volatile signed __int32 *)&CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    v47 = 0;
    if ( **(_DWORD **)(a1 + 560) != 1 )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50176083>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50176083>::GetImpl'::`2'::impl) )
      {
        pguid = 0LL;
        v26 = CoCreateGuid(&pguid);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C0,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v26);
        p_pguid = 0LL;
        v27 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&p_pguid);
        v28 = StringFromCLSID(&pguid, (LPOLESTR *)v27);
        if ( v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C2,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v28);
        v29 = L"{0}";
        if ( p_pguid )
          v29 = p_pguid;
        v30 = SHRegSetString(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Start",
                L"LaunchSessionId",
                v29);
        if ( v30 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C6,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v30);
        wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v58);
        v58[0] = (volatile signed __int32 *)&CommonStartTelemetry::LauncherInvokeActivity::`vftable';
        CommonStartTelemetry::LauncherInvokeActivity::StartActivity(v58, 23LL, v49, v29);
        CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v59, (__int64)v58);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v58);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&p_pguid);
      }
      else
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v58);
        v58[0] = (volatile signed __int32 *)&CommonStartTelemetry::LauncherInvokeActivity::`vftable';
        CommonStartTelemetry::LauncherInvokeActivity::StartActivity(v58, 23LL, v49, L"{0}");
        CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v59, (__int64)v58);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v58);
      }
      v31 = CommonStartTelemetry::LauncherInvokeActivity::Split((__int64)v59, v58);
      CommonStartTelemetry::LauncherInvokeActivity::operator=(a1 + 288, (__int64)v31);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v58);
      v47 = 1;
    }
    v32 = (_QWORD *)(a1 + 944);
    if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 944)
      && !g_suppressStartMenuTipInUnitTest )
    {
      wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>::reset(a1 + 944);
      tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
        a1 + 944,
        &v51);
      p_pguid = 0LL;
      event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)&p_pguid, 1, L"ShellDesktopSwitchEvent");
      v34 = v51;
      if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z >= 0 )
      {
        if ( !_wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
                (HANDLE *)&p_pguid,
                0) )
        {
          *(_BYTE *)(v34 + 284) = 1;
          StartWindowTelemetry::StartInvoke_DesktopSwitchTimedOut<enum IMMERSIVELAUNCHERSHOWMETHOD const &>(&v52);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2D8,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z);
      }
      *(_BYTE *)(v34 + 312) = v49 == 15;
      if ( *v32 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v32 + 8LL) )
        wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>::reset(a1 + 944);
      v37 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::ensure_data(
                        a1 + 944,
                        v35,
                        v36);
      tip2::details::shared_data<1,0,0>::start(*v37 + 8LL, &pguid);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        (wil::details **)&p_pguid,
        v38);
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&v51);
    }
    tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::watch_errors(
      a1 + 944,
      v56);
    v39 = (_QWORD *)(a1 + 952);
    if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 952) )
    {
      v40 = (GUID *)(a1 + 960);
      if ( memcmp_0((const void *)(a1 + 960), &GUID_NULL, 0x10uLL) )
      {
        pguid = *v40;
        p_pguid = (unsigned __int16 *)&pguid;
        if ( !*v39 || (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v39 + 8LL) )
        {
          v42 = tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,_GUID * &>(
                  &v51,
                  &p_pguid);
          wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::operator=(
            a1 + 952,
            v42);
          wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>(&v51);
        }
        else
        {
          tip2::details::shared_data<1,0,0>::open_without_lock(v41, &pguid);
        }
        if ( !(unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v39 + 8LL) )
          *v40 = GUID_NULL;
      }
    }
    XamlLauncherState::BeginStartTelemetryTimeout((struct _TP_TIMER **)v5);
    v43 = v49;
    *(_DWORD *)(a1 + 272) = v49;
    *(_DWORD *)(a1 + 276) = v3;
    IsSearchDisabledByPolicy = XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)v5);
    if ( !IsSearchDisabledByPolicy || (LOBYTE(v45) = 1, (v3 & 8) != 0) )
      LOBYTE(v45) = 0;
    v46 = v3 >> 2;
    LOBYTE(v46) = (v3 & 4) != 0;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 56) + 56LL))(
      *(_QWORD *)(a1 + 56),
      v46,
      v45,
      v43);
    if ( !IsSearchDisabledByPolicy && (int)XamlLauncherState::ShowSearchWithStart(v5, v3) < 0 )
      *(_BYTE *)(a1 + 1032) = 1;
    if ( v47 )
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v59,
        0);
    tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(v56);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v59);
    v55 = 0;
    StartWindowTelemetry::ShowStartView<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v53,
      (int *)(v5 + 64));
    return;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl)
    && v7 )
  {
    StartWindowTelemetry::StartShowDelayedDueToFullScreenExperience<enum IMMERSIVELAUNCHERSHOWMETHOD const &,enum IMMERSIVELAUNCHERSHOWFLAGS const &>(
      &v52,
      &v50);
    if ( !_InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1092), 1, 0) )
    {
      *(_QWORD *)&pguid.Data1 = v5;
      v10 = 1;
      pguid.Data4[0] = 1;
      p_pguid = 0LL;
      v11 = *(_QWORD *)(a1 + 96);
      v12 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, unsigned __int16 **))(*(_QWORD *)v11 + 24LL);
      Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&p_pguid);
      v13 = v12(v11, &SID_GamingPostureController, &GUID_b525603c_e3b6_51fa_bdfc_1ac36cf03dc8, &p_pguid);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22E,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v13);
LABEL_12:
        Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&p_pguid);
        *(_BYTE *)(v5 + 1116) = 0;
        return;
      }
      v50 = 0LL;
      v14 = p_pguid;
      v15 = *(__int64 (__fastcall **)(unsigned __int16 *, __int64 *))(*(_QWORD *)p_pguid + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
      v16 = v15(v14, &v50);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x231,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
        goto LABEL_12;
      }
      v52 = a1 & -(__int64)(v5 != 0);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v52);
      *(_QWORD *)&pguid.Data1 = a1 & -(__int64)(v5 != 0);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pguid);
      *(_QWORD *)pguid.Data4 = v5;
      v17 = wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_7d8ec5034082e9a06c60a2b58ed48b70___(
              v50,
              &pguid);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pguid);
      if ( v17 >= 0 )
        v10 = 0;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x244,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
      Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&p_pguid);
      if ( v10 )
        *(_BYTE *)(v5 + 1116) = 0;
      v3 = v51;
    }
  }
  else
  {
    StartWindowTelemetry::StartShowDelayedDueToReadiness<enum IMMERSIVELAUNCHERSHOWMETHOD const &,enum IMMERSIVELAUNCHERSHOWFLAGS const &>(
      &v52,
      &v50);
  }
  *(_DWORD *)(a1 + 1080) = v49;
  *(_DWORD *)(a1 + 1084) = v3;
  *(_BYTE *)(a1 + 1088) = 1;
  if ( TabletModeHelpers::IsTabletMode(v9, v8) )
  {
    v18 = a1 + 1072;
    if ( !*(_QWORD *)(a1 + 1072) )
    {
      v19 = (unsigned __int16 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      p_pguid = v19;
      if ( v19 )
        v20 = (unsigned __int16 *)FocusHoldingTank::FocusHoldingTank((LONG_PTR)v19, 0LL);
      else
        v20 = 0LL;
      p_pguid = v20;
      wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::operator=(a1 + 1072, &p_pguid);
      wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
        (FocusHoldingTank **)&p_pguid,
        0LL);
      if ( *(_QWORD *)v18 )
      {
        v21 = *(_QWORD *)(a1 + 64);
        if ( v21 )
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(*(_QWORD *)v18 + 16LL), v21);
      }
    }
  }
}

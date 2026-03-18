/*
 * XREFs of ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z @ 0x18020E22C (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x180009F50 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180078D7C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??2CCrossContainerGuestReadWriteSharedSection@@CAPEAX_K@Z @ 0x180111904 (--2CCrossContainerGuestReadWriteSharedSection@@CAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F7A0 (-InternalRelease@-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ @ 0x180161660 (-RegisterMonitorPowerNotification@CComposition@@IEAAJXZ.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1801A0B70 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1801CBDE8 (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ??R?$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z @ 0x1801D0298 (--R-$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z @ 0x1801D6860 (-Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1801D777C (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 *     ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801D9344 (-Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CGlobalManipulationManager@@SAJPEAVCComposition@@PEAPEAVCManipulationManager@@@Z @ 0x1801DB148 (-Create@CGlobalManipulationManager@@SAJPEAVCComposition@@PEAPEAVCManipulationManager@@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1801DE9C8 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?Initialize@CScheduler@@QEAAJPEAUIMessageLoopExtensions@@PEAX11@Z @ 0x1801E4434 (-Initialize@CScheduler@@QEAAJPEAUIMessageLoopExtensions@@PEAX11@Z.c)
 *     ??0CRenderTargetManager@@QEAA@XZ @ 0x180209EBC (--0CRenderTargetManager@@QEAA@XZ.c)
 *     ??0CDefaultClock@@QEAA@XZ @ 0x18020AA2C (--0CDefaultClock@@QEAA@XZ.c)
 *     ??0CPreComputeContext@@QEAA@XZ @ 0x18020B4C4 (--0CPreComputeContext@@QEAA@XZ.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z @ 0x1802143EC (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z.c)
 *     ?Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z @ 0x180216718 (-Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z.c)
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x18021AD50 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSceneResourceManager@@U?$default_delete@VCSceneResourceManager@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021F540 (--1-$out_param_t@V-$unique_ptr@VCSceneResourceManager@@U-$default_delete@VCSceneResourceManager@.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1802297EC (--0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??R?$default_delete@VCMeshCacheManager@@@std@@QEBAXPEAVCMeshCacheManager@@@Z @ 0x18022A384 (--R-$default_delete@VCMeshCacheManager@@@std@@QEBAXPEAVCMeshCacheManager@@@Z.c)
 *     ??R?$default_delete@VCSuperWetInkManager@@@std@@QEBAXPEAVCSuperWetInkManager@@@Z @ 0x18022A3E0 (--R-$default_delete@VCSuperWetInkManager@@@std@@QEBAXPEAVCSuperWetInkManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Initialize(CComposition *this)
{
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  unsigned int v3; // ebx
  struct IMessageSession **v4; // r15
  __int64 (__fastcall *v5)(CComposition *, char *); // rbx
  struct IMessageSession *v6; // rsi
  __int64 (__fastcall *v7)(struct IMessageSession *, char *); // rdi
  CDisplayManager *v8; // rcx
  CRenderTargetManager *v9; // rax
  CRenderTargetManager *v10; // rax
  CDefaultClock *v11; // rax
  CDefaultClock *v12; // rax
  void *v13; // rax
  CPreComputeContext *v14; // rax
  CPreComputeContext *v15; // rbx
  CPreComputeContext *v16; // rax
  __int64 v17; // rdx
  void *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  CColorBrush *v26; // rax
  CColorBrush *v27; // rax
  unsigned int v29; // [rsp+20h] [rbp-30h]
  struct _D3DCOLORVALUE v30; // [rsp+30h] [rbp-20h] BYREF
  char v31; // [rsp+40h] [rbp-10h]
  struct IMessageLoopExtensions *v32; // [rsp+48h] [rbp-8h] BYREF

  *(_QWORD *)&v30.r = 0LL;
  v32 = 0LL;
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((char *)this + 6400, 1LL);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 300;
    goto LABEL_52;
  }
  v4 = (struct IMessageSession **)((char *)this + 5680);
  v5 = *(__int64 (__fastcall **)(CComposition *, char *))(*(_QWORD *)this + 96LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 710);
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = v5(this, (char *)this + 5680);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 303;
    goto LABEL_52;
  }
  v6 = *v4;
  v7 = *(__int64 (__fastcall **)(struct IMessageSession *, char *))(*(_QWORD *)*v4 + 40LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 711);
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = v7(v6, (char *)this + 5688);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 306;
    goto LABEL_52;
  }
  CDisplayManager::Initialize(v8);
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CThreadContext::InitializeObjectCaches();
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 313;
    goto LABEL_52;
  }
  v9 = (CRenderTargetManager *)operator new(0x2F8uLL);
  if ( v9 )
    v10 = CRenderTargetManager::CRenderTargetManager(v9);
  else
    v10 = 0LL;
  *((_QWORD *)this + 77) = v10;
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CGlobalSurfaceManager::Create((void **)&v30, (void **)&v32, (struct CSurfaceManager **)this + 78);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 321;
    goto LABEL_52;
  }
  v11 = (CDefaultClock *)operator new(0x60uLL);
  if ( v11 )
    v12 = CDefaultClock::CDefaultClock(v11);
  else
    v12 = 0LL;
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 38,
    (void (__fastcall ***)(_QWORD))v12);
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 39,
    *((void (__fastcall ****)(_QWORD))this + 38));
  v13 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 708) + 32LL))(*((_QWORD *)this + 708));
  CScheduler::Initialize((CComposition *)((char *)this + 232), v32, v13, *(void **)&v30.r, v32);
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CExpressionManager::Create((struct CExpressionManager **)this + 102);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 334;
    goto LABEL_52;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CGlobalInputManager::Create(this, (struct CInputManager **)this + 79);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 337;
    goto LABEL_52;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CGlobalManipulationManager::Create(this, (struct CManipulationManager **)this + 80);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 340;
    goto LABEL_52;
  }
  v14 = (CPreComputeContext *)operator new(0x608uLL);
  v15 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x608uLL);
    v16 = CPreComputeContext::CPreComputeContext(v15);
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *((_QWORD *)this + 76);
  *((_QWORD *)this + 76) = v16;
  if ( v17 )
    std::default_delete<CPreComputeContext>::operator()();
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CMessageConversationHost::Create(*v4, (struct IDwmMessageConversationHost **)this + 798);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 345;
    goto LABEL_52;
  }
  Microsoft::WRL::ComPtr<DataProviderManager>::InternalRelease((char *)this + 6392);
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = DataProviderManager::Create(*v4, (struct DataProviderManager **)this + 799);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 347;
    goto LABEL_52;
  }
  v18 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 708) + 32LL))(*((_QWORD *)this + 708));
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CEffectCompilationService::Create(v18, (struct CEffectCompilationService **)this + 81);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 352;
    goto LABEL_52;
  }
  v19 = operator new(0x58uLL);
  if ( v19 )
  {
    *v19 = 0LL;
    v19[1] = 0LL;
    v19[2] = 0LL;
    v19[3] = 0LL;
    v19[4] = 0LL;
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    v19[8] = 0LL;
    v19[9] = 0LL;
    v19[10] = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *((_QWORD *)this + 82);
  *((_QWORD *)this + 82) = v19;
  if ( v20 )
    std::default_delete<CSuperWetInkManager>::operator()();
  v21 = (__int64 *)operator new(0x10uLL);
  v22 = v21;
  if ( v21 )
  {
    *v21 = 0LL;
    v21[1] = 0LL;
    v23 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL);
    *(_QWORD *)v23 = v23;
    *(_QWORD *)(v23 + 8) = v23;
    *(_QWORD *)(v23 + 16) = v23;
    *(_WORD *)(v23 + 24) = 257;
    *v22 = v23;
  }
  else
  {
    v22 = 0LL;
  }
  v24 = *((_QWORD *)this + 83);
  *((_QWORD *)this + 83) = v22;
  if ( v24 )
    std::default_delete<CMeshCacheManager>::operator()();
  *(_QWORD *)&v30.b = 0LL;
  *(_QWORD *)&v30.r = (char *)this + 672;
  v31 = 1;
  v3 = CSceneResourceManager::Create(this, (struct CSceneResourceManager **)&v30.b);
  wil::details::out_param_t<std::unique_ptr<CSceneResourceManager>>::~out_param_t<std::unique_ptr<CSceneResourceManager>>(&v30);
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x168u, 0LL);
    return v3;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CComposition::RegisterMonitorPowerNotification(this);
  v3 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v29 = 363;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      0LL,
      0,
      event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z,
      v29,
      0LL);
    return v3;
  }
  v26 = (CColorBrush *)CCrossContainerGuestReadWriteSharedSection::operator new(v25);
  if ( v26 )
  {
    *(struct _D3DCOLORVALUE *)&v30.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    v27 = CColorBrush::CColorBrush(v26, this, &v30);
  }
  else
  {
    v27 = 0LL;
  }
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 90, (__int64)v27);
  *((_QWORD *)this + 786) = 0LL;
  *((_DWORD *)this + 1574) = 1065353216;
  *((_DWORD *)this + 1575) = 1053609165;
  *((_DWORD *)this + 1576) = 1065353216;
  *(_QWORD *)((char *)this + 6308) = 1065353216LL;
  *(_QWORD *)((char *)this + 6316) = 1053609165LL;
  *(_QWORD *)((char *)this + 6324) = 1056997505LL;
  *((_DWORD *)this + 1583) = 1053609165;
  *((_QWORD *)this + 792) = 1056997505LL;
  *((_DWORD *)this + 1586) = 1056997505;
  *((_DWORD *)this + 1587) = 1053609165;
  *((_BYTE *)this + 6465) = 1;
  return v3;
}

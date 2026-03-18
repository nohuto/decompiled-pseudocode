/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1400169D0 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x14003DCCC (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1400463DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046FBC (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14004AB28 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400508D0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400588DC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x14005A14C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005FCC4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x140067E2C (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ @ 0x14006DD2C (-IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ.c)
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x140076350 (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x14007880C (-SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z.c)
 *     DpiDrtClearInternalPanelInfoCacheMux @ 0x140090328 (DpiDrtClearInternalPanelInfoCacheMux.c)
 *     DpiDrtModifyInternalPanelInfoCacheMux @ 0x140090340 (DpiDrtModifyInternalPanelInfoCacheMux.c)
 *     DpiDrtToggleMux @ 0x14009035C (DpiDrtToggleMux.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     DxgkpIsDrtEnabled @ 0x14019364C (DxgkpIsDrtEnabled.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x140198D0C (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x140198D7C (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x14019CD44 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     ?QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x14019E098 (-QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x14019E128 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1401A6CCC (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1401A72C8 (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AB7B0 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1401AF878 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401B4074 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B43B8 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401B8D08 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401C7320 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1401D47FC (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D52B0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D5688 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022EAE8 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x140250124 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E0DC (-MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1402997C0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x14031F390 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140339B80 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140388D10 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1403A8650 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1403A9020 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1403A9078 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1403A9C48 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403C420C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1403CA87C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x140416744 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1404275F4 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **this)
{
  __int64 AllocationSizeInSystemMemory; // rbx
  __int64 v7; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r15
  int StandardAllocation; // esi
  int v10; // edi
  struct DXGPROCESS *v11; // r15
  char IsDrtEnabled; // al
  int v13; // edx
  unsigned int v14; // edi
  int v15; // esi
  int v16; // eax
  __int64 v17; // rax
  const wchar_t *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  int MonitorDeviceObject; // eax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v26; // r15
  __int64 v27; // rax
  const wchar_t *v28; // r9
  char *v29; // r13
  DXGDEVICE *v30; // rdi
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // r8d
  char *v35; // r14
  __int64 v36; // r9
  __int64 v37; // rdx
  char *v38; // rax
  _OWORD *v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // r8d
  int v42; // edx
  struct _KTHREAD **v43; // rax
  __int64 v44; // r12
  struct DXGDEVICE *v45; // r15
  __int64 v46; // r9
  DXGDEVICEACCESSLOCKEXCLUSIVE *p_IoStatusBlock; // rcx
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct DXGCONTEXT *v49; // rdi
  __int64 v50; // rax
  const wchar_t *v51; // r9
  __int64 v52; // r10
  struct _KTHREAD **v53; // rax
  _QWORD *v54; // rax
  struct _KTHREAD **v55; // rax
  struct _KTHREAD **v56; // r15
  _QWORD *v57; // r13
  __int64 v58; // rax
  const wchar_t *v59; // r9
  __int64 v60; // r12
  __int64 v61; // rax
  int v62; // esi
  int v63; // edi
  int HostProcess; // eax
  __int64 v65; // r9
  int v66; // ecx
  unsigned int v67; // r8d
  struct _EX_RUNDOWN_REF **v68; // rax
  __int64 v69; // rcx
  struct _EX_RUNDOWN_REF **p_Object; // rcx
  struct _EX_RUNDOWN_REF **v71; // rax
  _BYTE *v72; // rax
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  struct _KTHREAD **v74; // rax
  NTSTATUS v75; // eax
  __int64 v76; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v78; // rax
  __int64 v79; // rcx
  struct DXGPROCESS *v80; // rax
  struct CCD_BTL *v81; // rax
  void *v82; // rdi
  int v83; // edx
  int v84; // ecx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v86; // rdi
  struct DXGPROCESS *v87; // rax
  unsigned int MonitorHash; // eax
  int v89; // ecx
  __int64 v90; // rdx
  int v91; // edi
  __int64 v92; // rcx
  __int16 v93; // di
  int v94; // eax
  unsigned int v95; // ecx
  int v96; // eax
  struct DXGHWQUEUE *v97; // rax
  struct DXGPROCESS *v98; // rax
  struct DXGDEVICE *v99; // rdi
  __int64 v100; // r9
  unsigned int v101; // r15d
  __int64 v102; // rax
  const wchar_t *v103; // r9
  int v104; // edi
  unsigned int v105; // edi
  struct DXGHWQUEUE *v106; // rsi
  struct _D3DDDI_ALLOCATIONLIST *v107; // r12
  unsigned __int8 *v108; // rax
  struct DXGCONTEXT *v109; // r10
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v111; // rdi
  struct DXGALLOCATION **Elements; // rax
  struct DXGHWQUEUE **HeadIterator; // rax
  DXGCONTEXT *v114; // r10
  struct DXGHWQUEUE *v115; // rdx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  unsigned int v117; // edx
  int v118; // eax
  int v119; // eax
  RAPID_HPD_MANAGER *v120; // rsi
  __int64 v121; // rcx
  int v122; // edx
  unsigned __int8 v123; // [rsp+50h] [rbp-4C8h] BYREF
  PVOID v124[2]; // [rsp+58h] [rbp-4C0h] BYREF
  struct DXGCONTEXT *v125; // [rsp+68h] [rbp-4B0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-4A8h] BYREF
  struct DXGHWQUEUE *v127[2]; // [rsp+78h] [rbp-4A0h] BYREF
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+88h] [rbp-490h] BYREF
  _BYTE v129[24]; // [rsp+98h] [rbp-480h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-468h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v131[2]; // [rsp+C0h] [rbp-458h] BYREF
  int v132; // [rsp+D0h] [rbp-448h]
  _BYTE v133[24]; // [rsp+D8h] [rbp-440h] BYREF
  struct _KEVENT Event; // [rsp+F0h] [rbp-428h] BYREF
  PVOID P; // [rsp+110h] [rbp-408h] BYREF
  _BYTE v136[256]; // [rsp+118h] [rbp-400h] BYREF
  int v137; // [rsp+218h] [rbp-300h]
  unsigned __int8 v138[80]; // [rsp+220h] [rbp-2F8h] BYREF
  __int128 v139; // [rsp+270h] [rbp-2A8h]
  _BYTE v140[424]; // [rsp+280h] [rbp-298h] BYREF
  _BYTE v141[160]; // [rsp+430h] [rbp-E8h] BYREF

  AllocationSizeInSystemMemory = 0LL;
  LOBYTE(v131[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v131, 0LL, 0x2Du, 0);
  v8 = v131[1];
  StandardAllocation = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( !g_OSTestSigningEnabled && !DxgkpIsDrtEnabled() )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1910;
      goto LABEL_205;
    }
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v7) + 102) & 0x100) != 0 )
    {
      v20 = *((_DWORD *)a2 + 2);
      if ( v20 != 16 && v20 != 29 && v20 != 49 )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 299;
LABEL_21:
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v131);
        return -1073741811LL;
      }
    }
    v22 = *((int *)a2 + 2);
    if ( (int)v22 <= 26 )
    {
      if ( (_DWORD)v22 != 26 )
      {
        if ( (int)v22 <= 15 )
        {
          if ( (_DWORD)v22 == 15 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0xA8u )
            {
              v41 = *((_DWORD *)a2 + 4);
              if ( v41 < *((_DWORD *)a1 + 852) )
              {
                v42 = *((_DWORD *)a2 + 3);
                switch ( v42 )
                {
                  case 0:
                    DXGADAPTER::ForcePStateAcrossNodes(a1, *((_DWORD *)a2 + 6));
                    goto LABEL_445;
                  case 1:
                  case 2:
                  case 3:
                    DXGADAPTER::ForcePState((__int64)a1, v42, v41, *((_DWORD *)a2 + 6));
                    goto LABEL_445;
                  case 4:
                    *((_DWORD *)a2 + 7) = *((_DWORD *)a1 + 1120);
                    goto LABEL_445;
                  case 5:
                    DXGADAPTER::QueryPStateEngineData(
                      a1,
                      *((_DWORD *)a2 + 5),
                      (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
                      (unsigned int *)a2 + 4);
                    goto LABEL_445;
                }
              }
            }
            goto LABEL_205;
          }
          if ( (int)v22 <= 6 )
          {
            if ( (_DWORD)v22 != 6 )
            {
              if ( (_DWORD)v22 != 1 )
              {
                if ( (_DWORD)v22 != 2 )
                {
                  switch ( (_DWORD)v22 )
                  {
                    case 3:
                      if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
                        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
                      StandardAllocation = COREADAPTERACCESS::AcquireExclusive((__int64)this, 1LL);
                      if ( StandardAllocation >= 0 )
                        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
                      goto LABEL_445;
                    case 4:
                      if ( *((_DWORD *)a2 + 1) >= 0x10u )
                      {
                        v23 = *((_DWORD *)a2 + 3);
                        if ( v23 && v23 <= 0x400 )
                        {
                          g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                          goto LABEL_445;
                        }
                        WdLogSingleEntry0(3LL);
                        WdLogGlobalForLineNumber = 384;
                      }
                      else
                      {
                        WdLogSingleEntry0(3LL);
                        WdLogGlobalForLineNumber = 375;
                      }
                      goto LABEL_205;
                    case 5:
                      if ( *((_DWORD *)a2 + 1) >= 0x14u )
                      {
                        g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
                        goto LABEL_445;
                      }
                      WdLogSingleEntry0(3LL);
                      WdLogGlobalForLineNumber = 398;
LABEL_205:
                      StandardAllocation = -1073741811;
                      goto LABEL_445;
                  }
LABEL_307:
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 1901;
                  goto LABEL_205;
                }
LABEL_321:
                StandardAllocation = -1073741637;
                goto LABEL_445;
              }
              MonitorDeviceObject = MonitorDRTTest(a1, a2, v8);
              goto LABEL_47;
            }
            if ( *((_DWORD *)a2 + 1) < 0x114u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 472;
              goto LABEL_205;
            }
            Current = DXGPROCESS::GetCurrent(v22);
            v26 = Current;
            if ( !Current )
            {
              WdLogSingleEntry0(2LL);
              v27 = 480LL;
LABEL_52:
              v28 = L"Cannot get the current DXGPROCESS";
LABEL_53:
              WdLogGlobalForLineNumber = v27;
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v27, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_205;
            }
            v29 = (char *)Current + 216;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v29, 0LL);
            *((_QWORD *)v29 + 1) = KeGetCurrentThread();
            v30 = 0LL;
            v124[0] = 0LL;
            v31 = *((_DWORD *)a2 + 3);
            if ( v31 )
            {
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                (DXGDEVICEBYHANDLE *)DeviceObject,
                v31,
                (struct _KTHREAD **)v26,
                (struct DXGDEVICE **)v124);
              v30 = (DXGDEVICE *)v124[0];
              if ( !v124[0] )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 496;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"The device handle is invalid: 0x%I64x",
                  *((unsigned int *)a2 + 3),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                StandardAllocation = -1073741811;
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)DeviceObject);
                *((_QWORD *)v29 + 1) = 0LL;
LABEL_57:
                ExReleasePushLockExclusiveEx(v29, 0LL);
                KeLeaveCriticalRegion();
                goto LABEL_445;
              }
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)DeviceObject);
            }
            if ( v30
              || (v30 = (DXGDEVICE *)((*((_QWORD *)v26 + 40) - 24LL) & -(__int64)(*((_QWORD *)v26 + 40) != 0LL))) != 0LL )
            {
              DXGDEVICE::GetContexts(v30, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
              *((_DWORD *)a2 + 3) = *((_DWORD *)v30 + 117);
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 507;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"The process does not have any devices",
                507LL,
                0LL,
                0LL,
                0LL,
                0LL);
              StandardAllocation = -1073741811;
            }
            *((_QWORD *)v26 + 28) = 0LL;
            goto LABEL_57;
          }
          switch ( (_DWORD)v22 )
          {
            case 0xA:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 852);
                goto LABEL_445;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 415;
              goto LABEL_205;
            case 0xB:
              v34 = *((_DWORD *)a1 + 852);
              if ( v34 && *((unsigned int *)a2 + 1) >= 344 * (unsigned __int64)(v34 - 1) + 360 )
              {
                v35 = (char *)a2 + 352;
                v36 = v34;
                do
                {
                  v37 = *((_QWORD *)a1 + 408);
                  v38 = v35 - 336;
                  v39 = (_OWORD *)(AllocationSizeInSystemMemory + v37 + 8);
                  v40 = 2LL;
                  do
                  {
                    *(_OWORD *)v38 = *v39;
                    *((_OWORD *)v38 + 1) = v39[1];
                    *((_OWORD *)v38 + 2) = v39[2];
                    *((_OWORD *)v38 + 3) = v39[3];
                    *((_OWORD *)v38 + 4) = v39[4];
                    *((_OWORD *)v38 + 5) = v39[5];
                    *((_OWORD *)v38 + 6) = v39[6];
                    v38 += 128;
                    *((_OWORD *)v38 - 1) = v39[7];
                    v39 += 8;
                    --v40;
                  }
                  while ( v40 );
                  *(_OWORD *)v38 = *v39;
                  *((_OWORD *)v38 + 1) = v39[1];
                  *((_OWORD *)v38 + 2) = v39[2];
                  *((_OWORD *)v38 + 3) = v39[3];
                  *((_OWORD *)v38 + 4) = v39[4];
                  *(_DWORD *)v35 = *(_DWORD *)(AllocationSizeInSystemMemory + v37 + 344);
                  v35[4] = *(_BYTE *)(AllocationSizeInSystemMemory + v37 + 356);
                  AllocationSizeInSystemMemory += 520LL;
                  v35 += 344;
                  --v36;
                }
                while ( v36 );
                goto LABEL_445;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 434;
              goto LABEL_205;
            case 0xC:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v33 = *((_QWORD *)a1 + 396);
                if ( v33 )
                  *(_BYTE *)(v33 + 1024) = *((_BYTE *)a2 + 12);
                goto LABEL_445;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 453;
              goto LABEL_205;
          }
          if ( (_DWORD)v22 != 14 )
            goto LABEL_307;
          if ( *((_DWORD *)a2 + 1) < 0x14u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1045;
            goto LABEL_205;
          }
          v32 = *((_QWORD *)a1 + 27);
          if ( v32 )
          {
            MonitorDeviceObject = DxgkHandleThermalCoolingDrtEscape(v32, (__int64)a2);
            goto LABEL_47;
          }
LABEL_196:
          StandardAllocation = -1073741823;
          goto LABEL_445;
        }
        if ( (int)v22 <= 21 )
        {
          if ( (_DWORD)v22 == 21 )
          {
            if ( *((_DWORD *)a2 + 1) < 0x18u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 777;
              goto LABEL_205;
            }
            v74 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v22);
            if ( !v74 )
            {
              WdLogSingleEntry0(2LL);
              v27 = 785LL;
              goto LABEL_52;
            }
            v124[0] = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
              (DXGDEVICEBYHANDLE *)DeviceObject,
              *((_DWORD *)a2 + 3),
              v74,
              (struct DXGDEVICE **)v124);
            if ( !v124[0] )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 796;
              goto LABEL_143;
            }
            Object = 0LL;
            v75 = ObReferenceObjectByHandle(
                    *((HANDLE *)a2 + 2),
                    0x1F0003u,
                    (POBJECT_TYPE)ExEventObjectType,
                    1,
                    &Object,
                    0LL);
            StandardAllocation = v75;
            if ( v75 < 0 )
            {
              v76 = v75;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 810;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"hEvent is invalid, returning 0x%I64x",
                v76,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_145;
            }
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock,
              (struct DXGDEVICE *)v124[0]);
            KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
            goto LABEL_152;
          }
          if ( (_DWORD)v22 != 16 )
          {
            if ( (_DWORD)v22 != 17 )
            {
              if ( (_DWORD)v22 == 18 )
              {
                if ( *((_DWORD *)a2 + 1) < 0x10u )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 1014;
                  goto LABEL_205;
                }
                v53 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v22);
                if ( !v53 )
                {
                  WdLogSingleEntry0(2LL);
                  v27 = 1022LL;
                  goto LABEL_52;
                }
                v124[0] = 0LL;
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                  (DXGDEVICEBYHANDLE *)DeviceObject,
                  *((_DWORD *)a2 + 3),
                  v53,
                  (struct DXGDEVICE **)v124);
                v54 = v124[0];
                if ( v124[0] )
                {
                  *((_BYTE *)v124[0] + 1919) = 1;
                  *(_BYTE *)(v54[5] + 337LL) = 1;
LABEL_145:
                  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)DeviceObject);
                  goto LABEL_445;
                }
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 1033;
                goto LABEL_143;
              }
              if ( (_DWORD)v22 == 19 )
              {
                if ( *((_DWORD *)a2 + 1) < 0x10u )
                  goto LABEL_205;
                if ( g_OSTestSigningEnabled )
                {
                  *((_BYTE *)DXGGLOBAL::GetGlobal() + 1600) = *((_DWORD *)a2 + 3) != 0;
                  goto LABEL_445;
                }
                goto LABEL_321;
              }
              if ( *((_DWORD *)a2 + 1) < 0x18u )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 685;
                goto LABEL_205;
              }
              v43 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v22);
              v44 = (__int64)v43;
              if ( !v43 )
              {
                WdLogSingleEntry0(2LL);
                v27 = 693LL;
                goto LABEL_52;
              }
              v124[0] = 0LL;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                (DXGDEVICEBYHANDLE *)DeviceObject,
                *((_DWORD *)a2 + 3),
                v43,
                (struct DXGDEVICE **)v124);
              v45 = (struct DXGDEVICE *)v124[0];
              if ( !v124[0] )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 704;
LABEL_143:
                v58 = *((unsigned int *)a2 + 3);
                v59 = L"Cannot get the device by handle: 0x%I64x";
LABEL_144:
                DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v59, v58, 0LL, 0LL, 0LL, 0LL);
                StandardAllocation = -1073741811;
                goto LABEL_145;
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v127, v45);
              DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                (DXGADAPTERSTOPRESETLOCKSHARED *)v129,
                *(struct DXGADAPTER **)(*((_QWORD *)v45 + 2) + 16LL),
                1);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v141, (__int64)v45, 0, v46, 0);
              StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v141, 0LL);
              if ( StandardAllocation < 0 )
                goto LABEL_112;
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v125, 0LL);
              AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                            v44,
                                                            (DXGALLOCATIONREFERENCE *)v124,
                                                            *((_DWORD *)a2 + 4));
              DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v125, AllocationSafe);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v124);
              v49 = v125;
              if ( v125 )
              {
                v52 = *((_QWORD *)v45 + 2);
                if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v125 + 1) + 16LL) + 16LL) != *(_QWORD *)(v52 + 16) )
                {
                  StandardAllocation = -1073741811;
                  WdLogSingleEntry3(2LL, v45, v125, -1073741811LL);
                  WdLogGlobalForLineNumber = 732;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                    (__int64)v45,
                    (__int64)v49,
                    -1073741811LL,
                    0LL,
                    0LL);
                  goto LABEL_116;
                }
                if ( *((_BYTE *)a2 + 20) )
                {
                  if ( (*((_DWORD *)v125 + 18) & 0x800) == 0 )
                  {
                    LODWORD(Object) = 0;
                    v124[0] = 0LL;
                    StandardAllocation = VIDMM_EXPORT::VidMmPinAllocation(
                                           *(VIDMM_EXPORT **)(v52 + 760),
                                           *(struct VIDMM_GLOBAL **)(v52 + 768),
                                           *((struct VIDMM_MULTI_ALLOC **)v125 + 3),
                                           0LL,
                                           (unsigned int *)&Object,
                                           (union _LARGE_INTEGER *)v124,
                                           0LL);
                    if ( StandardAllocation >= 0 )
                      *((_DWORD *)v49 + 18) |= 0x800u;
                    goto LABEL_116;
                  }
                  WdLogSingleEntry0(2LL);
                  v50 = 741LL;
                  WdLogGlobalForLineNumber = 741;
                  v51 = L"Allocation is already pinned";
                }
                else
                {
                  if ( _bittest((const signed __int32 *)v125 + 18, 0xBu) )
                  {
                    VIDMM_EXPORT::VidMmUnpinAllocation(
                      *(VIDMM_EXPORT **)(v52 + 760),
                      *(struct VIDMM_GLOBAL **)(v52 + 768),
                      *((struct VIDMM_MULTI_ALLOC **)v125 + 3));
                    *((_DWORD *)v49 + 18) &= ~0x800u;
                    goto LABEL_116;
                  }
                  WdLogSingleEntry0(2LL);
                  v50 = 762LL;
                  WdLogGlobalForLineNumber = 762;
                  v51 = L"Allocation is not pinned";
                }
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 723;
                v50 = *((unsigned int *)a2 + 4);
                v51 = L"Cannot get the allocation by handle: 0x%I64x";
              }
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v51, v50, 0LL, 0LL, 0LL, 0LL);
              StandardAllocation = -1073741811;
LABEL_116:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v125);
LABEL_112:
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
              p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)v127;
LABEL_153:
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE(p_IoStatusBlock);
              goto LABEL_145;
            }
LABEL_355:
            if ( *((_DWORD *)a2 + 1) < 0xA8u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 856;
              goto LABEL_21;
            }
            v98 = DXGPROCESS::GetCurrent(v22);
            v127[0] = v98;
            if ( !v98 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 863;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot get the current DXGPROCESS",
                863LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_21;
            }
            v125 = 0LL;
            DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
              (DXGCONTEXTBYHANDLE *)&IoStatusBlock,
              *((_DWORD *)a2 + 3),
              (struct _KTHREAD **)v98,
              &v125,
              0,
              1);
            if ( !v125 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 872;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot get the context",
                872LL,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_368:
              StandardAllocation = -1073741811;
LABEL_400:
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&IoStatusBlock);
              goto LABEL_445;
            }
            if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
            v99 = (struct DXGDEVICE *)*((_QWORD *)v125 + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject,
              v99);
            DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v129, (struct _KTHREAD **)v125 + 55, 0);
            DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v129);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v133, a1, 1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v141, (__int64)v99, 0, v100, 0);
            StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v141, 0LL);
            if ( StandardAllocation >= 0 )
            {
              v101 = *((_DWORD *)a2 + 8);
              if ( v101 > 0x10 )
              {
                WdLogSingleEntry0(2LL);
                v102 = 894LL;
                v103 = L"Invalid number of allocations";
LABEL_366:
                WdLogGlobalForLineNumber = v102;
                DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v103, v102, 0LL, 0LL, 0LL, 0LL);
LABEL_367:
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v133);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v129);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
                goto LABEL_368;
              }
              v104 = *((_DWORD *)a2 + 4);
              if ( !v104 && *((_DWORD *)a2 + 2) == 17 )
              {
                WdLogSingleEntry0(2LL);
                v102 = 900LL;
                v103 = L"Invalid command buffer size";
                goto LABEL_366;
              }
              if ( *((_BYTE *)a1 + 209) )
              {
                *((_DWORD *)a2 + 3) = *((_DWORD *)v125 + 7);
                v105 = 0;
                if ( !v101 )
                {
LABEL_377:
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v133);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v129);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
                  StandardAllocation = 0;
                  goto LABEL_400;
                }
                v106 = v127[0];
                while ( 1 )
                {
                  DXGPROCESS::GetAllocationSafe(
                    (__int64)v106,
                    (DXGALLOCATIONREFERENCE *)v124,
                    *((_DWORD *)a2 + 2 * v105 + 9));
                  if ( !v124[0] )
                    break;
                  *((_DWORD *)a2 + 2 * v105 + 9) = *((_DWORD *)v124[0] + 5);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v124);
                  if ( ++v105 >= *((_DWORD *)a2 + 8) )
                    goto LABEL_377;
                }
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 914;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Invalid allocation handle",
                  914LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v124);
                goto LABEL_367;
              }
              memset(v140, 0, 0x170uLL);
              *(_DWORD *)v140 = *((_DWORD *)a2 + 3);
              *(_DWORD *)&v140[12] = v101;
              v107 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              *(_QWORD *)&v140[40] = (char *)a2 + 36;
              *(_DWORD *)&v140[68] |= 0x20u;
              if ( *((_DWORD *)a2 + 2) == 17 )
              {
                v108 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
              }
              else
              {
                v104 = 80;
                memset(v138, 0, sizeof(v138));
                *(_DWORD *)&v138[4] = 80;
                *(_DWORD *)v138 = 1;
                *(_QWORD *)&v138[40] = 0x100000000LL;
                *(_DWORD *)&v138[48] = 1;
                *(_OWORD *)&v138[8] = *(_OWORD *)((char *)a2 + 168);
                *(_OWORD *)&v138[24] = *(_OWORD *)&v138[8];
                *(_QWORD *)&v138[68] = *((_QWORD *)a2 + 25);
                *(_QWORD *)&v138[56] = &v138[24];
                *(_WORD *)&v138[64] = 1;
                v108 = v138;
              }
              *(_QWORD *)&v140[24] = v108;
              *(_DWORD *)&v140[8] = v104;
              IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v125 + 2) + 16LL) + 16LL));
              v123 = IsDxgmms2;
              LODWORD(Object) = v101;
              P = 0LL;
              v137 = 0;
              v111 = 0LL;
              v124[0] = 0LL;
              if ( IsDxgmms2 )
              {
                Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                      (__int64 *)&P,
                                                      v101);
                v111 = Elements;
                v124[0] = Elements;
                if ( !Elements )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 972;
                  if ( P != v136 && P )
                    ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  v137 = 0;
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v133);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v129);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
                  StandardAllocation = -1073741801;
                  goto LABEL_400;
                }
                StandardAllocation = DxgkReferenceAllocationList(
                                       (unsigned int *)&Object,
                                       v107,
                                       Elements,
                                       *((struct DXGDEVICE **)v125 + 2));
                v109 = v125;
              }
              if ( StandardAllocation >= 0 )
              {
                HeadIterator = (struct DXGHWQUEUE **)DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator(
                                                       (_QWORD *)v109 + 50,
                                                       &Event);
                v115 = HeadIterator[1];
                if ( v115 == *HeadIterator )
                  v115 = 0LL;
                v127[0] = v115;
                *(_OWORD *)&Event.Header.Lock = 0LL;
                StandardAllocation = DXGCONTEXT::Render(
                                       v114,
                                       (struct _D3DKMT_RENDER *)v140,
                                       (struct COREDEVICEACCESS *)v141,
                                       (struct DXGADAPTERSTOPRESETLOCKSHARED *)v133,
                                       &v125,
                                       v111,
                                       v127);
                v132 = StandardAllocation;
              }
              if ( IsDxgmms2 )
                DxgkUnreferenceAllocationList((unsigned int)Object, (struct _EX_RUNDOWN_REF **)v111);
              if ( P != v136 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v137 = 0;
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v133);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v129);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
            goto LABEL_400;
          }
          if ( *((_DWORD *)a2 + 1) < 0x60u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 522;
            goto LABEL_205;
          }
          v55 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v22);
          v56 = v55;
          if ( !v55 )
          {
            WdLogSingleEntry0(2LL);
            v27 = 530LL;
            goto LABEL_52;
          }
          v124[0] = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
            (DXGDEVICEBYHANDLE *)DeviceObject,
            *((_DWORD *)a2 + 3),
            v55,
            (struct DXGDEVICE **)v124);
          v57 = v124[0];
          if ( !v124[0] )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 541;
            goto LABEL_143;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          LODWORD(v125) = 0;
          LODWORD(Object) = 0;
          v60 = 0LL;
          v61 = *(_QWORD *)(v57[2] + 16LL);
          v124[0] = (PVOID)v61;
          if ( *(_BYTE *)(v61 + 209) )
          {
            *(_OWORD *)v138 = *(_OWORD *)a2;
            *(_OWORD *)&v138[16] = *((_OWORD *)a2 + 1);
            *(_OWORD *)&v138[32] = *((_OWORD *)a2 + 2);
            *(_OWORD *)&v138[48] = *((_OWORD *)a2 + 3);
            *(_OWORD *)&v138[64] = *((_OWORD *)a2 + 4);
            v139 = *((_OWORD *)a2 + 5);
            *(_DWORD *)&v138[12] = *((_DWORD *)v57 + 118);
            v62 = *(_DWORD *)&v138[12];
            v63 = *(_DWORD *)(v61 + 4800);
            HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v56);
            if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                        (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)v124[0] + 4712),
                        HostProcess,
                        v63,
                        v62,
                        0,
                        D3DKMT_ESCAPE_DRT_TEST,
                        0,
                        0x60u,
                        v138) < 0 )
            {
              WdLogSingleEntry0(2LL);
              v58 = 572LL;
              WdLogGlobalForLineNumber = 572;
              v59 = L"VmBusSendEscape failed to create standard allocation";
              goto LABEL_144;
            }
            LODWORD(v125) = *(_DWORD *)&v138[44];
            LODWORD(Object) = *(_DWORD *)&v138[48];
            v60 = v139;
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock,
            (struct DXGDEVICE *)v57);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v129,
            *(struct DXGADAPTER **)(v57[2] + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v141, (__int64)v57, 0, v65, 0);
          StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v141, 0LL);
          if ( StandardAllocation >= 0 )
          {
            memset(v140, 0, sizeof(v140));
            *(_DWORD *)&v140[4] = *((_DWORD *)a2 + 3);
            *(_DWORD *)&v140[16] = 4;
            *(_QWORD *)&v140[24] = (char *)a2 + 16;
            v66 = *(_DWORD *)v140 | 0x200;
            *(_DWORD *)v140 |= 0x200u;
            if ( *((_BYTE *)a2 + 60) )
            {
              v66 |= 1u;
              *(_DWORD *)v140 = v66;
            }
            if ( *((_BYTE *)a2 + 65) )
            {
              v66 |= 0x20u;
              *(_DWORD *)v140 = v66;
            }
            if ( *((_BYTE *)a2 + 61) )
            {
              v66 |= 0x400u;
              *(_DWORD *)v140 = v66;
            }
            if ( *((_BYTE *)a2 + 62) )
            {
              v66 |= 0x1000u;
              *(_DWORD *)v140 = v66;
            }
            if ( *((_BYTE *)a2 + 63) )
            {
              v66 |= 0x2000u;
              *(_DWORD *)v140 = v66;
            }
            if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
              *(_DWORD *)v140 = v66 | 0x8000;
            v140[408] = *((_BYTE *)a2 + 64);
            *(_DWORD *)&v140[384] = *((_DWORD *)a2 + 14);
            *(_DWORD *)&v140[388] = *((_DWORD *)a2 + 17);
            *(_DWORD *)&v140[380] = *((_DWORD *)a2 + 10);
            *(_DWORD *)&v140[392] = *((_DWORD *)a2 + 18);
            *(_QWORD *)&v140[400] = *((_QWORD *)a2 + 10);
            StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                   (DXGDEVICE *)v57,
                                   (struct _D3DKM_CREATESTANDARDALLOCATION *)v140,
                                   (struct COREDEVICEACCESS *)v141);
            if ( StandardAllocation >= 0 )
            {
              v67 = *(_DWORD *)&v140[52];
              *((_DWORD *)a2 + 11) = *(_DWORD *)&v140[52];
              *((_DWORD *)a2 + 12) = *(_DWORD *)&v140[8];
              *((_DWORD *)a2 + 13) = *(_DWORD *)&v140[12];
              if ( ((_DWORD)v56[51] & 0x100) != 0 )
              {
                Object = 0LL;
                v68 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                   (__int64)v56,
                                                   (DXGALLOCATIONREFERENCE *)v124,
                                                   v67);
                DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&Object, v68);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v124);
                if ( Object )
                {
                  v69 = v57[2];
                  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 16LL) == *(_QWORD *)(v69 + 16) )
                    AllocationSizeInSystemMemory = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                                                     *(VIDMM_EXPORT **)(v69 + 760),
                                                     *((const struct VIDMM_MULTI_ALLOC **)Object + 3),
                                                     0);
                }
                *((_QWORD *)a2 + 10) = AllocationSizeInSystemMemory;
                p_Object = (struct _EX_RUNDOWN_REF **)&Object;
              }
              else
              {
                if ( !*((_BYTE *)v124[0] + 209) )
                  goto LABEL_151;
                v124[0] = 0LL;
                v71 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                   (__int64)v56,
                                                   (DXGALLOCATIONREFERENCE *)v127,
                                                   v67);
                DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v124, v71);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v127);
                v72 = v124[0];
                if ( v124[0] )
                {
                  *((_DWORD *)v124[0] + 5) = (_DWORD)v125;
                  v72[128] |= 4u;
                  *(_QWORD *)(*((_QWORD *)v72 + 6) + 112LL) = v60;
                  *((_DWORD *)v72 + 30) = v60;
                }
                v125 = 0LL;
                ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                            (__int64)v56,
                                                            (DXGRESOURCEREFERENCE *)v127,
                                                            *((_DWORD *)a2 + 12));
                DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v125, ResourceSafe);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v127);
                if ( v125 )
                  *((_DWORD *)v125 + 5) = (_DWORD)Object;
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v125);
                p_Object = (struct _EX_RUNDOWN_REF **)v124;
              }
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(p_Object);
              goto LABEL_151;
            }
            StandardAllocation = -1073741811;
          }
LABEL_151:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
LABEL_152:
          p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock;
          goto LABEL_153;
        }
        if ( (_DWORD)v22 != 22 )
        {
          if ( (_DWORD)v22 == 23 )
          {
            if ( *((_DWORD *)a2 + 1) < 0x30u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 364;
              goto LABEL_205;
            }
            MonitorDeviceObject = DxgkpSendTestVmBusCommand(a1, a2, v19);
            goto LABEL_47;
          }
          if ( (_DWORD)v22 == 24 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
              goto LABEL_445;
            }
            goto LABEL_205;
          }
          if ( *((_DWORD *)a2 + 1) < 0x1Cu )
            goto LABEL_205;
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          DeviceObject[0] = 0LL;
          v124[0] = 0LL;
          MonitorDeviceObject = DxgkGetMonitorDeviceObject(
                                  (const struct _LUID *)((char *)a2 + 12),
                                  *((_DWORD *)a2 + 5),
                                  (struct _FILE_OBJECT **)v124,
                                  DeviceObject);
          if ( MonitorDeviceObject < 0 )
          {
LABEL_47:
            StandardAllocation = MonitorDeviceObject;
            goto LABEL_445;
          }
          AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject[0]);
          IoStatusBlock = 0LL;
          v78 = IoBuildDeviceIoControlRequest(
                  0x232433u,
                  AttachedDeviceReference,
                  (char *)a2 + 24,
                  4u,
                  0LL,
                  0,
                  1u,
                  &Event,
                  &IoStatusBlock);
          if ( v78 )
          {
            StandardAllocation = IofCallDriver(AttachedDeviceReference, v78);
            if ( StandardAllocation == 259 )
            {
              while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                ;
              StandardAllocation = IoStatusBlock.Status;
            }
            ObfDereferenceObject(AttachedDeviceReference);
            ObfDereferenceObject(v124[0]);
            goto LABEL_445;
          }
          ObfDereferenceObject(AttachedDeviceReference);
          ObfDereferenceObject(v124[0]);
          goto LABEL_196;
        }
        v123 = 0;
        StandardAllocation = DxgkIsConsoleSessionDispBrokerEnabled((bool *)&v123);
        if ( StandardAllocation < 0 )
          goto LABEL_445;
        if ( !v123 )
        {
          v80 = DXGPROCESS::GetCurrent(v79);
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v129, v80);
          DXGUSERCRIT::Acquire((DXGUSERCRIT *)v129, 0);
          v81 = CCD_BTL::Global();
          CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v81 + 8));
          StandardAllocation = 0;
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v129);
          goto LABEL_445;
        }
        StandardAllocation = DxgkRequestDisplayPrivateTest();
        if ( StandardAllocation != -1073741772 )
          goto LABEL_445;
LABEL_444:
        StandardAllocation = 0;
        goto LABEL_445;
      }
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) < 0x14u )
          goto LABEL_205;
        v82 = 0LL;
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129, a1, 1);
        if ( *((_DWORD *)a1 + 50) != 1 )
          goto LABEL_220;
        v83 = *((_DWORD *)a2 + 3);
        if ( v83 == -1 )
        {
LABEL_219:
          v82 = (void *)*((_QWORD *)a1 + 27);
          ObfReferenceObject(v82);
LABEL_220:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
          if ( v82 )
          {
            LOBYTE(v127[0]) = 0;
            CDisplayScenarioContextScope::ContextScopeConstructor(v127, 0LL, 0x2Du, 0);
            LODWORD(Object) = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
            StandardAllocation = DxgkPowerOnOffMonitor((__int64)v82, 1u, (_DWORD *)a2 + 3, (int *)&Object, 1, v127[1]);
            ObfDereferenceObject(v82);
            CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v127);
            goto LABEL_445;
          }
          goto LABEL_196;
        }
        v123 = 0;
        StandardAllocation = DmmIsTargetInClientVidPnTopology(a1, v83, (bool *)&v123);
        if ( StandardAllocation >= 0 )
        {
          if ( !v123 )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
            goto LABEL_205;
          }
          goto LABEL_219;
        }
LABEL_296:
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129);
        goto LABEL_445;
      }
LABEL_251:
      StandardAllocation = -1073741790;
      goto LABEL_445;
    }
    if ( (int)v22 <= 44 )
    {
      if ( (_DWORD)v22 == 44 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x14u )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 824;
          goto LABEL_205;
        }
        if ( !DXGPROCESS::GetCurrent(v22) )
        {
          WdLogSingleEntry0(2LL);
          v27 = 831LL;
          goto LABEL_52;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129, a1, 1);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v92 = *(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL);
          *((_DWORD *)a2 + 3) = *(_DWORD *)(v92 + 284);
          *((_DWORD *)a2 + 4) = *(_DWORD *)(v92 + 4436);
          *(_DWORD *)(v92 + 4436) = 0;
        }
        else
        {
          StandardAllocation = -1073741130;
        }
        goto LABEL_296;
      }
      if ( (int)v22 <= 35 )
      {
        switch ( (_DWORD)v22 )
        {
          case 0x23:
            if ( g_OSTestSigningEnabled )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x18u )
              {
                if ( *((_QWORD *)a2 + 2) )
                  StandardAllocation = DxgkSetIndirectDisplayRenderAdapterByHandle(
                                         *((_DWORD *)a2 + 3),
                                         (struct _LUID *)a2 + 2);
                v124[0] = 0LL;
                DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v124, *((_DWORD *)a2 + 3));
                if ( v124[0] )
                {
                  v127[0] = 0LL;
                  ADAPTER_DISPLAY::GetPairedRenderAdapter(
                    *((ADAPTER_DISPLAY **)v124[0] + 395),
                    (struct DXGADAPTER_REFERENCE *)v127,
                    0LL);
                  if ( v127[0] )
                    AllocationSizeInSystemMemory = *(_QWORD *)((char *)v127[0] + 412);
                  *((_QWORD *)a2 + 2) = AllocationSizeInSystemMemory;
                  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v127, 0LL);
                }
                DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v124, 0LL);
                goto LABEL_445;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1509;
              goto LABEL_205;
            }
            goto LABEL_251;
          case 0x1C:
            if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
              goto LABEL_205;
            v87 = DXGPROCESS::GetCurrent(v22);
            if ( v87 )
            {
              *((_DWORD *)v87 + 102) = *((_DWORD *)v87 + 102) & 0xFFFFDFFF | (*((_BYTE *)a2 + 12) != 0 ? 0x2000 : 0);
              goto LABEL_445;
            }
            goto LABEL_251;
          case 0x1D:
            MonitorDeviceObject = DrtTestSignalEventCb((struct ADAPTER_RENDER **)a1, a2);
            goto LABEL_47;
        }
        if ( (_DWORD)v22 != 30 )
        {
          if ( (_DWORD)v22 != 31 )
          {
            if ( (_DWORD)v22 == 34 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v84 = *((_DWORD *)a2 + 3);
                if ( v84 == 1 || (unsigned int)(v84 - 2) <= 1 )
                {
                  if ( *((int *)a1 + 761) >= 2600 && *((_QWORD *)a1 + 395) && *((_QWORD *)a1 + 396) )
                  {
                    DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(v84);
                    v86 = DiagnosticInfoArgs;
                    if ( DiagnosticInfoArgs )
                    {
                      StandardAllocation = DXGADAPTER::DdiCollectDiagnosticInfo(a1, DiagnosticInfoArgs);
                      DxgFreeDiagnosticInfoArgs(v86);
                    }
                    else
                    {
                      StandardAllocation = -1073741801;
                    }
                  }
                  goto LABEL_445;
                }
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1408;
              }
              else
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1393;
              }
              goto LABEL_205;
            }
            goto LABEL_307;
          }
          if ( *((_DWORD *)a2 + 1) < 0x1Cu )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1379;
            goto LABEL_205;
          }
          MonitorDeviceObject = DrtTestUpdateRegistryForNewOverride(
                                  *(struct _LUID *)((char *)a2 + 12),
                                  *((_DWORD *)a2 + 5),
                                  *((_DWORD *)a2 + 6));
          goto LABEL_47;
        }
LABEL_420:
        if ( !_bittest((const signed __int32 *)a1 + 627, 0xBu) )
          goto LABEL_445;
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v129, a1, 1);
        if ( !*((_QWORD *)a1 + 396) || *((_DWORD *)a1 + 50) != 1 )
          goto LABEL_296;
        v118 = *((_DWORD *)a2 + 2);
        if ( v118 == 30 )
        {
          v119 = ADAPTER_RENDER::EnableIommuForDrt(*((ADAPTER_RENDER **)a1 + 396), *((struct SYSMM_ADAPTER **)a1 + 28));
        }
        else
        {
          if ( v118 != 46 )
            goto LABEL_296;
          v119 = ADAPTER_RENDER::DisableIommuForDrt(*((ADAPTER_RENDER **)a1 + 396), *((struct SYSMM_ADAPTER **)a1 + 28));
        }
        StandardAllocation = v119;
        goto LABEL_296;
      }
      if ( (_DWORD)v22 == 36 )
      {
        MonitorDeviceObject = ForceGpupTdr(a2);
        goto LABEL_47;
      }
      if ( (_DWORD)v22 == 37 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x14u )
        {
          v90 = *(_QWORD *)(*((_QWORD *)a1 + 395) + 464LL);
          if ( v90 )
            v91 = *(_DWORD *)(3040LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v90 + 8) + 136);
          else
            v91 = -1;
          *((_DWORD *)a2 + 4) = v91;
          goto LABEL_445;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1551;
        goto LABEL_205;
      }
      if ( (_DWORD)v22 != 38 )
      {
        if ( (_DWORD)v22 != 40 )
          goto LABEL_307;
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1567;
          goto LABEL_205;
        }
        DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel = *((_DWORD *)a2 + 3);
        DXGTRACKEDWORKLOAD::m_bypassPowerLevel = *((_DWORD *)a2 + 4);
        *((_DWORD *)a2 + 5) = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadPhysicalAdapterIndex;
        MonitorHash = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadNodeOrdinal;
LABEL_268:
        *((_DWORD *)a2 + 6) = MonitorHash;
        goto LABEL_445;
      }
      if ( *((_DWORD *)a2 + 1) < 0x30u )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1435;
        goto LABEL_205;
      }
      if ( *((int *)a1 + 761) < 2700 || !DXGADAPTER::IsFullWDDMAdapter(a1) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1446;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DRT Test: Test is only valid for full WDDM2.7 and above adapters.",
          1446LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1454;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DRT Test: Wrong value of ArgSize passed for D3DKMT_DRT_TEST_COMMAND_DISPLAY_DIAGNOSTICS_TEST.",
          1454LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v89 = *((_DWORD *)a2 + 3);
      if ( !v89 )
      {
        *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(*((ADAPTER_DISPLAY **)a1 + 395))
                             ? 0xC00000BB
                             : 0;
        goto LABEL_445;
      }
      if ( v89 != 1 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1487;
        goto LABEL_205;
      }
      v127[0] = *((struct DXGHWQUEUE **)a2 + 4);
      v124[0] = (PVOID)0x10800000001LL;
      v124[1] = v127;
      StandardAllocation = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                             *((ADAPTER_DISPLAY **)a1 + 395),
                             (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v124);
      *((_DWORD *)a2 + 11) = StandardAllocation;
      if ( StandardAllocation >= 0 )
        goto LABEL_445;
      WdLogSingleEntry0(2LL);
      v17 = 1480LL;
      v18 = L"DRT Test: DdiGetDisplayStateIntrusive failed.";
LABEL_411:
      WdLogGlobalForLineNumber = v17;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_445;
    }
    switch ( (_DWORD)v22 )
    {
      case '-':
        if ( *((_DWORD *)a2 + 1) < 0x40u )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1580;
          goto LABEL_205;
        }
        v120 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 305640);
        if ( !RAPID_HPD_MANAGER::IsEnabled(v120) )
        {
          StandardAllocation = -1073740959;
          goto LABEL_445;
        }
        if ( *((_DWORD *)a2 + 5) )
        {
          if ( *((_DWORD *)a2 + 6) )
            v122 = 2 - (*((_DWORD *)a2 + 7) != 0);
          else
            v122 = 0;
          RAPID_HPD_MANAGER::SetTestControl(v121, v122);
        }
        if ( *((_DWORD *)a2 + 3) )
          RAPID_HPD_MANAGER::ReportTriggerEvent((__int64)v120, 4u, 0LL);
        if ( *((_DWORD *)a2 + 4) )
          RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v120, 4u, 0LL);
        if ( *((_DWORD *)a2 + 8) )
          RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
            v120,
            1u,
            (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 36),
            (struct _GUID *)((char *)a2 + 40),
            0LL);
        *((_DWORD *)a2 + 14) = *((_DWORD *)v120 + 6);
        *((_DWORD *)a2 + 15) = *((_DWORD *)v120 + 7);
        goto LABEL_444;
      case '.':
        goto LABEL_420;
      case '/':
        v117 = *((_DWORD *)a2 + 1);
        if ( v117 < 0x23 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1643;
          goto LABEL_205;
        }
        if ( v117 < 20 * *((_DWORD *)a2 + 7) + 35 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1651;
          goto LABEL_205;
        }
        MonitorHash = DxgkGetMonitorHash(
                        *(struct _LUID *)((char *)a2 + 12),
                        *((_DWORD *)a2 + 5),
                        (unsigned int *)a2 + 7,
                        (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 32));
        goto LABEL_268;
      case '0':
        if ( a1 )
        {
          if ( !this || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[11]) )
          {
            WdLogSingleEntry0(2LL);
            v27 = 1674LL;
            v28 = L"Caller should not set the HardwareAccess so DxgkEscape will acquire the adapter lock shared.";
            goto LABEL_53;
          }
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            WdLogSingleEntry0(2LL);
            v27 = 1682LL;
            v28 = L"DRT test specified invalid buffer size for D3DKMT_DRT_RESET_DISPLAY_OWNERSHIP.";
            goto LABEL_53;
          }
          if ( *((_DWORD *)a2 + 3) >= *(_DWORD *)(*((_QWORD *)a1 + 395) + 96LL) )
          {
            WdLogSingleEntry0(2LL);
            v27 = 1690LL;
            v28 = L"Caller specified VidPn source ID is invalid.";
            goto LABEL_53;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          StandardAllocation = COREADAPTERACCESS::AcquireExclusive((__int64)this, 2LL);
          if ( StandardAllocation >= 0 )
          {
            VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                                 *((ADAPTER_DISPLAY **)a1 + 395),
                                 *((_DWORD *)a2 + 3));
            if ( VidPnSourceOwner )
              ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(
                *((PERESOURCE ***)a1 + 395),
                VidPnSourceOwner,
                *((_DWORD *)a2 + 3));
            goto LABEL_444;
          }
          WdLogSingleEntry0(2LL);
          v17 = 1704LL;
          v18 = L"Failed to acquire the adapter core access exclusively.";
          goto LABEL_411;
        }
        WdLogSingleEntry0(2LL);
        v27 = 1667LL;
LABEL_314:
        v28 = L"Caller should specify the adapter.";
        goto LABEL_53;
      case '1':
        if ( *((_DWORD *)a2 + 1) < 0xD0u )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 848;
          goto LABEL_21;
        }
        goto LABEL_355;
      case '2':
        MonitorDeviceObject = DpiDrtToggleMux();
        goto LABEL_47;
    }
    if ( (_DWORD)v22 != 51 )
    {
      if ( (_DWORD)v22 == 52 )
      {
        MonitorDeviceObject = DpiDrtClearInternalPanelInfoCacheMux();
      }
      else
      {
        if ( (_DWORD)v22 != 53 )
          goto LABEL_307;
        if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1736;
          goto LABEL_205;
        }
        MonitorDeviceObject = DpiDrtModifyInternalPanelInfoCacheMux();
      }
      goto LABEL_47;
    }
    if ( !a1 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 1746LL;
      goto LABEL_314;
    }
    if ( (*((_DWORD *)a1 + 111) & 8) == 0 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 1753LL;
      v28 = L"Call only valid on SoftGPU adapters.";
      goto LABEL_53;
    }
    if ( *((int *)a1 + 761) < 3200 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 1760LL;
      v28 = L"Call only valid on WDDM >=3.2 adapters.";
      goto LABEL_53;
    }
    DXGADAPTER::IsFeatureEnabled((__int64)a1, &Object, 0x1Fu);
    if ( (BYTE2(Object) & 1) == 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1770;
      goto LABEL_321;
    }
    v93 = (__int16)Object;
    if ( (unsigned __int16)((_WORD)Object - 3) > 2u )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1777;
      goto LABEL_321;
    }
    if ( *((_DWORD *)a2 + 1) < 0x18u )
    {
      WdLogSingleEntry0(2LL);
      v27 = 1785LL;
      v28 = L"DRT test specified invalid buffer size for D3DKMT_DRT_TEST_COMMAND_SOFTGPU_FEATURE_SAMPLE.";
      goto LABEL_53;
    }
    v94 = *((_DWORD *)a2 + 5);
    if ( v94 )
    {
      if ( v94 == 1 )
      {
        if ( (unsigned __int16)Object < 4u )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1800;
          goto LABEL_321;
        }
      }
      else
      {
        if ( v94 != 2 )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1816;
          goto LABEL_205;
        }
        if ( (unsigned __int16)Object < 5u )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1809;
          goto LABEL_321;
        }
      }
    }
    *(_OWORD *)v127 = 0LL;
    DXGADAPTER::QueryFeatureInterface((__int64)a1, 31, (unsigned __int16)Object, 16, v127);
    if ( v93 == 3 )
    {
      if ( v127[0] )
        goto LABEL_205;
    }
    else
    {
      if ( v93 != 4 )
      {
        if ( v93 == 5 && (!v127[0] || !v127[1]) )
          goto LABEL_205;
        goto LABEL_343;
      }
      if ( !v127[0] )
        goto LABEL_205;
    }
    if ( v127[1] )
      goto LABEL_205;
LABEL_343:
    v95 = *((_DWORD *)a2 + 3);
    v96 = *((_DWORD *)a2 + 5);
    if ( !v96 )
      *((_DWORD *)a2 + 4) = v95;
    if ( v96 == 1 )
    {
      v97 = v127[0];
    }
    else
    {
      if ( v96 != 2 )
        goto LABEL_445;
      v97 = v127[1];
    }
    v124[0] = (PVOID)v95;
    StandardAllocation = ((__int64 (__fastcall *)(_QWORD, PVOID *))v97)(*((_QWORD *)a1 + 36), v124);
    if ( StandardAllocation >= 0 )
      *((_DWORD *)a2 + 4) = HIDWORD(v124[0]);
    goto LABEL_445;
  }
  if ( *((_DWORD *)a2 + 1) >= 0x10u )
  {
    v10 = *((_DWORD *)a2 + 3);
    v11 = DXGPROCESS::GetCurrent(v7);
    if ( v11 )
    {
      if ( !v10 || (IsDrtEnabled = DxgkpIsDrtEnabled(), v13 = 4096, !IsDrtEnabled) )
        v13 = 0;
      *((_DWORD *)v11 + 102) = v13 | *((_DWORD *)v11 + 102) & 0xFFFFEFFF;
    }
    if ( !a1 )
      goto LABEL_445;
    if ( !*((_BYTE *)a1 + 209) )
      goto LABEL_445;
    v14 = *((_DWORD *)a2 + 1);
    v15 = *((_DWORD *)a1 + 1200);
    v16 = DXGPROCESS::GetHostProcess(v11);
    StandardAllocation = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                           (struct DXGADAPTER *)((char *)a1 + 4712),
                           v16,
                           v15,
                           0,
                           0,
                           D3DKMT_ESCAPE_DRT_TEST,
                           0,
                           v14,
                           (unsigned __int8 *)a2);
    if ( StandardAllocation >= 0 )
      goto LABEL_445;
    WdLogSingleEntry0(2LL);
    v17 = 275LL;
    v18 = L"VmBusSendEscape D3DKMT_ESCAPE_DRT_TEST failed";
    goto LABEL_411;
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 286;
  StandardAllocation = -1073741789;
LABEL_445:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v131);
  return (unsigned int)StandardAllocation;
}

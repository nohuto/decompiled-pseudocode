/*
 * XREFs of DxgkEscape @ 0x14043CE60
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226570 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x140017E28 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x140038090 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1400463DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400508D0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkGetAdapterMiracastInfo @ 0x14006B28C (DxgkGetAdapterMiracastInfo.c)
 *     ?VidMmProcessVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x14006C3C4 (-VidMmProcessVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIF.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x14006C8C0 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x14006CC34 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x14006D464 (-VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14007B630 (Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018F770 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x14018FB4C (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x14018FF6C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1401902D8 (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401905C0 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x140190990 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140190C38 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140190F94 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x140191B04 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14019275C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x140192BE0 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkpIsDrtEnabled @ 0x14019364C (DxgkpIsDrtEnabled.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1401948F8 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x140194924 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022EAE8 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024DB60 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1402F9A80 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140358D30 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140373850 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x14038C0DC (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1403BACD0 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403E92C0 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     DxgkWriteUserModeDiagEntry @ 0x140400098 (DxgkWriteUserModeDiagEntry.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x14041A024 (DxgkHandleCcdDatabaseRequests.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x14042A324 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplGetDebugInfo @ 0x14042A46C (OutputDuplGetDebugInfo.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x14042B1B0 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     DxgkHandleMiracastEscape @ 0x14042CB5C (DxgkHandleMiracastEscape.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x14042FE30 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x14042FF34 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x140430030 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140430A30 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 */

__int64 __fastcall DxgkEscape(_D3DKMT_ESCAPE *Src)
{
  __int64 v2; // r12
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  int *v5; // r15
  char CurrentThreadPreviousMode; // al
  __int64 v7; // rsi
  int v8; // ebx
  UINT PrivateDriverDataSize; // eax
  size_t v10; // rsi
  D3DKMT_ESCAPETYPE Type; // ecx
  __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct DXGPROCESS *v19; // rax
  __int64 v20; // r13
  struct DXGADAPTER *v21; // rsi
  DXGGLOBAL *v22; // rax
  DXGGLOBAL *Global; // rax
  __int64 v24; // rcx
  DXGPROCESS *v25; // rsi
  __int64 hAdapter; // rdx
  D3DKMT_HANDLE v27; // esi
  D3DKMT_HANDLE v28; // r12d
  __int64 v29; // r13
  __int64 v30; // r13
  unsigned int v31; // ecx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // ecx
  int v36; // ecx
  __int64 v37; // rcx
  D3DKMT_HANDLE hDevice; // r10d
  D3DKMT_HANDLE v39; // edx
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  D3DKMT_HANDLE hContext; // r10d
  D3DKMT_HANDLE v45; // eax
  unsigned int v47; // r8d
  __int64 v48; // rdx
  DXGADAPTER *v49; // r12
  unsigned __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  bool v53; // zf
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // r9
  char v57; // r8
  __int64 v58; // rdx
  __int64 v59; // r9
  unsigned __int64 v60; // rbx
  char v61; // al
  unsigned __int8 v62; // bl
  __int64 v63; // rcx
  int v64; // eax
  char v65; // cl
  unsigned int v66; // r13d
  int v67; // esi
  int v68; // ebx
  int HostProcess; // eax
  int v70; // eax
  unsigned __int64 v71; // rdx
  int InvalidModesForTestPurposes; // eax
  const wchar_t *v73; // r9
  __int64 v74; // rcx
  struct _VIDSCH_GLOBAL *v75; // rdx
  unsigned int v76; // eax
  char v77; // r12
  struct _D3DKMT_VIDSCH_ESCAPE *v78; // r8
  int v79; // ecx
  __int64 v80; // rcx
  __int128 v81; // xmm0
  __int64 v82; // rdx
  __int64 *v83; // rbx
  int v84; // ebx
  DXGPROCESS *v85; // rsi
  unsigned __int8 IsVmProcessOrVmValidation; // al
  __int64 v87; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  DXGADAPTER *v89; // rcx
  ADAPTER_DISPLAY *v90; // rcx
  struct DXGADAPTER *v91; // rbx
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rax
  const wchar_t *v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGDEVICE *v103; // r11
  char v104; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v106; // r8d
  int v107; // eax
  __int64 v108; // rax
  const wchar_t *v109; // r9
  __int64 v110; // rax
  __int64 v111; // rcx
  unsigned int v112; // eax
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // rdx
  int DiagnosticsBuffer; // eax
  __int64 v120; // rcx
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // rcx
  char v124; // [rsp+20h] [rbp-468h]
  char v125; // [rsp+28h] [rbp-460h]
  char v126; // [rsp+50h] [rbp-438h]
  int v127; // [rsp+58h] [rbp-430h] BYREF
  __int64 v128; // [rsp+60h] [rbp-428h]
  char v129; // [rsp+68h] [rbp-420h]
  unsigned __int8 v130[8]; // [rsp+70h] [rbp-418h] BYREF
  __int64 v131; // [rsp+78h] [rbp-410h] BYREF
  __int64 v132; // [rsp+80h] [rbp-408h] BYREF
  _D3DKMT_ESCAPE v133; // [rsp+88h] [rbp-400h] BYREF
  __int128 v134; // [rsp+A8h] [rbp-3E0h] BYREF
  unsigned __int64 v135; // [rsp+B8h] [rbp-3D0h] BYREF
  DXGADAPTER *v136; // [rsp+C0h] [rbp-3C8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v137; // [rsp+C8h] [rbp-3C0h]
  enum _D3DKMT_ESCAPETYPE v138; // [rsp+D0h] [rbp-3B8h]
  _BYTE v139[24]; // [rsp+D8h] [rbp-3B0h] BYREF
  unsigned __int64 v140; // [rsp+F0h] [rbp-398h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+F8h] [rbp-390h] BYREF
  DXGDEVICE *v142; // [rsp+100h] [rbp-388h]
  DXGPROCESS *v143; // [rsp+108h] [rbp-380h]
  __int64 v144; // [rsp+110h] [rbp-378h]
  struct DXGADAPTER *pPrivateDriverData; // [rsp+118h] [rbp-370h]
  int *v146; // [rsp+120h] [rbp-368h]
  DXGADAPTER *v147; // [rsp+128h] [rbp-360h] BYREF
  _BYTE v148[24]; // [rsp+130h] [rbp-358h] BYREF
  struct _DXGKARG_ESCAPE v149; // [rsp+148h] [rbp-340h] BYREF
  _BYTE v150[64]; // [rsp+180h] [rbp-308h] BYREF
  DXGADAPTER *v151[18]; // [rsp+1C0h] [rbp-2C8h] BYREF
  _BYTE Srca[512]; // [rsp+250h] [rbp-238h] BYREF

  v127 = -1;
  v128 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v129 = 1;
    v127 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v129 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v127, 2016);
  v2 = 0LL;
  v142 = 0LL;
  Interval.QuadPart = 0LL;
  Current = DXGPROCESS::GetCurrent(v3);
  v143 = Current;
  v5 = (int *)Srca;
  v146 = (int *)Srca;
  memset(&v133, 0, sizeof(v133));
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v126 = CurrentThreadPreviousMode;
  if ( !Current )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1483;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_129;
  }
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&v133, Src, 0x20uLL);
  else
    v133 = *Src;
  if ( v133.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 440LL))() )
      goto LABEL_198;
  }
  else if ( v133.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    v8 = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)Current + 11) + 432LL))(&v133);
LABEL_548:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
    if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v123, (__int64)&EventProfilerExit);
    return (unsigned int)v8;
  }
  if ( (v133.Type == D3DKMT_ESCAPE_VIDMM || v133.Type == D3DKMT_ESCAPE_VIDSCH || (unsigned int)(v133.Type - 28) <= 1)
    && !InternalEscapeEnabled() )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1526;
    goto LABEL_198;
  }
  if ( v133.Type == D3DKMT_ESCAPE_VIDMM && v133.PrivateDriverDataSize < 0x840 )
  {
LABEL_529:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
    if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v120, (__int64)&EventProfilerExit);
    LODWORD(v7) = -1073741811;
    return (unsigned int)v7;
  }
  v134 = 0LL;
  PrivateDriverDataSize = v133.PrivateDriverDataSize;
  if ( v133.Type == D3DKMT_ESCAPE_VIDSCH && v133.PrivateDriverDataSize <= 0x30 )
    PrivateDriverDataSize = 48;
  v10 = PrivateDriverDataSize;
  if ( PrivateDriverDataSize > 0x200 )
  {
    v5 = (int *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
    v146 = v5;
    *(_QWORD *)&v134 = v5;
  }
  if ( !v5 )
  {
    v8 = -1073741801;
    WdLogSingleEntry2(6LL, v10, -1073741801LL);
    WdLogGlobalForLineNumber = 1594;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating private driver data (size 0x%I64x), returning 0x%I64x",
      v10,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
LABEL_547:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
    goto LABEL_548;
  }
  if ( v133.Type == D3DKMT_ESCAPE_VIDSCH )
    memset(v5, 0, v10);
  if ( v126 == 1 )
    RtlCopyFromUser(v5, v133.pPrivateDriverData, v133.PrivateDriverDataSize);
  else
    memmove(v5, v133.pPrivateDriverData, v133.PrivateDriverDataSize);
  Type = v133.Type;
  if ( (*(_BYTE *)&v133.Flags.0 & 0x40) != 0 && (v133.Type || !v133.hAdapter || (*(_BYTE *)&v133.Flags.0 & 1) != 0) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1625;
LABEL_528:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
    goto LABEL_529;
  }
  if ( v133.Type > D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD )
  {
    switch ( v133.Type )
    {
      case D3DKMT_ESCAPE_IDD_REQUEST:
LABEL_539:
        if ( v133.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v122 = DxgkHandleIndirectEscape(v133.PrivateDriverDataSize, (__int64)v5);
        else
          v122 = DxgkHandleMiracastEscape(v133.PrivateDriverDataSize, v5);
        v8 = v122;
        if ( (int)(v122 + 0x80000000) >= 0 && v122 != -2147483643 )
          goto LABEL_547;
        if ( v126 == 1 )
          goto LABEL_545;
        goto LABEL_546;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v133.PrivateDriverDataSize != 16 )
          goto LABEL_528;
        v146 = 0LL;
        DxgkLogCodePointPacket(*v5, v5[1], v5[2], v5[3], 0LL);
LABEL_535:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
        if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v121, (__int64)&EventProfilerExit);
        return 0LL;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v133.PrivateDriverDataSize < 0x30 || v133.PrivateDriverDataSize < v5[1] )
          goto LABEL_528;
        v17 = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v5);
        goto LABEL_72;
      case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
        goto LABEL_520;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        if ( v133.PrivateDriverDataSize < 4 )
          goto LABEL_528;
        v17 = DxgkHandleCcdDatabaseRequests(*v5, v133.PrivateDriverDataSize, (__int64)v5);
        goto LABEL_72;
      case D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK:
        v17 = DxgkpProcessBddFallbackRequest();
        goto LABEL_72;
    }
LABEL_95:
    v20 = 0LL;
    v144 = 0LL;
    v147 = 0LL;
    pPrivateDriverData = 0LL;
    if ( Type == D3DKMT_ESCAPE_BDD_FALLBACK )
    {
      v21 = 0LL;
      pPrivateDriverData = 0LL;
      if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
      {
        if ( (unsigned int)Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline() )
        {
          Global = DXGGLOBAL::GetGlobal();
          v21 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v135);
          pPrivateDriverData = v21;
        }
        else
        {
          v22 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::ReferenceBddFallbackAdapter(v22, &v135);
        }
      }
      if ( !v21 )
      {
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
        if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
        return 3221226021LL;
      }
      *((_QWORD *)&v134 + 1) = v21;
    }
    v25 = v143;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v148, (struct _KTHREAD **)v143);
    hAdapter = v133.hAdapter;
    if ( !v133.hAdapter )
    {
LABEL_126:
      if ( !v20 )
      {
        LODWORD(v7) = -1073741811;
        WdLogSingleEntry2(3LL, hAdapter, -1073741811LL);
        WdLogGlobalForLineNumber = 1962;
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v148);
LABEL_128:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
LABEL_129:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
        if ( v129 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit);
        }
        return (unsigned int)v7;
      }
      hDevice = v133.hDevice;
      if ( v133.hDevice )
      {
        v39 = (v133.hDevice >> 6) & 0xFFFFFF;
        if ( v39 < *((_DWORD *)v25 + 74)
          && (v41 = *(_DWORD *)(*((_QWORD *)v25 + 35) + 16LL * v39 + 8), v133.hDevice >> 30 == ((v41 >> 5) & 3))
          && (v41 & 0x2000) == 0
          && (v41 & 0x1F) != 0 )
        {
          v42 = 2LL * v39;
          v43 = *((_QWORD *)v25 + 35);
          if ( (*(_BYTE *)(v43 + 8 * v42 + 8) & 0x1F) == 3 )
          {
            v2 = *(_QWORD *)(v43 + 8 * v42);
            v142 = (DXGDEVICE *)v2;
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            v2 = 0LL;
            v142 = 0LL;
            hDevice = v133.hDevice;
          }
        }
        else
        {
          v2 = 0LL;
          v142 = 0LL;
        }
        if ( !v2 || v20 != *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) && v20 != *(_QWORD *)(v2 + 1896) )
        {
          WdLogSingleEntry2(3LL, v20, hDevice);
          WdLogGlobalForLineNumber = 1979;
LABEL_148:
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v148);
          goto LABEL_528;
        }
      }
      hContext = v133.hContext;
      if ( v133.hContext )
      {
        v45 = (v133.hContext >> 6) & 0xFFFFFF;
        if ( v45 < *((_DWORD *)v25 + 74)
          && (v47 = *(_DWORD *)(*((_QWORD *)v25 + 35) + 16LL * v45 + 8), v133.hContext >> 30 == ((v47 >> 5) & 3))
          && (v47 & 0x2000) == 0
          && (v47 & 0x1F) != 0 )
        {
          v48 = *((_QWORD *)v25 + 35);
          if ( (*(_BYTE *)(v48 + 16 * ((v133.hContext >> 6) & 0xFFFFFFLL) + 8) & 0x1F) == 7 )
          {
            v7 = *(_QWORD *)(v48 + 16 * ((v133.hContext >> 6) & 0xFFFFFFLL));
            Interval.QuadPart = v7;
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            v7 = 0LL;
            Interval.QuadPart = 0LL;
            hContext = v133.hContext;
          }
        }
        else
        {
          v7 = 0LL;
          Interval.QuadPart = 0LL;
        }
        if ( !v7 || !v2 || v2 != *(_QWORD *)(v7 + 16) )
        {
          WdLogSingleEntry3(3LL, v20, v2, hContext);
          WdLogGlobalForLineNumber = 2002;
          goto LABEL_148;
        }
      }
      else
      {
        v7 = 0LL;
      }
      if ( v2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v2 + 64), 1uLL);
        v20 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
        v144 = v20;
      }
      if ( v7 )
        _InterlockedAdd64((volatile signed __int64 *)(v7 + 32), 1uLL);
      _InterlockedAdd64((volatile signed __int64 *)(v20 + 24), 1uLL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v148);
      if ( *(_DWORD *)(v20 + 2320) >= 0x5023u )
      {
        if ( (*(_BYTE *)&v133.Flags.0 & 0x10) != 0 || (v133.Flags.Value & 0xFFFFFF00) != 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2027;
          goto LABEL_528;
        }
        if ( (*(_BYTE *)&v133.Flags.0 & 0x20) != 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2032;
          goto LABEL_528;
        }
      }
      v136 = (DXGADAPTER *)v20;
      v137 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)-1LL;
      v132 = v2;
      v131 = v7;
      LODWORD(v7) = DxgkpGetPairingAdapters((struct DXGADAPTER *)v20, 0, &v147, &v140, 0LL, 0LL, 0);
      v49 = v147;
      if ( (int)v7 >= 0 )
        DXGADAPTER::ReleaseReference(v147);
      if ( v133.Type != D3DKMT_ESCAPE_VIDMM )
      {
        if ( v133.Type == D3DKMT_ESCAPE_DRT_TEST )
        {
          v50 = v5[2];
          if ( (_DWORD)v50 == 14 || (unsigned int)v50 <= 0x2E && (v51 = 0x512744200000LL, _bittest64(&v51, v50)) )
          {
            if ( (_DWORD)v50 == 33 )
            {
              v8 = -1073741823;
            }
            else
            {
              if ( (_DWORD)v50 == 32 )
                v8 = -1073741823;
              else
                v8 = DxgkDrtTestEscape((struct DXGADAPTER *)v20, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5, 0LL);
              if ( v8 >= 0 )
              {
                if ( v126 == 1 )
                  RtlCopyToUser(v133.pPrivateDriverData, v5, v133.PrivateDriverDataSize);
                else
                  memmove(v133.pPrivateDriverData, v5, v133.PrivateDriverDataSize);
              }
            }
            goto LABEL_191;
          }
        }
LABEL_207:
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v151, (struct DXGADAPTER *const)v20, 0LL);
        COREACCESS::COREACCESS((COREACCESS *)v150, pPrivateDriverData);
        LODWORD(v140) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v139,
          (struct DXGADAPTER *)v20,
          v57);
        v60 = (unsigned int)v133.Type;
        v138 = v133.Type;
        if ( v133.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
        {
          COREACCESS::AcquireShared((COREACCESS *)v150, 0LL);
        }
        else if ( (*(_BYTE *)&v133.Flags.0 & 1) != 0 )
        {
          v61 = 0;
          if ( v133.Type == D3DKMT_ESCAPE_DRIVERPRIVATE || v133.Type == D3DKMT_ESCAPE_VIDSCH && *v5 == 3 )
            v61 = 1;
          v62 = v61;
          if ( *(_QWORD *)(v20 + 3168) )
            v62 = 1;
          LODWORD(v7) = COREADAPTERACCESS::AcquireExclusive((__int64)v151, (unsigned int)v62 + 2);
          if ( (int)v7 < 0 )
            goto LABEL_515;
          if ( !v62 )
          {
            v63 = *(_QWORD *)(v20 + 3168);
            if ( v63 )
              ADAPTER_RENDER::FlushScheduler(v63, 2, 0xFFFFFFFF, 0);
          }
          LODWORD(v140) = 1;
        }
        else
        {
          v130[0] = v133.Type == D3DKMT_ESCAPE_DRT_TEST && v5[2] == 23 && ((v64 = v5[3], v64 == 2) || v64 == 3);
          if ( v133.Type == D3DKMT_ESCAPE_DRIVERPRIVATE
            && ((*DXGADAPTER::GetAdapterType((DXGADAPTER *)v20, (int *)&v147) & 0x10) != 0
             || *(_BYTE *)&v133.Flags.0 < 0
             || *(_DWORD *)(v20 + 2320) >= 0x5023u && (*(_BYTE *)&v133.Flags.0 & 8) != 0) )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v139);
            if ( *(_DWORD *)(v20 + 200) != 1 )
            {
LABEL_233:
              LODWORD(v7) = -1073741130;
LABEL_515:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v139);
              COREACCESS::~COREACCESS((COREACCESS *)v150, v117);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v151);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v131);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v132);
              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v136, v118);
              goto LABEL_128;
            }
          }
          else
          {
            if ( v130[0] )
            {
LABEL_237:
              if ( !v133.hDevice )
              {
LABEL_240:
                v130[0] = 1;
                if ( !(_DWORD)v60 && (*(_BYTE *)&v133.Flags.0 & 0x40) != 0 )
                {
                  if ( !v49 )
                  {
LABEL_243:
                    LODWORD(v7) = -1073741811;
                    goto LABEL_515;
                  }
                  LODWORD(v7) = DxgkpDriverKnownEscape(v143, v49, v5, v133.PrivateDriverDataSize, v130);
                  if ( (int)v7 < 0 )
                    goto LABEL_510;
                  v60 = (unsigned int)v133.Type;
                  v138 = v133.Type;
                }
                if ( v49 && *((_BYTE *)v49 + 209) )
                {
                  v20 = (__int64)v49;
                  v144 = (__int64)v49;
                  v65 = 0;
                  if ( !(_DWORD)v60 && v130[0]
                    || (unsigned int)v60 <= 0x28 && (v58 = 0x1003000000ALL, _bittest64(&v58, v60)) )
                  {
                    v65 = 1;
                  }
                  if ( (_DWORD)v60 == 8 && v5[2] == 49 )
                  {
                    LODWORD(v7) = DxgkDrtTestEscape(v49, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5, v151);
                    if ( (int)v7 < 0 )
                      goto LABEL_510;
                    v65 = 1;
                    LODWORD(v60) = v133.Type;
                    v138 = v133.Type;
                  }
                  if ( v65 )
                  {
                    if ( Interval.QuadPart )
                      v66 = *(_DWORD *)(Interval.QuadPart + 28);
                    else
                      v66 = 0;
                    if ( v142 )
                      v67 = *((_DWORD *)v142 + 118);
                    else
                      v67 = 0;
                    v68 = *((_DWORD *)v49 + 1200);
                    HostProcess = DXGPROCESS::GetHostProcess(v143);
                    v70 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                            (DXGADAPTER *)((char *)v49 + 4712),
                            HostProcess,
                            v68,
                            v67,
                            v66,
                            v138,
                            v133.Flags,
                            v133.PrivateDriverDataSize,
                            (unsigned __int8 *)v5);
                    v7 = v70;
                    if ( v70 < 0 )
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 2405;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Paravirtualized escape failed: 0x%I64x",
                        v7,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    goto LABEL_510;
                  }
                }
                if ( (int)v60 <= 15 )
                {
                  if ( (_DWORD)v60 == 15 )
                  {
                    if ( *(_QWORD *)(v20 + 3160) )
                    {
                      if ( v133.PrivateDriverDataSize < 8
                        || v133.PrivateDriverDataSize < 44 * (unsigned __int64)(unsigned int)v5[1] + 8 )
                      {
                        goto LABEL_243;
                      }
                      InvalidModesForTestPurposes = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                                                      *(ADAPTER_DISPLAY **)(v20 + 3160),
                                                      (struct _D3DKMT_DISPLAYMODELIST *)v5);
                      goto LABEL_282;
                    }
                    v8 = -1073741637;
                    WdLogSingleEntry2(2LL, v20, -1073741637LL);
                    WdLogGlobalForLineNumber = 2948;
                    v73 = L"Try to call D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                    goto LABEL_406;
                  }
                  if ( (int)v60 <= 6 )
                  {
                    if ( (_DWORD)v60 == 6 )
                    {
                      if ( v133.PrivateDriverDataSize < 8 )
                        goto LABEL_243;
                      InvalidModesForTestPurposes = DxgDbgTakeSnapshot(
                                                      v5 + 1,
                                                      v133.PrivateDriverDataSize - 4,
                                                      (unsigned int *)v5);
                      goto LABEL_282;
                    }
                    if ( (_DWORD)v60 )
                    {
                      if ( (_DWORD)v60 != 1 )
                      {
                        if ( (_DWORD)v60 != 2 )
                        {
                          if ( (_DWORD)v60 != 3 )
                          {
                            if ( (_DWORD)v60 == 4 )
                            {
                              if ( v133.PrivateDriverDataSize >= 0xC && v142 )
                              {
                                InvalidModesForTestPurposes = DXGDEVICE::Escape(
                                                                (ADAPTER_RENDER **)v142,
                                                                (struct _D3DKMT_DEVICE_ESCAPE *)v5);
                                goto LABEL_282;
                              }
LABEL_507:
                              LODWORD(v7) = -1073741811;
                              goto LABEL_510;
                            }
                            if ( (_DWORD)v60 == 5 )
                            {
                              if ( *(_QWORD *)(v20 + 3160) )
                              {
                                if ( v133.PrivateDriverDataSize >= 0x80 )
                                {
                                  v71 = *((_QWORD *)v5 + 1);
                                  if ( v71 <= 0x19000 && (v133.PrivateDriverDataSize == v71 + 127 || !v71) )
                                  {
                                    InvalidModesForTestPurposes = DmmEscape(
                                                                    (struct DXGADAPTER *const)v20,
                                                                    (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v5);
LABEL_282:
                                    LODWORD(v7) = InvalidModesForTestPurposes;
                                    goto LABEL_510;
                                  }
                                }
                                goto LABEL_507;
                              }
                              v8 = -1073741637;
                              WdLogSingleEntry2(2LL, v20, -1073741637LL);
                              WdLogGlobalForLineNumber = 2498;
                              v73 = L"Try to call D3DKMT_ESCAPE_DMM on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                              goto LABEL_406;
                            }
LABEL_474:
                            LODWORD(v7) = -1073741811;
                            WdLogSingleEntry1(3LL);
                            WdLogGlobalForLineNumber = 3371;
                            goto LABEL_510;
                          }
                          if ( !v49 )
                          {
                            v8 = -1073741637;
                            WdLogSingleEntry2(2LL, v20, -1073741637LL);
                            WdLogGlobalForLineNumber = 2588;
                            v73 = L"Try to call D3DKMT_ESCAPE_VIDSCH on a display only adapter 0x%I64x (Status = 0x%I64x)!";
LABEL_406:
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)v73,
                              v20,
                              -1073741637LL,
                              0LL,
                              0LL,
                              0LL);
                            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v139);
                            COREACCESS::~COREACCESS((COREACCESS *)v150, v92);
                            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v151);
                            goto LABEL_191;
                          }
                          if ( !*((_BYTE *)v49 + 209) )
                          {
                            v74 = *((_QWORD *)v49 + 396);
                            v75 = *(struct _VIDSCH_GLOBAL **)(v74 + 744);
                            if ( *v5 == 2 )
                              goto LABEL_243;
                            if ( *v5 == 3 )
                            {
                              if ( !(_DWORD)v140 )
                                goto LABEL_507;
                              v76 = 5000000;
                              if ( (unsigned int)v5[1] < 0x4C4B40 )
                                v76 = v5[1];
                              Interval.QuadPart = -(__int64)v76;
                              KeDelayExecutionThread(0, 0, &Interval);
LABEL_296:
                              LODWORD(v7) = 0;
                              v77 = v126;
                              goto LABEL_512;
                            }
                            v78 = (struct _D3DKMT_VIDSCH_ESCAPE *)v5;
LABEL_298:
                            InvalidModesForTestPurposes = VIDSCH_EXPORT::VidSchEscape(
                                                            *(VIDSCH_EXPORT **)(v74 + 736),
                                                            v75,
                                                            v78);
                            goto LABEL_282;
                          }
LABEL_494:
                          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v139);
                          COREACCESS::~COREACCESS((COREACCESS *)v150, v113);
                          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v151);
                          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v131);
                          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v132);
                          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v136, v114);
                          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
                          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
                          if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                            McTemplateK0q_EtwWriteTransfer(v115, (__int64)&EventProfilerExit);
                          return (unsigned int)-1073741637;
                        }
                        if ( !v133.pPrivateDriverData )
                          goto LABEL_300;
                        if ( v133.PrivateDriverDataSize < 4 )
                          goto LABEL_507;
                        if ( *v5 )
                        {
                          switch ( *v5 )
                          {
                            case 1:
                              v79 = 2;
                              break;
                            case 2:
                              v79 = 1;
                              break;
                            case 3:
                              v79 = 3;
                              break;
                            default:
                              v80 = (unsigned int)(*v5 - 4);
                              if ( *v5 == 4 || (v80 = (unsigned int)(*v5 - 5), *v5 == 5) )
                              {
                                if ( v49 )
                                {
                                  if ( *((_BYTE *)v49 + 209) )
                                    goto LABEL_315;
                                  LODWORD(v7) = TdrDbgCtrl(4);
                                  if ( (int)v7 < 0 )
                                    goto LABEL_510;
                                  v75 = *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v49 + 396) + 744LL);
                                  v81 = 0LL;
                                  *(_OWORD *)&v149.hDevice = 0LL;
                                  HIDWORD(v149.hDevice) = *v5;
                                  goto LABEL_318;
                                }
                                *(_QWORD *)(WdLogNewEntry5_WdTrace(v80, v58) + 24) = 0LL;
                                WdLogGlobalForLineNumber = 2691;
LABEL_320:
                                LODWORD(v7) = -1073741637;
                                goto LABEL_510;
                              }
                              switch ( *v5 )
                              {
                                case 6:
                                  v79 = 5;
                                  break;
                                case 7:
                                  v79 = 6;
                                  break;
                                case 8:
                                  if ( v133.PrivateDriverDataSize < 8 )
                                    goto LABEL_243;
                                  if ( v49 )
                                  {
                                    if ( *((_BYTE *)v49 + 209) )
                                      goto LABEL_315;
                                    LODWORD(v7) = TdrDbgCtrl(4);
                                    if ( (int)v7 < 0 )
                                      goto LABEL_510;
                                    v75 = *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v49 + 396) + 744LL);
                                    v81 = 0LL;
                                    *(_OWORD *)&v149.hDevice = 0LL;
                                    HIDWORD(v149.hDevice) = *v5;
                                    v149.Flags.Value = v5[1];
LABEL_318:
                                    LODWORD(v149.hDevice) = 2;
                                    *(_OWORD *)&v149.hContext = v81;
                                    *(_OWORD *)&v149.pPrivateDriverData = v81;
                                    v74 = *((_QWORD *)v49 + 396);
                                    v78 = (struct _D3DKMT_VIDSCH_ESCAPE *)&v149;
                                    goto LABEL_298;
                                  }
                                  *(_QWORD *)(WdLogNewEntry5_WdTrace((unsigned int)(*v5 - 7), v58) + 24) = v20;
                                  WdLogGlobalForLineNumber = 2729;
                                  goto LABEL_320;
                                default:
                                  goto LABEL_507;
                              }
                              break;
                          }
                        }
                        else
                        {
LABEL_300:
                          v79 = 0;
                        }
                        InvalidModesForTestPurposes = TdrDbgCtrl(v79);
                        goto LABEL_282;
                      }
                      if ( !v49 )
                      {
                        v8 = -1073741637;
                        WdLogSingleEntry2(2LL, v20, -1073741637LL);
                        WdLogGlobalForLineNumber = 2526;
                        v73 = L"Try to call D3DKMT_ESCAPE_VIDMM on a display only adapter 0x%I64x (Status = 0x%I64x)!";
                        goto LABEL_406;
                      }
                      if ( v142 )
                        v82 = *((_QWORD *)v142 + 99);
                      else
                        v82 = 0LL;
                      if ( *v5 != 16 )
                      {
                        LOBYTE(v59) = v140;
                        InvalidModesForTestPurposes = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 396) + 760LL) + 8LL) + 32LL))(
                                                        *(_QWORD *)(*((_QWORD *)v49 + 396) + 768LL),
                                                        v82,
                                                        v5,
                                                        v59);
                        goto LABEL_282;
                      }
                      v83 = (__int64 *)(v5 + 6);
                      LODWORD(v7) = DxgkpEscapeVidMmDelayExecution(
                                      v142,
                                      v5[3],
                                      v5[2],
                                      v5[4],
                                      (unsigned __int64 *)v5 + 3);
                      if ( (int)v7 >= 0 )
                      {
                        pPrivateDriverData = (struct DXGADAPTER *)v133.pPrivateDriverData;
                        v77 = v126;
                        if ( v126 == 1 )
                          RtlWriteULong64ToUser((_QWORD *)v133.pPrivateDriverData + 3, *v83);
                        else
                          *((_QWORD *)v133.pPrivateDriverData + 3) = *v83;
LABEL_511:
                        if ( (int)v7 < 0 )
                          goto LABEL_515;
LABEL_512:
                        if ( v77 == 1 )
                          RtlCopyToUser(v133.pPrivateDriverData, v5, v133.PrivateDriverDataSize);
                        else
                          memmove(v133.pPrivateDriverData, v5, v133.PrivateDriverDataSize);
                        goto LABEL_515;
                      }
LABEL_510:
                      v77 = v126;
                      goto LABEL_511;
                    }
                    memset(&v149, 0, sizeof(v149));
                    if ( !v130[0] )
                      goto LABEL_296;
                    if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_ESCAPE *))(v20 + 592) == DXGADAPTER::DefaultDdiEscape )
                    {
                      WdLogSingleEntry2(3LL, v20, -1073741637LL);
                      WdLogGlobalForLineNumber = 2482;
                      LODWORD(v7) = -1073741637;
                      goto LABEL_510;
                    }
                    if ( !v133.PrivateDriverDataSize || !v133.pPrivateDriverData )
                    {
                      LODWORD(v7) = -1073741811;
                      WdLogSingleEntry3(3LL, v133.PrivateDriverDataSize, v133.pPrivateDriverData, -1073741811LL);
                      WdLogGlobalForLineNumber = 2473;
                      goto LABEL_510;
                    }
                    if ( v142 )
                      v149.hDevice = (HANDLE)*((_QWORD *)v142 + 77);
                    if ( Interval.QuadPart )
                      v149.hContext = *(HANDLE *)(Interval.QuadPart + 184);
                    else
                      v149.hContext = 0LL;
                    v149.Flags.Value = v133.Flags.Value;
                    if ( (*(_DWORD *)(v20 + 444) & 8) == 0
                      && *(_DWORD *)(v20 + 420) == 4098
                      && !(unsigned int)IsAMDDriverEscapeAllowed(v5, v133.PrivateDriverDataSize) )
                    {
LABEL_315:
                      LODWORD(v7) = -1073741637;
                      goto LABEL_515;
                    }
                    if ( *(_BYTE *)&v133.Flags.0 < 0 )
                      v84 = -1073741637;
                    else
                      v84 = 0;
                    LODWORD(v7) = v84;
                    if ( v84 < 0 )
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 2443;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Driver Common Escape is block for (0x%I64x)",
                        v84,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      goto LABEL_510;
                    }
                    v85 = v143;
                    IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(v143, (struct DXGADAPTER *)v20);
                    v149.Flags.Value = v149.Flags.Value & 0xFFFFFFDF | (32 * (IsVmProcessOrVmValidation & 1));
                    v149.PrivateDriverDataSize = v133.PrivateDriverDataSize;
                    v149.pPrivateDriverData = v5;
                    v87 = *(_QWORD *)(v20 + 3168);
                    if ( v87 )
                    {
                      KeEnterCriticalRegion();
                      ExAcquirePushLockSharedEx(v87 + 72, 0LL);
                      _InterlockedAdd((volatile signed __int32 *)(v87 + 88), 1u);
                      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v85, *(_DWORD *)(v20 + 240));
                      if ( RenderAdapterInfo )
                        v149.hKmdProcessHandle = (HANDLE)*((_QWORD *)RenderAdapterInfo + 6);
                      _InterlockedDecrement((volatile signed __int32 *)(v87 + 88));
                      ExReleasePushLockSharedEx(v87 + 72, 0LL);
                      KeLeaveCriticalRegion();
                    }
                    v89 = (DXGADAPTER *)v20;
LABEL_364:
                    InvalidModesForTestPurposes = DXGADAPTER::DdiEscape(v89, &v149);
                    goto LABEL_282;
                  }
                  switch ( (_DWORD)v60 )
                  {
                    case 8:
                      InvalidModesForTestPurposes = DxgkDrtTestEscape(
                                                      (struct DXGADAPTER *)v20,
                                                      (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5,
                                                      v151);
                      goto LABEL_282;
                    case 0xA:
                      if ( *(_QWORD *)(v20 + 3160) )
                      {
                        if ( v133.PrivateDriverDataSize < 0x18 || v133.PrivateDriverDataSize != *v5 )
                          goto LABEL_243;
                        InvalidModesForTestPurposes = OutputDuplGetDebugInfo(
                                                        (struct DXGADAPTER *)v20,
                                                        (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v5);
                        goto LABEL_282;
                      }
                      v8 = -1073741637;
                      WdLogSingleEntry2(2LL, v20, -1073741637LL);
                      WdLogGlobalForLineNumber = 2806;
                      v73 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                      goto LABEL_406;
                    case 0xB:
                      if ( *(_QWORD *)(v20 + 3160) )
                      {
                        if ( v133.PrivateDriverDataSize < 8 || v133.PrivateDriverDataSize != (unsigned int)v5[1] + 8LL )
                          goto LABEL_243;
                        InvalidModesForTestPurposes = OutputDuplGetDiagnosticBuffer(
                                                        (struct DXGADAPTER *)v20,
                                                        (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v5);
                        goto LABEL_282;
                      }
                      v8 = -1073741637;
                      WdLogSingleEntry2(2LL, v20, -1073741637LL);
                      WdLogGlobalForLineNumber = 2839;
                      v73 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                      goto LABEL_406;
                    case 0xC:
                      if ( (*(_DWORD *)(v20 + 444) & 0x20) == 0 || DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v20) )
                      {
                        LODWORD(v7) = -1071775742;
                        goto LABEL_510;
                      }
                      *((_DWORD *)&v149.Flags + 1) = 0;
                      memset(&v149.PrivateDriverDataSize + 1, 0, 20);
                      v149.hDevice = 0LL;
                      v149.Flags.Value = v133.Flags.Value;
                      v149.PrivateDriverDataSize = v133.PrivateDriverDataSize;
                      v149.pPrivateDriverData = v5;
                      goto LABEL_364;
                    case 0xD:
                      v91 = pPrivateDriverData;
                      if ( !DXGADAPTER::IsBddFallbackDriver(pPrivateDriverData) )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 2868;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"pBddAdapter->IsBddFallbackDriver()",
                          2868LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      *((_DWORD *)&v149.Flags + 1) = 0;
                      memset(&v149.PrivateDriverDataSize + 1, 0, 20);
                      v149.hDevice = 0LL;
                      v149.Flags.Value = v133.Flags.Value;
                      v149.PrivateDriverDataSize = v133.PrivateDriverDataSize;
                      v149.pPrivateDriverData = v5;
                      v89 = v91;
                      goto LABEL_364;
                  }
                  if ( (_DWORD)v60 != 14 )
                    goto LABEL_474;
                  if ( v133.PrivateDriverDataSize != 8 )
                    goto LABEL_243;
                  if ( *v5 )
                  {
                    if ( *v5 != 15 )
                    {
                      WdLogSingleEntry1(1LL);
                      WdLogGlobalForLineNumber = 2935;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"%I64d is not an escape type that needs (de)activation",
                        *v5,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      goto LABEL_507;
                    }
                    v90 = *(ADAPTER_DISPLAY **)(v20 + 3160);
                    if ( v90 )
                    {
                      InvalidModesForTestPurposes = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                                                      v90,
                                                      v5[1]);
                      goto LABEL_282;
                    }
                    v8 = -1073741637;
                    WdLogSingleEntry2(2LL, v20, -1073741637LL);
                    WdLogGlobalForLineNumber = 2919;
                    v73 = L"Try to activate D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                    goto LABEL_406;
                  }
                  *((_BYTE *)DXGGLOBAL::GetGlobal() + 1360) = v5[1] != 0;
LABEL_509:
                  LODWORD(v7) = 0;
                  goto LABEL_510;
                }
                if ( (int)v60 <= 29 )
                {
                  if ( (_DWORD)v60 != 29 )
                  {
                    switch ( (_DWORD)v60 )
                    {
                      case 0x10:
                        if ( v133.PrivateDriverDataSize < 4 )
                          goto LABEL_243;
                        *v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 216) + 64LL) + 2744LL);
                        goto LABEL_296;
                      case 0x11:
                        if ( (*(_BYTE *)&v133.Flags.0 & 1) == 0 || v133.PrivateDriverDataSize < 0x60C )
                          goto LABEL_243;
                        if ( DXGPROCESS::IsRemoteConnection(v143) )
                        {
                          LODWORD(v7) = -1073741790;
                          WdLogSingleEntry2(3LL, v20, -1073741790LL);
                          WdLogGlobalForLineNumber = 3006;
                          goto LABEL_510;
                        }
                        InvalidModesForTestPurposes = DpiBrightnessEscape(
                                                        *(struct _DEVICE_OBJECT **)(v20 + 216),
                                                        (struct _D3DKMT_BRIGHTNESS_INFO *)v5);
                        goto LABEL_282;
                      case 0x12:
                        if ( v133.PrivateDriverDataSize >= 4 && v133.PrivateDriverDataSize == (unsigned int)*v5 + 4LL )
                        {
                          if ( !IsCurrentConsoleSession() && !IsCurrentProcessAdmin() )
                          {
                            memset(v5, 0, v133.PrivateDriverDataSize);
                            goto LABEL_510;
                          }
                          InvalidModesForTestPurposes = (*(__int64 (__fastcall **)(DxgMonitor::EDIDCACHE *, int *))(*(_QWORD *)DxgMonitor::EDIDCACHE::s_pEdidCache + 16LL))(
                                                          DxgMonitor::EDIDCACHE::s_pEdidCache,
                                                          v5);
                          goto LABEL_282;
                        }
                        goto LABEL_507;
                      case 0x15:
                        if ( v133.PrivateDriverDataSize >= 8 )
                        {
                          if ( v49 )
                          {
                            v103 = v142;
                            if ( v142 )
                            {
                              v104 = 0;
                              if ( (qword_1401664C0 & 0x461C8ED7) != 0
                                && (qword_1401664C8 & 0xFFFFFFFFB9E37128uLL) == 0
                                && (qword_1401664C0 & 0x4000) != 0 )
                              {
                                NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v49);
                                if ( NumDifferentPhysicalAdapters )
                                {
                                  while ( !*(_QWORD *)(352LL * v106
                                                     + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 396) + 16LL) + 3032LL)
                                                     + 40) )
                                  {
                                    if ( ++v106 >= NumDifferentPhysicalAdapters )
                                      goto LABEL_443;
                                  }
                                  v104 = 1;
                                }
                              }
LABEL_443:
                              *((_BYTE *)v103 + 1912) = v104;
                              *(_BYTE *)v5 = v104;
                              v5[1] = 0;
                              goto LABEL_296;
                            }
                          }
                        }
                        break;
                      case 0x17:
                        if ( v133.PrivateDriverDataSize != 32 )
                          goto LABEL_243;
                        if ( !DXGADAPTER::IsDiagnosticAllowed((DXGADAPTER *)v20) )
                        {
                          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v99, v98, v100, v101);
                          WdLogSingleEntry2(3LL, v20, CurrentProcessSessionId);
                          WdLogGlobalForLineNumber = 3065;
                          LODWORD(v7) = -1073741790;
                          goto LABEL_510;
                        }
                        DxgkGetAdapterMiracastInfo(*(_QWORD *)(v20 + 216), (__int64)v5);
                        goto LABEL_296;
                      case 0x1C:
                        if ( v133.PrivateDriverDataSize >= 0x20 )
                        {
                          v95 = v5[3];
                          if ( v95 <= 1 && !*(_QWORD *)v5 )
                          {
                            if ( !v95 )
                              *((_OWORD *)v5 + 1) = 0LL;
                            if ( v5[2] == 1000 || v5[2] == 1001 )
                            {
                              if ( v49 )
                              {
                                InvalidModesForTestPurposes = VIDMM_EXPORT::VidMmProcessVerifierOption(
                                                                *(VIDMM_EXPORT **)(*((_QWORD *)v49 + 396) + 760LL),
                                                                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v49 + 396) + 768LL),
                                                                v143,
                                                                v5[3],
                                                                (enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE)v5[2],
                                                                (union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *)v5 + 1);
                                goto LABEL_282;
                              }
                              WdLogSingleEntry0(2LL);
                              v96 = 3158LL;
                              v97 = L"D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION for VidMm option must supply a render adapter";
                              goto LABEL_426;
                            }
                          }
                        }
                        break;
                      default:
                        goto LABEL_474;
                    }
                    goto LABEL_416;
                  }
                  if ( v133.PrivateDriverDataSize < 0x30 || (v107 = v5[1], v107 > 1) )
                  {
LABEL_416:
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v139);
                    COREACCESS::~COREACCESS((COREACCESS *)v150, v93);
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v151);
LABEL_417:
                    ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v131);
                    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v132);
                    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v136, v94);
                    goto LABEL_528;
                  }
                  if ( !v107 )
                  {
                    *(_OWORD *)(v5 + 2) = 0LL;
                    *(_OWORD *)(v5 + 6) = 0LL;
                    *((_QWORD *)v5 + 5) = 0LL;
                  }
                  if ( *v5 != 1000 && (unsigned int)(*v5 - 1001) >= 2 )
                  {
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 3227;
                    v108 = *v5;
                    v109 = L"Unknown verifier Type for D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION, Type=%d";
LABEL_464:
                    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v109, v108, 0LL, 0LL, 0LL, 0LL);
                    goto LABEL_416;
                  }
                  if ( v49 )
                  {
                    if ( !*((_BYTE *)v49 + 209) )
                    {
                      InvalidModesForTestPurposes = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 396) + 760LL) + 8LL)
                                                                                              + 1072LL))(
                                                      *(_QWORD *)(*((_QWORD *)v49 + 396) + 768LL),
                                                      (unsigned int)v5[1]);
                      goto LABEL_282;
                    }
                    goto LABEL_494;
                  }
                  WdLogSingleEntry0(2LL);
                  v96 = 3209LL;
                  v97 = L"D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION for VidMm option must supply a render adapter";
                  goto LABEL_426;
                }
                switch ( (_DWORD)v60 )
                {
                  case 0x1F:
                    if ( v133.PrivateDriverDataSize == 4 )
                    {
                      if ( !*(_QWORD *)(v20 + 3168) )
                      {
                        v116 = *(_QWORD *)(v20 + 3160);
                        if ( !*(_QWORD *)(v116 + 464) )
                          goto LABEL_507;
                        *(_DWORD *)(v116 + 472) = *v5;
                        goto LABEL_509;
                      }
                      WdLogSingleEntry1(3LL);
                      WdLogGlobalForLineNumber = 3245;
                      goto LABEL_416;
                    }
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 3238;
                    v108 = v133.PrivateDriverDataSize;
                    v109 = L"Supplied Buffer size for D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE (0x%I64x) was not the correct size";
                    goto LABEL_464;
                  case 0x24:
                    if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v20) )
                    {
                      InvalidModesForTestPurposes = ADAPTER_DISPLAY::ReportDisplayState(
                                                      *(ADAPTER_DISPLAY **)(v20 + 3160),
                                                      (struct _D3DKMT_DXGK_DIAGNOSTICS *)v5,
                                                      v133.PrivateDriverDataSize);
                      goto LABEL_282;
                    }
                    WdLogSingleEntry1(3LL);
                    WdLogGlobalForLineNumber = 3259;
                    goto LABEL_416;
                  case 0x25:
                    if ( !v133.PrivateDriverDataSize )
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 3275;
                      v108 = v133.PrivateDriverDataSize;
                      v109 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_IOMMU_STATUS (0x%I64x) was to small";
                      goto LABEL_464;
                    }
                    if ( !v49 )
                    {
                      WdLogSingleEntry0(2LL);
                      v96 = 3281LL;
                      v97 = L"D3DKMT_ESCAPE_QUERY_IOMMU_STATUS must supply a render adapter";
                      goto LABEL_426;
                    }
                    if ( *((_BYTE *)v49 + 209) )
                      goto LABEL_494;
                    LODWORD(v140) = 0;
                    SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v49 + 28), (union SYSMM_IOMMU_STATE *)&v140);
                    LOBYTE(v112) = v140;
                    break;
                  case 0x27:
                    if ( !v133.PrivateDriverDataSize )
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 3306;
                      v108 = v133.PrivateDriverDataSize;
                      v109 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS (0x%I64x) was to small";
                      goto LABEL_464;
                    }
                    if ( !v49 )
                    {
                      WdLogSingleEntry0(2LL);
                      v96 = 3312LL;
                      v97 = L"D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS must supply a render adapter";
                      goto LABEL_426;
                    }
                    if ( *((_BYTE *)v49 + 209) )
                      goto LABEL_494;
                    LODWORD(v140) = 0;
                    SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v49 + 28), (union SYSMM_IOMMU_STATE *)&v140);
                    v112 = (unsigned int)v140 >> 1;
                    break;
                  case 0x28:
                    if ( v133.PrivateDriverDataSize < 0xC )
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 3337;
                      v108 = v133.PrivateDriverDataSize;
                      v109 = L"Supplied Buffer size for D3DKMT_QUERY_PHYSICAL_ADAPTER (0x%I64x) was to small";
                      goto LABEL_464;
                    }
                    if ( v49 )
                    {
                      v110 = (unsigned int)*v5;
                      if ( (unsigned int)v110 < *((_DWORD *)v49 + 74) )
                      {
                        v111 = *((_QWORD *)v49 + 379);
                        v5[1] = *(unsigned __int16 *)(352 * v110 + v111);
                        v5[2] = *(unsigned __int16 *)(352 * v110 + v111 + 2);
                        if ( v133.PrivateDriverDataSize >= 0x10 )
                          v5[3] = -((*((_BYTE *)v49 + 2492) & 4) == 0);
                        goto LABEL_296;
                      }
                      goto LABEL_416;
                    }
                    WdLogSingleEntry0(2LL);
                    v96 = 3342LL;
                    v97 = L"D3DKMT_QUERY_PHYSICAL_ADAPTER must supply a render adapter";
LABEL_426:
                    WdLogGlobalForLineNumber = v96;
                    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v97, v96, 0LL, 0LL, 0LL, 0LL);
                    goto LABEL_494;
                  default:
                    goto LABEL_474;
                }
                *(_BYTE *)v5 = v112 & 1;
                goto LABEL_296;
              }
              if ( *((_DWORD *)v142 + 152) == 1 )
              {
                v60 = (unsigned int)v133.Type;
                v138 = v133.Type;
                goto LABEL_240;
              }
              goto LABEL_233;
            }
            LODWORD(v7) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v151, 0LL);
            if ( (int)v7 < 0 )
              goto LABEL_515;
          }
        }
        v60 = (unsigned int)v133.Type;
        v138 = v133.Type;
        goto LABEL_237;
      }
      if ( !v49 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2198;
        goto LABEL_417;
      }
      if ( *v5 == 9 )
      {
        v53 = v5[4] == 0;
        if ( !v5[4] )
        {
          if ( !DxgkpIsDrtEnabled() )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 2178;
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v131);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v132);
            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v136, v54);
            goto LABEL_197;
          }
          v53 = v5[4] == 0;
        }
        v125 = !v53;
        v124 = 1;
      }
      else
      {
        if ( *v5 != 10 )
          goto LABEL_207;
        v125 = 0;
        v124 = 0;
      }
      v56 = (void *)*((_QWORD *)v5 + 1);
      *((_QWORD *)v5 + 1) = 0LL;
      v8 = DxgEscapeSuspendResumeProcess(&v133, (unsigned __int8 *)v5, v49, v56, v124, v125);
LABEL_191:
      ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v131);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v132);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v136, v52);
      goto LABEL_547;
    }
    v27 = (v133.hAdapter >> 6) & 0xFFFFFF;
    v28 = v133.hAdapter >> 30;
    if ( (*((_DWORD *)v143 + 102) & 0x100) == 0 )
    {
      if ( v27 < *((_DWORD *)v143 + 74) )
      {
        v34 = *((_QWORD *)v143 + 35);
        v35 = *(_DWORD *)(v34 + 16LL * v27 + 8);
        if ( v28 == ((v35 >> 5) & 3) && (v35 & 0x2000) == 0 )
        {
          v36 = v35 & 0x1F;
          if ( v36 )
          {
            if ( v36 == 1 )
            {
              v20 = *(_QWORD *)(v34 + 16LL * v27);
              goto LABEL_125;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            hAdapter = v133.hAdapter;
          }
        }
      }
      v20 = 0LL;
LABEL_125:
      v144 = v20;
      v2 = 0LL;
      v25 = v143;
      goto LABEL_126;
    }
    v29 = *((_QWORD *)v143 + 74);
    v144 = v29 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v29 + 248));
    if ( v27 < *(_DWORD *)(v29 + 296) )
    {
      v30 = *(_QWORD *)(v29 + 280);
      v31 = *(_DWORD *)(v30 + 16LL * v27 + 8);
      if ( v28 == ((v31 >> 5) & 3) && (v31 & 0x2000) == 0 )
      {
        v32 = v31 & 0x1F;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            v20 = *(_QWORD *)(v30 + 16LL * v27);
            goto LABEL_116;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v20 = 0LL;
LABEL_116:
    v33 = v144;
    _InterlockedDecrement((volatile signed __int32 *)(v144 + 16));
    ExReleasePushLockSharedEx(v33, 0LL);
    KeLeaveCriticalRegion();
    hAdapter = v133.hAdapter;
    goto LABEL_125;
  }
  switch ( v133.Type )
  {
    case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
      if ( g_OSTestSigningEnabled )
      {
        if ( v133.PrivateDriverDataSize == 200 )
        {
          v19 = DXGPROCESS::GetCurrent((unsigned int)v133.Type);
          if ( v19 )
          {
            DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v148, v19);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v148, 1u);
            LOBYTE(v136) = 0;
            CDisplayScenarioContextScope::ContextScopeConstructor(&v136, 0LL, 0x2Eu, 0);
            v8 = DxgkEnableDisableTargetAsHMD(
                   (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v5,
                   v5[48],
                   *((_BYTE *)v5 + 196),
                   v137);
            CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v136);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v148);
            goto LABEL_547;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1829;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 1829LL, 0LL, 0LL, 0LL, 0LL);
        }
        goto LABEL_528;
      }
      goto LABEL_197;
    case D3DKMT_ESCAPE_VIDMM:
      v18 = *v5;
      if ( *v5 == 5 )
      {
        v17 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v5);
        goto LABEL_72;
      }
      if ( v18 == 6 )
      {
        v17 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v5);
        goto LABEL_72;
      }
      if ( v18 == 13 )
      {
        v17 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v5);
        goto LABEL_72;
      }
      if ( v18 == 20 && (v5[2] & 1) != 0 )
      {
        *((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) = 1;
LABEL_83:
        Type = v133.Type;
        goto LABEL_95;
      }
      goto LABEL_95;
    case D3DKMT_ESCAPE_DRT_TEST:
      if ( v133.PrivateDriverDataSize < 0xC || v133.PrivateDriverDataSize < v5[1] || *v5 != 1484026436 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1681;
        goto LABEL_528;
      }
      if ( !InternalEscapeEnabled() )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1686;
        goto LABEL_197;
      }
      v14 = v5[2];
      if ( (_DWORD)v14 || v133.hAdapter )
      {
        if ( (unsigned int)v14 > 0x32 || (v15 = 0x4001093482000LL, !_bittest64(&v15, v14)) )
        {
          if ( (_DWORD)v14 != 52
            && ((_DWORD)v14 != 53
             || !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline()) )
          {
            v16 = v5[2];
            if ( v16 == 35 || ((v16 - 45) & 0xFFFFFFFD) == 0 )
            {
              v8 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5, 0LL);
              if ( v8 < 0 )
                goto LABEL_547;
              if ( v126 == 1 )
              {
LABEL_545:
                RtlCopyToUser(v133.pPrivateDriverData, v5, v133.PrivateDriverDataSize);
                goto LABEL_547;
              }
LABEL_546:
              memmove(v133.pPrivateDriverData, v5, v133.PrivateDriverDataSize);
              goto LABEL_547;
            }
            goto LABEL_83;
          }
        }
      }
      v17 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v5, 0LL);
LABEL_72:
      v8 = v17;
      goto LABEL_547;
    case D3DKMT_ESCAPE_DIAGNOSTICS:
LABEL_520:
      DiagnosticsBuffer = GetDiagnosticsBuffer(
                            (struct _D3DKMT_DXGK_DIAGNOSTICS *)v5,
                            v133.PrivateDriverDataSize,
                            v133.Type == D3DKMT_ESCAPE_DIAGNOSTICS);
      v8 = DiagnosticsBuffer;
      if ( (int)(DiagnosticsBuffer + 0x80000000) >= 0 && DiagnosticsBuffer != -2147483643 )
        goto LABEL_547;
      if ( v126 == 1 )
        goto LABEL_545;
      goto LABEL_546;
    case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      goto LABEL_539;
    case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
      if ( g_OSTestSigningEnabled )
      {
        if ( v133.PrivateDriverDataSize != 1 )
          goto LABEL_528;
        byte_140168DDC = *(_BYTE *)v5;
        goto LABEL_535;
      }
LABEL_197:
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
LABEL_198:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
      if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v55, (__int64)&EventProfilerExit);
      return 3221225506LL;
  }
  if ( v133.Type != D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH )
    goto LABEL_95;
  if ( v133.PrivateDriverDataSize != 24 )
    goto LABEL_528;
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v134);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
  if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 3221225473LL;
}

/*
 * XREFs of DpiFdoStartAdapter @ 0x140245F9C
 * Callers:
 *     DpiFdoStartNonLdaAdapter @ 0x140248970 (DpiFdoStartNonLdaAdapter.c)
 *     DpiLdaStartAdapterInChain @ 0x140254BB0 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DxgkDiagCalcDuration1us @ 0x140056288 (DxgkDiagCalcDuration1us.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14005A918 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     ?LogAdapterStartTelemetry@@YAXPEAU_FDO_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x140065668 (-LogAdapterStartTelemetry@@YAXPEAU_FDO_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADA.c)
 *     DpiFdoInitializeMipiDsi @ 0x14006B5B4 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoCleanupDP @ 0x14006D168 (DpiFdoCleanupDP.c)
 *     DpiFdoCleanupMipiDsi @ 0x14006D1D8 (DpiFdoCleanupMipiDsi.c)
 *     ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14006D228 (-DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiRemoveAdapter @ 0x1400859EC (DpiRemoveAdapter.c)
 *     ?DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x140085E00 (-DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x140086040 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1400862C0 (NotifyUserMSBDAIfApplicable.c)
 *     SendBDDDiagTelemetry @ 0x1400864D8 (SendBDDDiagTelemetry.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1400866D0 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiFdoInitializeDP @ 0x140086718 (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x140086810 (DpiFdoInitializeDisplayDiagnostics.c)
 *     Feature_LegacyHPDFiltering__private_IsEnabledPreCheck @ 0x140086E0C (Feature_LegacyHPDFiltering__private_IsEnabledPreCheck.c)
 *     Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck @ 0x140086E78 (Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck.c)
 *     DpiHybridInternalPanelOverride @ 0x140087578 (DpiHybridInternalPanelOverride.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140090678 (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A56A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkAcquireAdapterFdoReference @ 0x1401924F8 (DxgkAcquireAdapterFdoReference.c)
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x14019FE04 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1401AA53C (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401B4074 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B4170 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B43B8 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkAcquireGdiViewIds @ 0x140204BA0 (DxgkAcquireGdiViewIds.c)
 *     DxgkCommitGdiViewIds @ 0x140204D64 (DxgkCommitGdiViewIds.c)
 *     DxgkReleaseGdiViewId @ 0x140205270 (DxgkReleaseGdiViewId.c)
 *     DxgkRetrieveStringFromRegistry @ 0x14023AA60 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoDestroyRelatedObjects @ 0x140240494 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x140240540 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x140244E98 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x140245058 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiFdoRemoveChildDescriptors @ 0x140245DB0 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402490FC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x14024C878 (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E9C0 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFeatureStartDevice @ 0x14024EDAC (DpiFeatureStartDevice.c)
 *     DpiKsrGetSavedAdapterState @ 0x1402524F4 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrIsSoftBoot @ 0x1402525D8 (DpiKsrIsSoftBoot.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1402527F8 (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x140255B18 (DpiDxgkDdiStopDevice.c)
 *     ?MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F3D4 (-MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031C134 (DpiDxgkDdiDisplayDetectControl.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x140358108 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 *     DpiOpenPnpRegistryKey @ 0x140391650 (DpiOpenPnpRegistryKey.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x14041357C (DpiGetDevicePropertyString.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1404247EC (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoConnectInterrupt @ 0x1404264AC (DpiFdoConnectInterrupt.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1404279F8 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoEnumChildDevices @ 0x1404290E4 (DpiFdoEnumChildDevices.c)
 *     DpiDxgkDdiStartDevice @ 0x14042DF2C (DpiDxgkDdiStartDevice.c)
 *     DxgkAddAdapter @ 0x14042E97C (DxgkAddAdapter.c)
 *     DpiFdoCreateRelatedObjects @ 0x14042F7C0 (DpiFdoCreateRelatedObjects.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  char v8; // bl
  __int64 v9; // rsi
  int v10; // r12d
  char *DeviceExtension; // r15
  __int64 v12; // rdi
  int MiniportInterface; // r14d
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_QWORD, _QWORD); // rax
  int v20; // eax
  __int64 started; // r14
  PVOID v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  char v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // eax
  bool v30; // cf
  bool v31; // zf
  _DWORD *Pool2; // rbx
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // edx
  __int128 v36; // xmm0
  struct _LUID *v37; // rdx
  unsigned int v38; // eax
  void *v39; // rax
  _QWORD *v40; // rbx
  char v41; // cl
  _BYTE *v42; // r14
  char v43; // r8
  char v44; // dl
  bool v45; // al
  char v46; // dl
  _BYTE *v47; // rax
  char v48; // cl
  _QWORD *v49; // rcx
  __int64 v50; // rcx
  char v51; // r8
  unsigned __int8 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rdx
  int v55; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  PIO_WORKITEM WorkItem; // rax
  PVOID v65; // rbx
  int v66; // eax
  int v67; // eax
  BOOLEAN v68; // dl
  NTSTATUS v69; // eax
  BOOLEAN v70; // dl
  int v71; // eax
  int v72; // eax
  __int64 v73; // rcx
  bool IsPostDevice; // al
  __int64 v75; // rcx
  unsigned int v76; // r8d
  int v77; // ebx
  int v78; // eax
  __int64 v79; // r8
  unsigned int v80; // ebx
  int v81; // r9d
  struct _DEVICE_OBJECT *v82; // rcx
  int v83; // eax
  int v84; // r12d
  void (__fastcall *v85)(_QWORD); // rax
  _QWORD *v86; // rdi
  __int64 v87; // rcx
  char v88; // al
  __int64 DiagnosticInfoArgs; // rax
  __int64 v90; // r12
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 (__fastcall *v95)(__int64, _QWORD); // rax
  int v96; // eax
  __int64 (__fastcall *v97)(__int64, __int128 *); // rax
  __int64 v98; // rcx
  int v99; // eax
  _DWORD *v100; // rax
  _DWORD *v101; // r12
  __int64 v102; // rax
  int v103; // eax
  unsigned __int64 v104; // rdx
  __int64 v105; // rax
  _DWORD *v106; // rax
  _DWORD *v107; // rbx
  int v108; // eax
  unsigned __int64 v110; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v111; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v112; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v113; // [rsp+28h] [rbp-D8h]
  char v114; // [rsp+50h] [rbp-B0h]
  char v115; // [rsp+51h] [rbp-AFh]
  char v116; // [rsp+52h] [rbp-AEh]
  bool v117; // [rsp+52h] [rbp-AEh]
  char v118; // [rsp+53h] [rbp-ADh]
  char v119; // [rsp+54h] [rbp-ACh]
  char v120; // [rsp+55h] [rbp-ABh]
  __int64 v122; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v125; // [rsp+70h] [rbp-90h]
  _QWORD *v126; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v128; // [rsp+88h] [rbp-78h] BYREF
  void *v129; // [rsp+90h] [rbp-70h]
  _QWORD *v130; // [rsp+98h] [rbp-68h]
  char *v131; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v133[10]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v134; // [rsp+110h] [rbp+10h] BYREF
  __int64 v135; // [rsp+120h] [rbp+20h]
  _OWORD v136[2]; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v137[2]; // [rsp+148h] [rbp+48h] BYREF

  Interval.QuadPart = a6;
  v8 = a2;
  v130 = a7;
  v9 = 0LL;
  memset(v136, 0, 28);
  Handle = 0LL;
  DestinationString = 0LL;
  v125 = a4;
  v10 = 0;
  v129 = a3;
  DeviceExtension = (char *)a1->DeviceExtension;
  v116 = 0;
  v120 = 0;
  v31 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v12 = *((_QWORD *)DeviceExtension + 5);
  v126 = (_QWORD *)v12;
  v115 = 0;
  v114 = 0;
  v118 = 0;
  v119 = 0;
  P = 0LL;
  v128 = MEMORY[0xFFFFF78000000320];
  v131 = DeviceExtension;
  if ( v31 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( *(_BYTE *)(v12 + 134) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            *((_QWORD *)DeviceExtension + 3),
                            (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                            112,
                            3,
                            v110,
                            (__int64)(DeviceExtension + 1000));
      if ( MiniportInterface >= 0 )
      {
        if ( Interval.QuadPart )
        {
          v19 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)DeviceExtension + 131);
          if ( v19 )
          {
            v20 = v19(*((_QWORD *)DeviceExtension + 126), a5);
            LODWORD(started) = v20;
            if ( v20 < 0 )
            {
              WdLogSingleEntry2(2LL, *((_QWORD *)DeviceExtension + 131), v20);
              WdLogGlobalForLineNumber = 15176;
              v10 = 25;
              goto LABEL_20;
            }
            goto LABEL_7;
          }
        }
      }
      else
      {
        memset(DeviceExtension + 1000, 0, 0x70uLL);
      }
      if ( MiniportInterface >= 0 )
      {
LABEL_7:
        memset(v133, 0, sizeof(v133));
        if ( (int)DpiQueryMiniportInterface(
                    *((_QWORD *)DeviceExtension + 3),
                    (__int64)&GUID_DEVINTERFACE_DOD_EXTENDED,
                    80,
                    1,
                    v111,
                    (__int64)v133) >= 0
          && LODWORD(v133[0]) == 65616 )
        {
          if ( v133[4] )
          {
            v14 = v133[5];
            if ( v133[5] )
            {
              v15 = v133[6];
              if ( v133[6] )
              {
                v16 = v133[7];
                if ( v133[7] )
                {
                  v17 = v133[8];
                  if ( v133[8] )
                  {
                    v18 = v133[9];
                    if ( v133[9] )
                    {
                      *(_QWORD *)(v12 + 1008) = v133[4];
                      *(_QWORD *)(v12 + 1088) = v14;
                      *(_QWORD *)(v12 + 1128) = v15;
                      *(_QWORD *)(v12 + 1136) = v16;
                      *(_QWORD *)(v12 + 1312) = v17;
                      *(_QWORD *)(v12 + 1096) = v18;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    v8 = a2;
    *((_DWORD *)DeviceExtension + 1030) = 0;
  }
  v24 = DpiFdoConnectInterrupt(a1);
  LODWORD(started) = v24;
  if ( v24 == -1073741275 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 15250;
  }
  else
  {
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15263;
      v10 = 10;
      goto LABEL_20;
    }
    v116 = 1;
  }
  if ( DpiFdoIsPostDevice((__int64)a1) )
  {
    if ( DeviceExtension[1155] == v25 && v8 && byte_140168DD6 && !DpiFdoIsCompatibleWithHighResolutionBoot(v26) )
    {
      LODWORD(v134) = -1;
      *((_QWORD *)&v134 + 1) = 0LL;
      if ( (qword_1401664C0 & 2) != 0 )
      {
        LOBYTE(v135) = 1;
        LODWORD(v134) = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerEnter);
      }
      else
      {
        LOBYTE(v135) = 0;
      }
      DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v134, 8006);
      memset(v137, 0, sizeof(v137));
      LODWORD(v137[0]) = 18;
      x86BiosCall(16LL, v137);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v134);
      if ( (_BYTE)v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
    }
    if ( v9 )
    {
      v29 = *(_DWORD *)(v12 + 28);
      if ( byte_140168DD6 )
      {
        v30 = v29 < 0x300E;
        v31 = v29 == 12302;
      }
      else
      {
        v30 = v29 < 0x2005;
        v31 = v29 == 8197;
      }
      *(_BYTE *)(v9 + 4040) = (4 * (!v30 && !v31)) | *(_BYTE *)(v9 + 4040) & 0xFB;
    }
  }
  for ( Interval.QuadPart = 0LL; ; Interval.QuadPart = 0LL )
  {
    LODWORD(started) = ExUuidCreate((UUID *)(DeviceExtension + 2680));
    if ( (int)started >= 0 )
      break;
    if ( (_DWORD)started != -1073741267 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15337;
      v10 = 8;
      goto LABEL_20;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  LODWORD(started) = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 337);
  if ( (int)started < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15363;
    v10 = 7;
    goto LABEL_20;
  }
  if ( v9 )
  {
    if ( (unsigned __int8)DpiKsrIsSoftBoot() )
    {
      if ( (int)DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9) >= 0 )
      {
        LODWORD(v122) = 0;
        Interval.QuadPart = 0LL;
        if ( (int)DpiKsrGetSavedAdapterState(a1, &v122, &Interval) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 15398;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 15384;
      }
    }
    if ( DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15412;
    }
    LODWORD(started) = DpiFeatureStartDevice(a1);
    if ( (int)started < 0 )
    {
      WdLogSingleEntry1(2LL);
      v22 = 0LL;
      WdLogGlobalForLineNumber = 15424;
      v10 = 12;
      goto LABEL_21;
    }
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 576LL, 1953656900LL);
  if ( !Pool2 )
  {
    LODWORD(started) = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 15441;
    v10 = 9;
    goto LABEL_20;
  }
  v33 = *(_DWORD *)(v12 + 28);
  Pool2[1] = 0;
  if ( v33 >= 0xD001 )
  {
    *Pool2 = 576;
LABEL_69:
    v34 = *((_DWORD *)DeviceExtension + 687);
    goto LABEL_88;
  }
  v34 = 40971;
  if ( v33 > 0xA00B )
  {
    *Pool2 = 480;
    goto LABEL_69;
  }
  v35 = 36870;
  if ( v33 > 0x9006 )
  {
    *Pool2 = 464;
    goto LABEL_88;
  }
  v34 = 32769;
  if ( v33 > 0x8001 )
  {
    *Pool2 = 456;
LABEL_86:
    v34 = v35;
    goto LABEL_88;
  }
  v35 = 28682;
  if ( v33 > 0x700A )
  {
    *Pool2 = 368;
    goto LABEL_88;
  }
  v34 = 24579;
  if ( v33 > 0x6003 )
  {
    *Pool2 = 360;
    goto LABEL_86;
  }
  v35 = 20515;
  if ( v33 > 0x5023 )
  {
    *Pool2 = 328;
    goto LABEL_88;
  }
  v34 = 16387;
  if ( v33 > 0x4003 )
  {
    *Pool2 = 312;
    goto LABEL_86;
  }
  v35 = 12302;
  if ( v33 > 0x300E )
  {
    *Pool2 = 264;
    goto LABEL_88;
  }
  v34 = 8197;
  if ( v33 > 0x2005 )
  {
    *Pool2 = 256;
    goto LABEL_86;
  }
  *Pool2 = 184;
LABEL_88:
  Pool2[1] = v34;
  *((_QWORD *)Pool2 + 2) = DpEvalAcpiMethod;
  *((_QWORD *)Pool2 + 3) = &DpGetDeviceInformation;
  *((_QWORD *)Pool2 + 4) = DpIndicateChildStatus;
  *((_QWORD *)Pool2 + 5) = &DpMapMemory;
  *((_QWORD *)Pool2 + 6) = DpQueueDpc;
  *((_QWORD *)Pool2 + 7) = DpQueryServices;
  *((_QWORD *)Pool2 + 8) = DpReadDeviceSpace;
  *((_QWORD *)Pool2 + 9) = DpSynchronizeExecution;
  *((_QWORD *)Pool2 + 10) = DpUnmapMemory;
  *((_QWORD *)Pool2 + 11) = DpWriteDeviceSpace;
  *((_QWORD *)Pool2 + 12) = DpIsDevicePresent;
  *((_QWORD *)Pool2 + 13) = DxgGetHandleDataCB;
  *((_QWORD *)Pool2 + 14) = DxgGetHandleParentCB;
  *((_QWORD *)Pool2 + 15) = DxgEnumHandleChildrenCB;
  *((_QWORD *)Pool2 + 16) = DxgNotifyInterruptCB;
  *((_QWORD *)Pool2 + 17) = DxgNotifyDpcCB;
  *((_QWORD *)Pool2 + 18) = DxgMiniportQueryVidPnInterfaceCB;
  *((_QWORD *)Pool2 + 19) = DxgMiniportQueryMonitorInterfaceCB;
  *((_QWORD *)Pool2 + 20) = DxgGetCaptureAddressCB;
  *((_QWORD *)Pool2 + 21) = DxgLogEtwEventCb;
  *((_QWORD *)Pool2 + 22) = DpExcludeAdapterAccess;
  *((_QWORD *)Pool2 + 23) = DxgCreateContextAllocationCB;
  *((_QWORD *)Pool2 + 24) = DxgDestroyContextAllocationCB;
  *((_QWORD *)Pool2 + 25) = &DxgSetPowerComponentActiveCB;
  *((_QWORD *)Pool2 + 26) = DxgSetPowerComponentIdleCB;
  *((_QWORD *)Pool2 + 28) = DxgkPowerRuntimeControlRequestCB;
  *((_QWORD *)Pool2 + 29) = DxgkSetPowerComponentLatencyCB;
  *((_QWORD *)Pool2 + 30) = DxgkSetPowerComponentResidencyCB;
  *((_QWORD *)Pool2 + 31) = DxgkCompleteFStateTransitionCB;
  *((_QWORD *)Pool2 + 32) = DxgkCompletePStateTransitionCB;
  *((_QWORD *)Pool2 + 27) = DpAcquirePostDisplayOwnership;
  *((_QWORD *)Pool2 + 33) = DxgkMapContextAllocationCB;
  *((_QWORD *)Pool2 + 34) = DxgkUpdateContextAllocationCB;
  *((_QWORD *)Pool2 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
  *((_QWORD *)Pool2 + 36) = DxgkAcquireHandleDataCB;
  *((_QWORD *)Pool2 + 37) = DxgkReleaseHandleDataCB;
  *((_QWORD *)Pool2 + 38) = DxgkHardwareContentProtectionTeardownCB;
  *((_QWORD *)Pool2 + 39) = DxgkMultiPlaneOverlayDisabledCB;
  *((_QWORD *)Pool2 + 40) = DxgkMitigatedRangeUpdateCB;
  *((_QWORD *)Pool2 + 1) = a1;
  *((_QWORD *)Pool2 + 42) = DpIndicateConnectorChange;
  LODWORD(v136[0]) = 32;
  v36 = *(_OWORD *)(DeviceExtension + 2680);
  *((_QWORD *)Pool2 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
  *((_QWORD *)Pool2 + 44) = DpAcquirePostDisplayOwnership2;
  *((_QWORD *)Pool2 + 45) = DxgkSetProtectedSessionStatusCB;
  *((_QWORD *)Pool2 + 56) = DxgkCbReportDiagnostic;
  *((_QWORD *)Pool2 + 41) = DxgkInvalidateHwContextCB;
  *((_QWORD *)Pool2 + 57) = DxgkSignalEventCB;
  *((_QWORD *)Pool2 + 58) = DpIsFeatureEnabled;
  *((_QWORD *)Pool2 + 59) = DpSaveMemoryForHotUpdateCB;
  *((_QWORD *)Pool2 + 60) = DxgkNotifyCursorSupportChangeCB;
  *((_QWORD *)Pool2 + 61) = DpQueryFeatureSupport;
  *((_QWORD *)Pool2 + 50) = DxgkPinFrameBufferForSaveCB;
  *((_QWORD *)Pool2 + 51) = DxgkUnpinFrameBufferForSaveCB;
  *((_QWORD *)Pool2 + 52) = DxgkMapFrameBufferPointerCB;
  *((_QWORD *)Pool2 + 53) = DxgkUnmapFrameBufferPointerCB;
  *((_QWORD *)Pool2 + 46) = DxgkAllocateContiguousMemoryCB;
  *((_QWORD *)Pool2 + 47) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)Pool2 + 48) = DxgkAllocatePagesForMdlCB;
  *((_QWORD *)Pool2 + 49) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)Pool2 + 54) = DxgkMapMdlToIoMmuCB;
  *((_QWORD *)Pool2 + 55) = DxgkUnmapMdlFromIoMmuCB;
  *((_QWORD *)Pool2 + 62) = DxgkCreatePhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 63) = DxgkDestroyPhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 64) = DxgkMapPhysicalMemoryCB;
  *((_QWORD *)Pool2 + 65) = DxgkUnmapPhysicalMemoryCB;
  *((_QWORD *)Pool2 + 66) = DxgkAllocateAdlCB;
  *((_QWORD *)Pool2 + 67) = DxgkFreeAdlCB;
  *((_QWORD *)Pool2 + 68) = DxgkOpenPhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 69) = DxgkClosePhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 70) = DxgkPinFrameBufferForSave2CB;
  *((_QWORD *)Pool2 + 71) = DxgkDisconnectDoorbellCB;
  *(_OWORD *)((char *)v136 + 4) = v36;
  *(_QWORD *)((char *)&v136[1] + 4) = *((_QWORD *)DeviceExtension + 337);
  qword_1401691D8 = (__int64)KeGetCurrentThread();
  qword_1401691E0 = (__int64)a1;
  started = (int)DpiDxgkDdiStartDevice(
                   v12,
                   *((_QWORD *)DeviceExtension + 6),
                   (unsigned int)v136,
                   (_DWORD)Pool2,
                   (__int64)(DeviceExtension + 2708),
                   (__int64)(DeviceExtension + 2704));
  ExFreePoolWithTag(Pool2, 0x74727044u);
  qword_1401691E0 = 0LL;
  qword_1401691D8 = 0LL;
  if ( (int)started < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v12 + 152), started);
    WdLogGlobalForLineNumber = 15696;
    if ( (_DWORD)started == -1071775735 )
    {
      Interval.QuadPart = 0LL;
      if ( !DpiFdoIsPostDevice((__int64)a1) )
      {
        v10 = 14;
        goto LABEL_20;
      }
      if ( (int)DpiGetDevicePropertyString(
                  *((PDEVICE_OBJECT *)DeviceExtension + 19),
                  DevicePropertyHardwareID,
                  (__int64)&v122) < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 15737;
        v10 = 13;
        goto LABEL_20;
      }
      WdDiagNotifyUser(8LL, 5LL, 1LL, &Interval);
      if ( Interval.QuadPart )
      {
        ExFreePoolWithTag((PVOID)Interval.QuadPart, 0);
        Interval.QuadPart = 0LL;
      }
    }
    else if ( (_DWORD)started == -1071774944 && DpiFdoIsPostDevice((__int64)a1) )
    {
      WdLogSingleEntry5(0LL, 275LL, 26LL, v12, (unsigned __int8)byte_140168DD6, 0LL);
      WdLogGlobalForLineNumber = 15761;
    }
    v10 = 1;
    goto LABEL_20;
  }
  if ( DpiFdoIsMsBddAnchoredDevice((__int64)a1) )
  {
    xmmword_140169140 = 0LL;
    DWORD2(xmmword_140169140) = -1;
    xmmword_140169130 = 0LL;
    memset(&xmmword_140169150, 0, 0x80uLL);
    dword_1401691D0 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 678) && *((_DWORD *)DeviceExtension + 677) > 1u )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 15789;
    *((_DWORD *)DeviceExtension + 677) = 1;
  }
  v120 = 1;
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 2704) )
    {
      LODWORD(started) = DpiFdoEnumChildDevices(a1);
      if ( (int)started < 0 )
      {
        WdLogSingleEntry1(2LL);
        v22 = 0LL;
        WdLogGlobalForLineNumber = 15819;
        v10 = 15;
        goto LABEL_21;
      }
    }
    LODWORD(started) = DxgkAddAdapter(a1, v129, (struct _DXGK_ADAPTER_CAPS *)(v9 + 4040), v125);
    if ( (int)started < 0 )
    {
      WdLogSingleEntry1(2LL);
      v22 = 0LL;
      WdLogGlobalForLineNumber = 15841;
      v10 = 3;
      goto LABEL_21;
    }
    DxgkAcquireAdapterFdoReference(*(_QWORD *)(v9 + 4032));
    v115 = 1;
    *(_BYTE *)(v9 + 2847) = DXGADAPTER::IsAdapterSessionized(
                              *(DXGADAPTER **)(v9 + 4032),
                              v37,
                              0LL,
                              (unsigned __int64 *)(v9 + 5888));
    v38 = *(_DWORD *)(v9 + 2708);
    if ( v38 )
    {
      v39 = (void *)ExAllocatePool2(256LL, 4LL * v38, 1953656900LL);
      P = v39;
      v22 = v39;
      if ( !v39 )
      {
        LODWORD(started) = -1073741670;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 15881;
        v10 = 16;
        goto LABEL_21;
      }
      LODWORD(started) = DxgkAcquireGdiViewIds(
                           *(_BYTE *)(v9 + 2847),
                           *(_QWORD *)(v9 + 5888),
                           (_DWORD *)(v9 + 2708),
                           (__int64)v39);
      if ( (int)started < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 15895;
        v10 = 17;
        ExFreePoolWithTag(v22, 0);
        v22 = 0LL;
        P = 0LL;
        goto LABEL_21;
      }
    }
    v22 = P;
    v40 = v126;
    v41 = *(_BYTE *)(v9 + 4041) ^ (*(_BYTE *)(v9 + 4041) ^ (2 * *(_BYTE *)(v9 + 4041))) & 8;
    *(_BYTE *)(v9 + 4041) = v41;
    if ( (v41 & 4) != 0 && (!v40[141] || !v40[142]) )
    {
      WdLogSingleEntry1(2LL);
      *(_BYTE *)(v9 + 4041) &= ~8u;
      v41 = *(_BYTE *)(v9 + 4041);
      WdLogGlobalForLineNumber = 15917;
    }
    v42 = (_BYTE *)(v9 + 4040);
    v43 = 0;
    v44 = v41;
    if ( (*(_BYTE *)(v9 + 4040) & 1) != 0 && *(int *)(v9 + 4048) >= 0x2000 && !*(_BYTE *)(v9 + 1158) && (v41 & 8) == 0 )
    {
      Feature_LegacyHPDFiltering__private_IsEnabledPreCheck();
      *(_BYTE *)(v9 + 4041) |= 0x10u;
      v44 = *(_BYTE *)(v9 + 4041);
      v43 = 0;
    }
    if ( (v44 & 8) == 0 && !v40[26] )
    {
      LODWORD(started) = -1073741735;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15950;
      v10 = 18;
      goto LABEL_21;
    }
    if ( *(_BYTE *)(v9 + 2721) && (v44 & 0x20) == 0 )
    {
      LODWORD(started) = -1073741735;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15967;
      v10 = 26;
      goto LABEL_21;
    }
    if ( *(int *)(v9 + 4048) >= 12800 && (*v42 & 1) != 0 && !v40[126] )
    {
      LODWORD(started) = -1073741735;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15985;
      v10 = 19;
      goto LABEL_21;
    }
    if ( qword_140168DF0 )
    {
      v47 = (_BYTE *)(v9 + 2716);
      if ( *(_BYTE *)(v9 + 2716) && (v44 & 1) != 0 && !(_BYTE)word_140168DDD )
        qword_140168DF0 = (__int64)a1;
    }
    else
    {
      if ( (v44 & 1) != 0
        || (v45 = DpiHybridInternalPanelOverride(), v43 = 0, v45)
        && (*v42 & 0x20) != 0
        && DpiFdoIsPostDevice((__int64)a1)
        && (v46 & 0x40) == 0 )
      {
        qword_140168DF0 = (__int64)a1;
      }
      v47 = (_BYTE *)(v9 + 2716);
    }
    if ( (*v42 & 0x40) != 0 )
    {
      if ( qword_140168DE8 && (struct _DEVICE_OBJECT *)qword_140168DE8 != a1 )
      {
        if ( *v47 == v43 || (_BYTE)word_140168DDD != v43 )
        {
          *v42 &= ~0x40u;
          goto LABEL_155;
        }
        *(_BYTE *)(*(_QWORD *)(qword_140168DE8 + 64) + 4040LL) &= ~0x40u;
      }
      qword_140168DE8 = (__int64)a1;
      HIBYTE(word_140168DDD) = (*(_BYTE *)(v9 + 4041) & 2) != 0;
    }
LABEL_155:
    if ( !qword_140168DF0 || !qword_140168DE8 || (_BYTE)word_140168DDD != v43 )
      goto LABEL_161;
    v48 = *(_BYTE *)(*(_QWORD *)(qword_140168DF0 + 64) + 2716LL);
    if ( *(_BYTE *)(*(_QWORD *)(qword_140168DE8 + 64) + 2716LL) == v43 )
    {
      if ( v48 )
      {
LABEL_160:
        LOBYTE(word_140168DDD) = v43;
LABEL_161:
        v49 = v130;
        if ( v130 )
        {
          *v130 = *(_QWORD *)v42;
          *((_DWORD *)v49 + 2) = *(_DWORD *)(v9 + 4048);
        }
        if ( DpiFdoIsPostDevice((__int64)a1) && (v52 & *v42) == 0 && DeviceExtension[2719] == v51 )
        {
          LODWORD(started) = -1071775740;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 16121;
          v10 = 20;
          goto LABEL_21;
        }
        DpiMdmProcessStartAdapter(v50);
        if ( *(_DWORD *)(v9 + 3616) )
        {
          v53 = *(_QWORD *)(v9 + 48);
          v54 = *(_QWORD *)(v9 + 40);
          v134 = 0LL;
          LODWORD(v134) = 67108861;
          v135 = 0LL;
          v55 = DpiDxgkDdiDisplayDetectControl(v9, v54, v53, &v134, v112, v113);
          LODWORD(started) = v55;
          if ( v55 < 0 )
          {
            WdLogSingleEntry2(2LL, v40[141], v55);
            WdLogGlobalForLineNumber = 16154;
            v10 = 4;
            goto LABEL_21;
          }
        }
        if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
        {
          LODWORD(started) = DpiFdoInitializePanelBufferControl(a1);
          if ( (int)started < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 16172;
            v10 = 27;
            goto LABEL_21;
          }
        }
        DpiFdoInitializeMipiDsi((__int64)a1);
        v56 = v125;
        LODWORD(started) = DpiFdoCreateRelatedObjects(a1, *(unsigned int *)(v9 + 2708), v22, v125);
        if ( (int)started < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 16199;
          v10 = 11;
          goto LABEL_21;
        }
        if ( (*(_BYTE *)(v9 + 4040) & 1) != 0 )
        {
          LOBYTE(v57) = 1;
          if ( (int)DpiAcquireCoreSyncAccessSafe(a1, v57) >= 0 )
          {
            MonitorInitializeAdapterDone(*(DXGADAPTER **)(v9 + 4032), v56);
            LOBYTE(v58) = 1;
            DpiReleaseCoreSyncAccessSafe(a1, v58);
          }
        }
        v114 = 1;
        if ( *(_DWORD *)(v9 + 3360) != -1 && (int)DpiMiracastDdiMiracastQueryCaps(v9, v57, v9 + 3352) < 0 )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 16239;
          *(_DWORD *)(v9 + 3360) = -1;
          memset((void *)(v9 + 3288), 0, 0x40uLL);
        }
        if ( (int)DpiOpenPnpRegistryKey(a1, 2LL, 131097LL, &Handle) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
          if ( DxgkRetrieveStringFromRegistry(Handle, &DestinationString, v9 + 4992) < 0 )
          {
            WdLogSingleEntry1(4LL);
            WdLogGlobalForLineNumber = 16285;
          }
          ZwClose(Handle);
        }
        else
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 16260;
        }
        v60 = *(_QWORD *)(v9 + 5008);
        if ( v60 )
        {
          if ( *(_QWORD *)(v60 + 48) && *(_BYTE *)v60 )
          {
            v31 = bTracingEnabled == 0;
            *(_BYTE *)v60 = 0;
            if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
            {
              LODWORD(v112) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 5008) + 2LL);
              McTemplateK0pt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventDpiFdoThermalActiveCooling);
            }
            v61 = *(_QWORD *)(v9 + 5008);
            LOBYTE(v59) = *(_BYTE *)(v61 + 2);
            (*(void (__fastcall **)(_QWORD, __int64))(v61 + 48))(*(_QWORD *)(v61 + 16), v59);
          }
          v62 = *(_QWORD *)(v9 + 5008);
          if ( *(_QWORD *)(v62 + 56) && *(_BYTE *)(v62 + 1) )
          {
            v31 = bTracingEnabled == 0;
            *(_BYTE *)(v62 + 1) = 0;
            if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
            {
              LODWORD(v112) = *(_DWORD *)(*(_QWORD *)(v9 + 5008) + 4LL);
              McTemplateK0pt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventDpiFdoThermalPassiveCooling);
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 5008) + 56LL))(
              *(_QWORD *)(*(_QWORD *)(v9 + 5008) + 16LL),
              *(unsigned int *)(*(_QWORD *)(v9 + 5008) + 4LL));
          }
        }
        LODWORD(started) = DpiFdoInitializeGpuVirtualization(a1);
        if ( (int)started < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 16340;
          v10 = 5;
          goto LABEL_21;
        }
        if ( *(_BYTE *)(v9 + 482) )
        {
          Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck();
          if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 28LL) >= 0x11008u
            && (*(_DWORD *)(v9 + 1324) & 0x2000) != 0
            && *(int *)(v9 + 1368) >= 4
            && (int)DpiQueryMiniportInterface(
                      (__int64)a1,
                      (__int64)&GUID_WDDM_INTERFACE_WAITWAKE,
                      48,
                      1,
                      v112,
                      v9 + 2784) >= 0
            && *(_WORD *)(v9 + 2784) == 48
            && *(_WORD *)(v9 + 2786) == 1
            && *(_QWORD *)(v9 + 2816)
            && *(_QWORD *)(v9 + 2824) )
          {
            v63 = *(_QWORD *)(v9 + 2768);
            *(_DWORD *)(v9 + 2776) = 0;
            if ( v63 || (WorkItem = IoAllocateWorkItem(a1), (*(_QWORD *)(v9 + 2768) = WorkItem) != 0LL) )
            {
              *(_BYTE *)(v9 + 2726) = 1;
            }
            else
            {
              WdLogSingleEntry1(6LL);
              WdLogGlobalForLineNumber = 16402;
            }
          }
          DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 4032));
          if ( *(_BYTE *)(v9 + 5816) )
          {
            LODWORD(started) = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5800), 1u);
            if ( (int)started < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 16424;
              v10 = 22;
              goto LABEL_21;
            }
          }
        }
        DpiBrightnessStartDevice(a1);
        DpiMdmProcessAdapterBrightness((__int64)a1);
        DpiFdoInitializeDP((__int64)a1);
        DpiFdoInitializeDisplayDiagnostics((__int64)a1);
        goto LABEL_220;
      }
    }
    else if ( !v48 )
    {
      goto LABEL_160;
    }
    LOBYTE(word_140168DDD) = 1;
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 929) = 1;
    goto LABEL_161;
  }
LABEL_220:
  v65 = P;
  v22 = P;
  LODWORD(started) = DpiFdoOpenDeviceFileObjectIfNeeded((__int64)DeviceExtension);
  if ( (int)started < 0 )
  {
    WdLogSingleEntry1(2LL);
    v10 = 6;
    v114 = v115;
    WdLogGlobalForLineNumber = 16464;
    goto LABEL_20;
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v66 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v66;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( v9 && v65 && (int)DxgkCommitGdiViewIds(*(_BYTE *)(v9 + 2847), *(_QWORD *)(v9 + 5888)) < 0 )
  {
    v67 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v67;
    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    WdLogSingleEntry1(2LL);
    v10 = 21;
    v114 = v115;
    WdLogGlobalForLineNumber = 16503;
    goto LABEL_21;
  }
  if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
    DxgkInvalidateQdcCache();
  v114 = v115;
  if ( v9 )
  {
    v68 = !*(_BYTE *)(v9 + 1153) || !*(_BYTE *)(v9 + 480);
    v69 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2848), v68);
    v70 = 0;
    LODWORD(started) = v69;
    if ( v69 >= 0 )
    {
      v118 = 1;
      v114 = v115;
      if ( (*(_BYTE *)(v9 + 4041) & 0x20) != 0 )
        goto LABEL_20;
      v114 = v115;
      if ( !*(_QWORD *)(v9 + 2872) )
        goto LABEL_20;
      if ( !*(_BYTE *)(v9 + 1153) || !*(_BYTE *)(v9 + 480) )
        v70 = 1;
      LODWORD(started) = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2864), v70);
      if ( (int)started >= 0 )
      {
        v119 = 1;
      }
      else
      {
        *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
        v72 = *((_DWORD *)DeviceExtension + 69) - 1;
        *((_DWORD *)DeviceExtension + 69) = v72;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (v72 & 7) + 244];
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 16553;
        v10 = 24;
      }
    }
    else
    {
      *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
      v71 = *((_DWORD *)DeviceExtension + 69) - 1;
      *((_DWORD *)DeviceExtension + 69) = v71;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (v71 & 7) + 244];
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 16536;
      v10 = 23;
    }
    v114 = v115;
    goto LABEL_21;
  }
LABEL_20:
  v22 = P;
  if ( v9 )
  {
LABEL_21:
    v23 = *(_QWORD *)(v9 + 4032);
    goto LABEL_245;
  }
  v23 = 0LL;
LABEL_245:
  DxgkLogInternalTriageEvent(
    v23,
    131076,
    -1,
    (__int64)L"Adapter StartDevice has completed with status %1",
    (int)started,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v9 )
  {
    v73 = *(_QWORD *)(v9 + 4032);
    if ( !v73 || v10 )
      LogAdapterStartTelemetry(v9, (GUID *)v125, started, v10);
    else
      DXGADAPTER::AdapterTelemetry(v73, 2LL, v125, (unsigned int)started, 0);
    IsPostDevice = DpiFdoIsPostDevice((__int64)a1);
    v75 = *(_DWORD *)(v9 + 504) != 0 ? 4 : 0;
    v77 = *(_BYTE *)(v9 + 480) & 1 | (2
                                    * ((2
                                      * (*(_BYTE *)(v9 + 2716) & 1 | (4
                                                                    * (v76 & 0xFFFFFF84 | *(_BYTE *)(v9 + 4041) & 1 | (2 * (v76 & 0x38 | v75 | *(_BYTE *)(v9 + 1158) & 1)))))) | IsPostDevice));
    v78 = v76 & 1;
    v79 = (v76 >> 1) & 0x21;
    v80 = v79 | (2 * (v78 | (2 * v77)));
    if ( (int)started >= 0 )
      goto LABEL_308;
  }
  else
  {
    if ( (int)started >= 0 )
    {
      v80 = 0;
      goto LABEL_308;
    }
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DpiFdoStartAdapter failed and FdoContext is null");
    v80 = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
  {
    if ( v9 )
      v81 = *(_DWORD *)(v9 + 1124);
    else
      v81 = 0;
    McTemplateK0qqq_EtwWriteTransfer(v75, &DpiFdoStartAdapterFailed, v79, v81, started, v10);
  }
  v82 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  DeviceExtension[232] = 1;
  IoInvalidateDeviceState(v82);
  if ( *((_DWORD *)DeviceExtension + 59) == 2 )
  {
    v83 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v83;
    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
  }
  if ( v9 )
  {
    if ( v118 == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2848), 0);
    if ( v119 == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2864), 0);
    DpiFdoCleanupFeatureDatabase((struct _FDO_CONTEXT *)v9);
    DpiFdoCleanupGpuVirtualization(v9);
    DpiFdoCleanupMipiDsi(v9);
    DpiFdoCleanupDP((_QWORD *)v9);
    DpiFdoCleanupDisplayDiagnostics(v9);
    if ( v114 == 1 )
      DpiFdoDestroyRelatedObjects((__int64)a1, (__int64)v125);
    if ( P )
    {
      v84 = *(_DWORD *)(v9 + 2708);
      if ( v84 )
      {
        do
          DxgkReleaseGdiViewId(*(_BYTE *)(v9 + 2847), *(_QWORD *)(v9 + 5888), *((_DWORD *)v22 + (unsigned int)--v84), 1);
        while ( v84 );
        DeviceExtension = v131;
      }
    }
    if ( (struct _DEVICE_OBJECT *)qword_140168DE8 == a1 )
    {
      qword_140168DE8 = 0LL;
      word_140168DDD = 0;
    }
    if ( (struct _DEVICE_OBJECT *)qword_140168DF0 == a1 )
    {
      LOBYTE(word_140168DDD) = 0;
      qword_140168DF0 = 0LL;
    }
    if ( v115 == 1 )
    {
      if ( *((_QWORD *)DeviceExtension + 61) )
      {
        PoFxUnregisterDevice();
        *(_QWORD *)(*(_QWORD *)(v9 + 4032) + 3272LL) = 0LL;
        *((_QWORD *)DeviceExtension + 61) = 0LL;
      }
      DpiRemoveAdapter(v125, v9, 0LL, 0LL, 0);
      DxgkReleaseAdapterFdoReference(*(DXGADAPTER **)(v9 + 4032));
      *(_QWORD *)(v9 + 4032) = 0LL;
    }
    DpiFdoRemoveChildDescriptors((__int64)a1);
    v85 = *(void (__fastcall **)(_QWORD))(v9 + 2808);
    if ( v85 )
    {
      v85(*(_QWORD *)(v9 + 2792));
      *(_OWORD *)(v9 + 2784) = 0LL;
      *(_OWORD *)(v9 + 2800) = 0LL;
      *(_OWORD *)(v9 + 2816) = 0LL;
    }
  }
  v86 = v126;
  if ( v120 == 1 && v126 )
  {
    if ( !DpiFdoIsMsBddAnchoredDevice((__int64)a1) && !DpiFdoIsPostDevice(v87)
      || (int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1, 1LL) < 0 )
    {
      DpiDxgkDdiStopDevice(v86, *((_QWORD *)DeviceExtension + 6));
    }
    if ( v9 )
      *(_BYTE *)(v9 + 4040) &= ~4u;
  }
  if ( v116 == 1 )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v88 = DeviceExtension[1162];
  if ( (_DWORD)started != -1071774208 )
  {
    v117 = v88 == 0;
    if ( (_DWORD)started != -1071774207 && !v88 )
    {
      if ( v120 )
        goto LABEL_306;
      if ( !v86[168] )
        goto LABEL_306;
      DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2);
      v90 = DiagnosticInfoArgs;
      if ( !DiagnosticInfoArgs )
        goto LABEL_306;
      *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
      v91 = *((_QWORD *)DeviceExtension + 19);
      LODWORD(v122) = *(_DWORD *)(DiagnosticInfoArgs + 216);
      if ( ((int (__fastcall *)(__int64, __int64))v86[168])(v91, DiagnosticInfoArgs) >= 0 )
      {
        if ( *(_DWORD *)(v90 + 220) > (unsigned int)v122 )
          *(_DWORD *)(v90 + 220) = 0;
        if ( v86 )
          v92 = v86[19];
        else
          v92 = 0LL;
        DxgCreateLiveDumpWithDriverBlob(
          *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
          0x1B0u,
          *(int *)(v90 + 8),
          (int)started,
          v80,
          v92,
          (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v90);
        v117 = 0;
      }
      DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v90);
      if ( v117 )
LABEL_306:
        DxgCreateLiveDumpWithWdLogs(403LL, 2052LL);
    }
  }
LABEL_308:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( DeviceExtension[1153] && DpiFdoIsPostDevice((__int64)a1) )
    NotifyUserMSBDAIfApplicable();
  v93 = 0LL;
  LODWORD(v122) = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1158] )
    {
      v94 = *(_QWORD *)(v9 + 1008);
      if ( v94 )
      {
        v95 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v95 )
        {
          v96 = v95(v94, (unsigned int)started);
          if ( v96 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1064), v96);
            WdLogGlobalForLineNumber = 16875;
          }
        }
        v97 = *(__int64 (__fastcall **)(__int64, __int128 *))(v9 + 1080);
        if ( v97 )
        {
          v135 = 0LL;
          v98 = *(_QWORD *)(v9 + 1008);
          v134 = 0LL;
          v99 = v97(v98, &v134);
          if ( v99 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1080), v99);
            WdLogGlobalForLineNumber = 16895;
          }
          else
          {
            v93 = *((_QWORD *)&v134 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v134);
            LODWORD(v122) = v135;
          }
        }
      }
    }
    v100 = (_DWORD *)ExAllocatePool2(256LL, 96LL, 1953656900LL);
    v101 = v100;
    if ( v100 )
    {
      memset(v100, 0, 0x60uLL);
      v102 = *((_QWORD *)DeviceExtension + 337);
      *v101 = 41;
      v101[13] = (unsigned int)a1 & 0xFFFF00;
      v101[1] = 96;
      v101[12] = started;
      *((_QWORD *)v101 + 7) = v102;
      v103 = DxgkDiagCalcDuration1us(&v128);
      v104 = *(_QWORD *)(v9 + 5888);
      v101[16] = v103;
      v101[17] = *(_DWORD *)(v9 + 4048);
      v101[22] = v122;
      v101[18] = v80;
      *((_QWORD *)v101 + 10) = v93;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v101, v104);
      ExFreePoolWithTag(v101, 0x74727044u);
    }
    if ( (struct _DEVICE_OBJECT *)qword_140169078 == a1 )
    {
      v105 = *(_QWORD *)(v9 + 40);
      if ( v105 )
      {
        if ( *(_QWORD *)(v105 + 408) )
          SendBDDDiagTelemetry(v9);
      }
    }
  }
  else
  {
    v106 = (_DWORD *)ExAllocatePool2(256LL, 64LL, 1953656900LL);
    v107 = v106;
    if ( v106 )
    {
      memset(v106, 0, 0x40uLL);
      v108 = DxgkDiagCalcDuration1us(&v128);
      *v107 = 6;
      v107[1] = 64;
      v107[10] = 0;
      *((_QWORD *)v107 + 4) = 0LL;
      *((_QWORD *)v107 + 1) = 0LL;
      *((_OWORD *)v107 + 1) = 0LL;
      v107[12] = 35;
      v107[13] = (unsigned int)a1 & 0xFFFF00;
      v107[14] = v108;
      v107[15] = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v107, 0x200000000uLL);
      ExFreePoolWithTag(v107, 0x74727044u);
    }
  }
  return (unsigned int)started;
}

/*
 * XREFs of ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290
 * Callers:
 *     DxgkQueryAdapterInfoInternal @ 0x1401B81C0 (DxgkQueryAdapterInfoInternal.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022A2B0 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryAdapterInfo @ 0x14039A270 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140016CC4 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140016D90 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140035350 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x140039EE0 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14003C2B4 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x14004EEA0 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1400561EC (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     DxgkInvalidateDeviceState @ 0x14006C7B4 (DxgkInvalidateDeviceState.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140073D58 (-GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x14018FCF0 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x14019206C (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x140192658 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1401952E8 (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x14019E1BC (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1401A764C (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1402BFC04 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1402BFC94 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1402BFE58 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140358D30 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14038C110 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x14039137C (DpiQueryAdapterRegistryInfo.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140392D40 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1403B0220 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403B02D8 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1403C171C (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1403C3CE8 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1403D04C0 (DpiIsDriverUpdateInProgress.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1403D93D4 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1403E67EC (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1403E792C (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z @ 0x1403F3AA0 (-QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1403FA85C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403FB3D8 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x140413DE0 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x140414D60 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiReadBlockListInfo @ 0x140417648 (DpiReadBlockListInfo.c)
 *     ?QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z @ 0x140426818 (-QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x14042FC54 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoImpl(struct _D3DKMT_QUERYADAPTERINFO *Src, char a2, struct DXGADAPTER *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  const wchar_t *v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  int *v14; // rax
  int *v15; // rsi
  __int64 v16; // rcx
  bool v17; // zf
  struct DXGADAPTER **v18; // r9
  struct DXGADAPTER *v19; // r14
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  int PairingAdapters; // eax
  struct DXGADAPTER *v24; // rbx
  __int64 v25; // rbx
  struct DXGADAPTER *v26; // r14
  int v27; // eax
  char v28; // cl
  __int64 v29; // rax
  unsigned int v30; // r9d
  int v31; // eax
  unsigned int v32; // r8d
  __int64 v33; // r9
  DXGADAPTER *v34; // r10
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int PnPRegistryPath; // eax
  __int64 v40; // r8
  unsigned __int64 v41; // r9
  char *v42; // r8
  int v43; // eax
  DXGPROCESS *v44; // r15
  int v45; // eax
  __int64 v46; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int v48; // eax
  int v49; // ecx
  bool v50; // zf
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rdx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v56; // rdx
  _DWORD *v57; // rdx
  __int64 v58; // r8
  int v59; // eax
  __int64 v60; // r8
  int v61; // eax
  bool v62; // zf
  unsigned int v63; // eax
  int v64; // eax
  __int64 v65; // rbx
  __int64 HostSilo; // rax
  int v67; // ebx
  __int64 v68; // rax
  ADAPTER_RENDER *v69; // r14
  __int64 v70; // rbx
  char v71; // cl
  __int64 v72; // rcx
  _BYTE *v73; // rax
  unsigned int v74; // eax
  unsigned int v75; // r8d
  const void **v76; // rbx
  size_t v77; // r8
  DXGADAPTER *v78; // rax
  struct DXGADAPTER *v79; // r10
  DXGADAPTER *v80; // rbx
  int *AdapterType; // rax
  int v82; // ecx
  int v83; // eax
  int v84; // eax
  int v85; // edx
  char v86; // cl
  int v87; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  void *v89; // rbx
  __int64 v90; // rcx
  int v91; // ebx
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  __int64 v93; // rdx
  char **v94; // r8
  char v95; // cl
  size_t v96; // rbx
  __int64 v97; // r14
  __int64 v98; // r8
  int v99; // ebx
  int v100; // eax
  unsigned __int64 v101; // rax
  int DisplayOnlyDriverPreferPhysicallyContiguous; // eax
  int v103; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int Registry; // [rsp+50h] [rbp-1E8h]
  void *Srca[2]; // [rsp+58h] [rbp-1E0h] BYREF
  size_t Size; // [rsp+68h] [rbp-1D0h]
  char v108; // [rsp+70h] [rbp-1C8h] BYREF
  char v109; // [rsp+71h] [rbp-1C7h]
  int v110; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v111; // [rsp+80h] [rbp-1B8h]
  char v112; // [rsp+88h] [rbp-1B0h]
  unsigned __int64 v113; // [rsp+90h] [rbp-1A8h] BYREF
  struct DXGPROCESS *Current; // [rsp+98h] [rbp-1A0h]
  struct DXGADAPTER *v115; // [rsp+A0h] [rbp-198h] BYREF
  unsigned int v116; // [rsp+A8h] [rbp-190h]
  unsigned int v117; // [rsp+ACh] [rbp-18Ch] BYREF
  DXGADAPTER *v118; // [rsp+B0h] [rbp-188h] BYREF
  struct DXGADAPTER *v119; // [rsp+B8h] [rbp-180h] BYREF
  void *v120; // [rsp+C0h] [rbp-178h]
  DXGADAPTER *v121[2]; // [rsp+C8h] [rbp-170h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v122; // [rsp+D8h] [rbp-160h] BYREF
  int v123; // [rsp+F0h] [rbp-148h]
  int *v124; // [rsp+F8h] [rbp-140h]
  unsigned __int64 v125; // [rsp+100h] [rbp-138h] BYREF
  _BYTE v126[56]; // [rsp+108h] [rbp-130h] BYREF
  _BYTE v127[144]; // [rsp+140h] [rbp-F8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO Str2; // [rsp+1D0h] [rbp-68h] BYREF

  v109 = a2;
  v110 = -1;
  v111 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v112 = 1;
    v110 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v112 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v110, 2015);
  Current = DXGPROCESS::GetCurrent(v6);
  Registry = 0;
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3295;
    v8 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_77:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
    if ( v112 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    }
    return v7;
  }
  if ( a3 && a2 )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3304;
    v8 = L"Not valid to provide pAdapter when calling from usermode, return 0x%I64x";
    goto LABEL_7;
  }
  *(_OWORD *)Srca = 0LL;
  Size = 0LL;
  v120 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(Srca, Src, 0x18uLL);
  }
  else
  {
    *(_OWORD *)Srca = *(_OWORD *)&Src->hAdapter;
    Size = *(_QWORD *)&Src->PrivateDriverDataSize;
  }
  Str2.OutputDataSize = HIDWORD(Srca[0]);
  if ( !Srca[1] )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3329;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
    if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( !(_DWORD)Size )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3338;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
    if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v12 = ((_DWORD)Size + 7) & 0xFFFFFFF8;
  v117 = v12;
  v123 = (Size + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v12 < (unsigned int)Size )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3352;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
    if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v14 = (int *)operator new[](v12, 0x4B677844u, 64LL);
  v15 = v14;
  v124 = v14;
  v120 = v14;
  if ( v14 )
  {
    if ( SHIDWORD(Srca[0]) > 47 )
    {
      if ( SHIDWORD(Srca[0]) > 63 )
      {
        if ( HIDWORD(Srca[0]) != 64 && HIDWORD(Srca[0]) != 67 && (unsigned int)(HIDWORD(Srca[0]) - 71) >= 2 )
          goto LABEL_61;
        goto LABEL_62;
      }
      if ( HIDWORD(Srca[0]) == 63
        || HIDWORD(Srca[0]) == 48
        || HIDWORD(Srca[0]) == 50
        || HIDWORD(Srca[0]) == 51
        || HIDWORD(Srca[0]) == 61 )
      {
        goto LABEL_62;
      }
      v17 = HIDWORD(Srca[0]) == 62;
    }
    else
    {
      if ( HIDWORD(Srca[0]) == 47 )
        goto LABEL_62;
      if ( SHIDWORD(Srca[0]) > 25 )
      {
        if ( HIDWORD(Srca[0]) != 31
          && HIDWORD(Srca[0]) != 34
          && HIDWORD(Srca[0]) != 41
          && HIDWORD(Srca[0]) != 42
          && HIDWORD(Srca[0]) != 46 )
        {
          goto LABEL_61;
        }
        goto LABEL_62;
      }
      if ( HIDWORD(Srca[0]) == 25
        || HIDWORD(Srca[0]) == 1
        || HIDWORD(Srca[0]) == 7
        || HIDWORD(Srca[0]) == 9
        || HIDWORD(Srca[0]) == 16 )
      {
        goto LABEL_62;
      }
      v17 = HIDWORD(Srca[0]) == 23;
    }
    if ( !v17 )
    {
LABEL_61:
      memset(v14, 0, (unsigned int)Size);
      goto LABEL_65;
    }
LABEL_62:
    if ( v109 )
      RtlCopyFromUser(v14, Srca[1], (unsigned int)Size);
    else
      memmove(v14, Srca[1], (unsigned int)Size);
LABEL_65:
    v118 = a3;
    v18 = &v118;
    if ( a3 )
      v18 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)v121,
      (unsigned int)Srca[0],
      (struct _KTHREAD **)Current,
      v18,
      1);
    v19 = v118;
    if ( !v118 )
    {
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, LODWORD(Srca[0]), -1073741811LL);
      WdLogGlobalForLineNumber = 3429;
LABEL_75:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
LABEL_76:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v121, v21);
      goto LABEL_77;
    }
    v20 = 0;
    v116 = 0;
    if ( HIDWORD(Srca[0]) == 9 )
    {
      if ( (_DWORD)Size != 48 )
      {
        v7 = -1073741811;
        WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
        WdLogGlobalForLineNumber = 3450;
        goto LABEL_75;
      }
    }
    else
    {
      if ( HIDWORD(Srca[0]) != 67 )
      {
LABEL_82:
        v115 = 0LL;
        v119 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v118, v20, &v115, &v113, &v119, &v125, 0);
        LODWORD(v113) = PairingAdapters;
        if ( PairingAdapters >= 0 || HIDWORD(Srca[0]) == 9 || HIDWORD(Srca[0]) == 67 )
        {
          v24 = v119;
        }
        else
        {
          v24 = 0LL;
          PairingAdapters = DxgkpGetPairingAdapters(v19, v116, &v115, &v113, 0LL, 0LL, 0);
          LODWORD(v113) = PairingAdapters;
        }
        if ( PairingAdapters < 0 )
        {
          v25 = v116;
          WdLogSingleEntry2(2LL, v19, v116);
          WdLogGlobalForLineNumber = 3519;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
            (__int64)v19,
            v25,
            0LL,
            0LL,
            0LL);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
          v7 = v113;
          goto LABEL_76;
        }
        v26 = v115;
        if ( v115 != v118 && v24 != v118 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3528;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pRenderAdapter == pAdapterIn) || (pDisplayAdapter == pAdapterIn)",
            3528LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v24 && !*((_QWORD *)v24 + 395) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3530;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
            3530LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !v26 || !*((_QWORD *)v26 + 396) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3532;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
            3532LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( HIDWORD(Srca[0]) > 0x1B || (v27 = 138619200, v28 = 1, !_bittest(&v27, HIDWORD(Srca[0]))) )
          v28 = 0;
        if ( v118 == v26 && *((_BYTE *)v118 + 209) || v26 && *((_BYTE *)v26 + 209) && !v28 )
        {
          if ( HIDWORD(Srca[0]) > 0x39 || (v29 = 0x210F85840908010LL, !_bittest64(&v29, SHIDWORD(Srca[0]))) )
          {
            if ( HIDWORD(Srca[0]) != 68 )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                (DXGADAPTERSTOPRESETLOCKSHARED *)&Str2,
                v26,
                1);
              if ( *((_DWORD *)v26 + 50) == 1 )
              {
                *(void **)&v122.hAdapter = Srca[0];
                *(_QWORD *)&v122.PrivateDriverDataSize = Size;
                v122.pPrivateDriverData = v15;
                v31 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                        (struct DXGADAPTER *)((char *)v26 + 4712),
                        Current,
                        &v122,
                        v30);
                Registry = v31;
                if ( v31 >= 0 )
                {
                  Registry = PostProcessUMDFileName(SHIDWORD(Srca[0]), (char *)v15, v117);
                }
                else
                {
                  WdLogSingleEntry2(3LL, LODWORD(Srca[0]), v31);
                  WdLogGlobalForLineNumber = 3584;
                }
              }
              else
              {
                Registry = -1073741130;
              }
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Str2);
              goto LABEL_563;
            }
          }
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v127, v26, v24);
        DXGADAPTER::ReleaseReference(v26);
        if ( v24 )
          DXGADAPTER::ReleaseReference(v24);
        if ( HIDWORD(Srca[0]) == 9 || HIDWORD(Srca[0]) == 67 )
        {
          Registry = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v127, 0LL);
          if ( Registry >= 0 )
          {
            if ( !v24 || !*((_QWORD *)v24 + 395) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3617;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
                3617LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( HIDWORD(Srca[0]) == 9 )
            {
              DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v24 + 395), *v15);
              if ( *(_DWORD *)DisplayModeInfo )
              {
                *(_OWORD *)(v15 + 1) = *(_OWORD *)DisplayModeInfo;
                *(_OWORD *)(v15 + 5) = *((_OWORD *)DisplayModeInfo + 1);
                *(_QWORD *)(v15 + 9) = *((_QWORD *)DisplayModeInfo + 4);
                v15[11] = *((_DWORD *)DisplayModeInfo + 10);
              }
              else
              {
                Registry = -1071774919;
                WdLogSingleEntry2(3LL, (unsigned int)*v15, v24);
                WdLogGlobalForLineNumber = 3635;
              }
            }
            else if ( HIDWORD(Srca[0]) == 67 )
            {
              v117 = *v15;
              LODWORD(v113) = 0;
              *(_QWORD *)&Str2.Type = 33LL;
              *(_QWORD *)&Str2.InputDataSize = 4LL;
              *(_QWORD *)&Str2.Flags.0 = 0LL;
              HIDWORD(Str2.hKmdProcessHandle) = 0;
              Str2.pOutputData = &v113;
              Str2.OutputDataSize = 4;
              Str2.pInputData = &v117;
              v103 = DXGADAPTER::DdiQueryAdapterInfo(v24, &Str2);
              Registry = v103;
              if ( v103 < 0 )
              {
                WdLogSingleEntry2(3LL, (unsigned int)*v15, v103);
                WdLogGlobalForLineNumber = 3670;
              }
              else
              {
                v15[1] = v113;
              }
            }
            goto LABEL_559;
          }
        }
        else
        {
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
            (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126,
            v26,
            v24);
          v34 = v118;
          if ( *((_DWORD *)v118 + 50) == 1 && *((_DWORD *)v26 + 50) == 1 && (!v24 || *((_DWORD *)v24 + 50) == 1) )
          {
            if ( SHIDWORD(Srca[0]) <= 41 )
            {
              if ( HIDWORD(Srca[0]) == 41 )
              {
                if ( (_DWORD)Size != 24 )
                {
                  Registry = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4787;
                  goto LABEL_545;
                }
                PnPRegistryPath = DxgkReadPnPRegistryPath(v26, *v15, v15[1], *((void **)v15 + 1), *((_QWORD *)v15 + 2));
                goto LABEL_146;
              }
              if ( SHIDWORD(Srca[0]) <= 22 )
              {
                if ( HIDWORD(Srca[0]) != 22 )
                {
                  if ( SHIDWORD(Srca[0]) <= 11 )
                  {
                    if ( HIDWORD(Srca[0]) != 11 )
                    {
                      if ( !HIDWORD(Srca[0]) )
                      {
                        memset(&Str2, 0, 24);
                        *(_OWORD *)&Str2.OutputDataSize = 0LL;
                        Str2.pOutputData = v15;
                        Str2.OutputDataSize = Size;
                        v44 = Current;
                        v45 = *((_DWORD *)Current + 102);
                        if ( (v45 & 0x100) != 0 )
                          Str2.Flags.Value = (Str2.Flags.Value | 1) ^ ((*(_BYTE *)&Str2.Flags.0 | 1) ^ (unsigned __int8)(2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)Current + 74) + 592LL) + 336LL))) & 2;
                        v46 = *((_QWORD *)v26 + 396);
                        KeEnterCriticalRegion();
                        ExAcquirePushLockSharedEx(v46 + 72, 0LL);
                        _InterlockedAdd((volatile signed __int32 *)(v46 + 88), 1u);
                        RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v44, *((_DWORD *)v26 + 60));
                        if ( RenderAdapterInfo )
                          Str2.hKmdProcessHandle = (HANDLE)*((_QWORD *)RenderAdapterInfo + 6);
                        _InterlockedDecrement((volatile signed __int32 *)(v46 + 88));
                        ExReleasePushLockSharedEx(v46 + 72, 0LL);
                        KeLeaveCriticalRegion();
                        PnPRegistryPath = DXGADAPTER::DdiQueryAdapterInfo(v26, &Str2);
                        goto LABEL_146;
                      }
                      if ( HIDWORD(Srca[0]) == 1 )
                      {
                        if ( (_DWORD)Size == 524 )
                        {
                          v43 = ADAPTER_RENDER::CopyUmdFileName(
                                  *((ADAPTER_RENDER **)v26 + 396),
                                  (struct _D3DKMT_UMDFILENAMEINFO *)v15);
                          Registry = v43;
                          if ( v43 < 0 )
                          {
                            WdLogSingleEntry3(4LL, v15, v26, v43);
                            WdLogGlobalForLineNumber = 3729;
                          }
                        }
                        else
                        {
                          Registry = -1073741811;
                          WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                          WdLogGlobalForLineNumber = 3720;
                        }
                        goto LABEL_545;
                      }
                      v35 = (unsigned int)(HIDWORD(Srca[0]) - 2);
                      if ( HIDWORD(Srca[0]) == 2 )
                      {
                        if ( (_DWORD)Size == 528 )
                        {
                          v40 = *((_QWORD *)v26 + 396);
                          if ( (*((_DWORD *)Current + 102) & 8) != 0 )
                          {
                            v15[130] = *(_DWORD *)(v40 + 712);
                            v15[131] = *(_DWORD *)(v40 + 716);
                            v41 = *(unsigned __int16 *)(v40 + 696);
                            v42 = *(char **)(v40 + 704);
                          }
                          else
                          {
                            v15[130] = *(_DWORD *)(v40 + 688);
                            v15[131] = *(_DWORD *)(v40 + 692);
                            v41 = *(unsigned __int16 *)(v40 + 672);
                            v42 = *(char **)(v40 + 680);
                          }
                          Registry = RtlStringCbCopyNW((char *)v15, v35, v42, v41);
                          if ( Registry < 0 )
                          {
                            WdLogSingleEntry1(2LL);
                            WdLogGlobalForLineNumber = 3903;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"CopyIcdFileName failed with 0x%I64x",
                              Registry,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                        }
                        else
                        {
                          Registry = -1073741811;
                          WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                          WdLogGlobalForLineNumber = 3880;
                        }
                        goto LABEL_545;
                      }
                      if ( HIDWORD(Srca[0]) == 3 )
                      {
                        if ( (_DWORD)Size == 24 )
                        {
                          v115 = 0LL;
                          VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                            *(VIDMM_EXPORT **)(*((_QWORD *)v26 + 396) + 760LL),
                            *(const struct VIDMM_GLOBAL **)(*((_QWORD *)v26 + 396) + 768LL),
                            0,
                            (unsigned __int64 *)&v115,
                            (unsigned __int64 *)&v115,
                            (unsigned __int64 *)&v115,
                            (unsigned __int64 *)v15,
                            (unsigned __int64 *)v15 + 1,
                            (unsigned __int64 *)v15 + 2);
                        }
                        else
                        {
                          Registry = -1073741811;
                          WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                          WdLogGlobalForLineNumber = 3919;
                        }
                        goto LABEL_545;
                      }
                      if ( HIDWORD(Srca[0]) != 4 )
                      {
                        if ( HIDWORD(Srca[0]) == 5 )
                        {
                          if ( (_DWORD)Size != 12 )
                          {
                            Registry = -1073741811;
                            WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                            WdLogGlobalForLineNumber = 4103;
                            goto LABEL_545;
                          }
                          PnPRegistryPath = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 736LL)
                                                                                                 + 8LL)
                                                                                     + 528LL))(
                                              *(_QWORD *)(*((_QWORD *)v26 + 396) + 744LL),
                                              v15);
                          goto LABEL_146;
                        }
                        if ( HIDWORD(Srca[0]) != 6 )
                        {
                          if ( HIDWORD(Srca[0]) == 7 )
                          {
                            if ( (_DWORD)Size != 12 )
                            {
                              Registry = -1073741811;
                              WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                              WdLogGlobalForLineNumber = 3989;
                              goto LABEL_545;
                            }
                            v36 = *(_QWORD *)(*((_QWORD *)v26 + 396) + 760LL);
                            v37 = *((_QWORD *)Current + 8);
                            if ( v37 )
                              v38 = *(_QWORD *)(v37 + 8LL * (unsigned int)(*(_DWORD *)v36 - 1));
                            else
                              v38 = 0LL;
                            PnPRegistryPath = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(v36 + 8) + 360LL))(
                                                v38,
                                                v15);
                            goto LABEL_146;
                          }
                          if ( HIDWORD(Srca[0]) == 8 )
                          {
LABEL_138:
                            if ( (_DWORD)Size != 2080 )
                            {
                              Registry = -1073741811;
                              WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                              WdLogGlobalForLineNumber = 4149;
                              goto LABEL_545;
                            }
                            Registry = -1073741823;
                            if ( HIDWORD(Srca[0]) == 8 )
                              v26 = v118;
                            if ( !v26 )
                              goto LABEL_545;
                            PnPRegistryPath = DpiQueryAdapterRegistryInfo(*((_QWORD *)v26 + 27), (char *)v15);
LABEL_146:
                            Registry = PnPRegistryPath;
                            goto LABEL_545;
                          }
LABEL_501:
                          Registry = -1073741811;
                          WdLogSingleEntry2(3LL, SHIDWORD(Srca[0]), -1073741811LL);
                          WdLogGlobalForLineNumber = 5437;
                          goto LABEL_545;
                        }
                        goto LABEL_423;
                      }
                      goto LABEL_430;
                    }
LABEL_408:
                    if ( (_DWORD)Size != 4 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4174;
                      goto LABEL_545;
                    }
                    Registry = -1073741823;
                    if ( HIDWORD(Srca[0]) == 11 )
                      v26 = v118;
                    if ( !v26 )
                      goto LABEL_545;
                    v86 = 0;
                    v108 = 0;
                    v87 = *((_DWORD *)v26 + 111);
                    if ( (v87 & 0x20) != 0 || (v87 & 4) != 0 )
                    {
                      IsDriverUpdateInProgress = 0;
                    }
                    else
                    {
                      IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v26 + 27), &v108);
                      v86 = v108;
                    }
                    *v15 = IsDriverUpdateInProgress;
                    if ( v86 )
                    {
                      v89 = (void *)*((_QWORD *)v26 + 27);
                      ObfReferenceObject(v89);
                      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126);
                      DxgkInvalidateDeviceState((__int64)v89);
                      ObfDereferenceObject(v89);
                    }
                    goto LABEL_429;
                  }
                  if ( HIDWORD(Srca[0]) != 12 )
                  {
                    if ( HIDWORD(Srca[0]) != 13 )
                    {
                      if ( HIDWORD(Srca[0]) != 15 )
                      {
                        if ( HIDWORD(Srca[0]) == 16 )
                        {
                          if ( (_DWORD)Size != 8 )
                          {
                            Registry = -1073741811;
                            WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                            WdLogGlobalForLineNumber = 4306;
                            goto LABEL_545;
                          }
                          if ( (*((_DWORD *)DXGPROCESS::GetCurrent(SHIDWORD(Srca[0])) + 102) & 4) == 0 )
                          {
                            Registry = -1073741790;
                            WdLogSingleEntry1(3LL);
                            WdLogGlobalForLineNumber = 4315;
                            goto LABEL_545;
                          }
                          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126);
                          PnPRegistryPath = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                              v118,
                                              (__int64)lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                          goto LABEL_146;
                        }
                        if ( HIDWORD(Srca[0]) != 17 )
                        {
                          if ( HIDWORD(Srca[0]) == 18 )
                          {
                            if ( (_DWORD)Size != 8 )
                            {
                              Registry = -1073741811;
                              WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                              WdLogGlobalForLineNumber = 4361;
                              goto LABEL_545;
                            }
                            PnPRegistryPath = ADAPTER_RENDER::GetUmdFileVersion(
                                                *((ADAPTER_RENDER **)v26 + 396),
                                                (union _LARGE_INTEGER *)v15);
                            goto LABEL_146;
                          }
                          if ( HIDWORD(Srca[0]) != 19 )
                          {
                            if ( HIDWORD(Srca[0]) != 20 )
                            {
                              if ( HIDWORD(Srca[0]) == 21 )
                              {
                                if ( (_DWORD)Size == 520 )
                                {
                                  if ( (_BYTE)word_140168DDD
                                    && *((_BYTE *)v26 + 2983)
                                    && (*((_DWORD *)v26 + 754) & 0x20) == 0 )
                                  {
                                    v48 = ADAPTER_RENDER::CopyDListFileName(
                                            *((ADAPTER_RENDER **)v26 + 396),
                                            (unsigned __int16 *)v15,
                                            v32);
                                    Registry = v48;
                                    if ( v48 < 0 )
                                    {
                                      WdLogSingleEntry3(4LL, v15, v26, v48);
                                      WdLogGlobalForLineNumber = 3806;
                                    }
                                  }
                                  else
                                  {
                                    Registry = -1073741637;
                                    WdLogSingleEntry3(4LL, v15, v26, -1073741637LL);
                                    WdLogGlobalForLineNumber = 3816;
                                  }
                                }
                                else
                                {
                                  Registry = -1073741811;
                                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                                  WdLogGlobalForLineNumber = 3789;
                                }
                                goto LABEL_545;
                              }
                              goto LABEL_501;
                            }
                            if ( (_DWORD)Size != 4 )
                            {
                              Registry = -1073741811;
                              WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                              WdLogGlobalForLineNumber = 4429;
                              goto LABEL_545;
                            }
                            v49 = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v26 + 396)) != 0;
LABEL_189:
                            *v15 = v49;
                            goto LABEL_545;
                          }
                          if ( (_DWORD)Size != 4 )
                          {
                            Registry = -1073741811;
                            WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                            WdLogGlobalForLineNumber = 4397;
                            goto LABEL_545;
                          }
                          if ( !v24 || (*((_DWORD *)v24 + 111) & 0x100) == 0 )
                          {
                            v50 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 2979LL) == 0;
LABEL_195:
                            if ( v50 )
                              goto LABEL_196;
LABEL_230:
                            *v15 = 1;
                            goto LABEL_545;
                          }
LABEL_196:
                          *v15 = 0;
                          goto LABEL_545;
                        }
                        goto LABEL_386;
                      }
                      goto LABEL_392;
                    }
LABEL_399:
                    if ( (_DWORD)Size != 4 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4238;
                      goto LABEL_545;
                    }
                    Registry = -1073741823;
                    if ( HIDWORD(Srca[0]) == 13 )
                      v26 = v118;
                    if ( !v26 )
                      goto LABEL_545;
                    v85 = *((_DWORD *)v26 + 761);
                    *v15 = v85;
                    if ( (*((_DWORD *)Current + 102) & 0x100) == 0 )
                      goto LABEL_429;
                    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Current + 74) + 592LL) + 392LL) > 0x10u )
                      goto LABEL_429;
                    v84 = 2600;
                    if ( v85 <= 2600 )
                      goto LABEL_429;
                    goto LABEL_407;
                  }
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4216;
                    goto LABEL_545;
                  }
                  *v15 = 0;
                  v51 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 2508LL) >> 5;
                  goto LABEL_208;
                }
                goto LABEL_379;
              }
              if ( SHIDWORD(Srca[0]) <= 32 )
              {
                switch ( HIDWORD(Srca[0]) )
                {
                  case 0x20:
                    if ( (_DWORD)Size == 4 )
                    {
                      QueryDriverCapsExt(v24, (struct _D3DKMT_DRIVERCAPS_EXT *)v15);
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4805;
                    }
                    goto LABEL_545;
                  case 0x17:
                    if ( (_DWORD)Size == 16 )
                    {
                      if ( v15[1] )
                      {
                        if ( (*((_DWORD *)DXGPROCESS::GetCurrent(SHIDWORD(Srca[0])) + 102) & 4) == 0 )
                        {
                          Registry = -1073741790;
                          WdLogSingleEntry1(3LL);
                          WdLogGlobalForLineNumber = 4459;
                          goto LABEL_545;
                        }
                        if ( v15[1] )
                        {
                          *(_DWORD *)(*((_QWORD *)v26 + 396) + 1240LL) = v15[3];
                          goto LABEL_545;
                        }
                      }
                      v15[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v26 + 396));
                      v15[3] = *(_DWORD *)(*((_QWORD *)v26 + 396) + 1240LL);
                      goto LABEL_545;
                    }
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4454;
LABEL_545:
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126);
LABEL_559:
                    if ( Registry >= 0 && (*((_DWORD *)Current + 102) & 0x200) != 0 )
                      Registry = PostProcessUMDFileName(SHIDWORD(Srca[0]), (char *)v15, Size);
                    goto LABEL_562;
                  case 0x18:
                    if ( (_DWORD)Size == 4 )
                    {
                      DXGADAPTER::QueryWDDM2_0Caps(v26, (struct _D3DKMT_WDDM_2_0_CAPS *)v15);
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4513;
                    }
                    goto LABEL_545;
                  case 0x19:
                    if ( (_DWORD)Size != 78 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4603;
                      goto LABEL_545;
                    }
                    PnPRegistryPath = DXGADAPTER::QueryNodeMetadata(v26, *v15, (struct _DXGK_NODEMETADATA *)(v15 + 1));
                    goto LABEL_146;
                }
                v53 = (unsigned int)(HIDWORD(Srca[0]) - 26);
                if ( HIDWORD(Srca[0]) == 26 )
                {
                  if ( (_DWORD)Size == 520 )
                  {
                    v60 = *((_QWORD *)v26 + 396);
                    *(_WORD *)v15 = 0;
                    v61 = RtlStringCbCopyNW((char *)v15, v53, *(char **)(v60 + 648), *(unsigned __int16 *)(v60 + 640));
                    Registry = v61;
                    if ( v61 < 0 )
                    {
                      WdLogSingleEntry3(4LL, v15, v26, v61);
                      WdLogGlobalForLineNumber = 4632;
                    }
                  }
                  else
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4620;
                  }
                  goto LABEL_545;
                }
                if ( HIDWORD(Srca[0]) != 27 )
                {
                  if ( HIDWORD(Srca[0]) == 28 )
                  {
                    if ( (_DWORD)Size != 4 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4691;
                      goto LABEL_545;
                    }
                    v49 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 2500LL) & 0x10) != 0;
                    goto LABEL_189;
                  }
                  v54 = (unsigned int)(HIDWORD(Srca[0]) - 29);
                  if ( HIDWORD(Srca[0]) == 29 )
                  {
                    if ( (_DWORD)Size == 520 )
                    {
                      v58 = *((_QWORD *)v26 + 396);
                      *(_WORD *)v15 = 0;
                      v59 = RtlStringCbCopyNW((char *)v15, v54, *(char **)(v58 + 664), *(unsigned __int16 *)(v58 + 656));
                      Registry = v59;
                      if ( v59 < 0 )
                      {
                        WdLogSingleEntry3(4LL, v15, v26, v59);
                        WdLogGlobalForLineNumber = 4658;
                      }
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4646;
                    }
                    goto LABEL_545;
                  }
                  if ( HIDWORD(Srca[0]) != 30 )
                  {
                    if ( (_DWORD)Size == 28 )
                    {
                      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v26);
                      if ( (unsigned int)v56 >= NumDifferentPhysicalAdapters )
                      {
                        Registry = -1073741811;
                        WdLogSingleEntry2(3LL, v56, -1073741811LL);
                        WdLogGlobalForLineNumber = 4771;
                      }
                      else
                      {
                        _mm_lfence();
                        v57 = *(_DWORD **)(*(_QWORD *)(352 * v56 + *((_QWORD *)v26 + 379) + 8) + 64LL);
                        v15[1] = v57[281];
                        v15[2] = v57[282];
                        v15[3] = v57[283];
                        v15[4] = v57[284];
                        v15[5] = v57[285];
                        v15[6] = v57[280];
                      }
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4747;
                    }
                    goto LABEL_545;
                  }
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4717;
                    goto LABEL_545;
                  }
                  *v15 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v26);
                  if ( (*((_DWORD *)Current + 102) & 0x100) == 0
                    || (**((_DWORD **)v26 + 381) & 0x1000000) != 0
                    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 27) + 64LL) + 40LL) + 28LL) < 0xF003u )
                  {
                    goto LABEL_545;
                  }
                  goto LABEL_230;
                }
                if ( (_DWORD)Size != 4 )
                {
                  Registry = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4673;
                  goto LABEL_545;
                }
                v51 = *((_DWORD *)v118 + 111) >> 9;
                goto LABEL_208;
              }
              switch ( HIDWORD(Srca[0]) )
              {
                case '!':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4823;
                    goto LABEL_545;
                  }
                  *(_OWORD *)&v122.hAdapter = 0LL;
                  v64 = DxgkMiracastQueryMiracastSupportInternal(&v122);
                  if ( v64 != -1073741637 )
                  {
                    if ( v64 < 0 )
                    {
                      Registry = v64;
                      WdLogSingleEntry1(3LL);
                      WdLogGlobalForLineNumber = 4837;
                      goto LABEL_545;
                    }
                    v49 = 2 - (LOBYTE(v122.pPrivateDriverData) != 0);
                    goto LABEL_189;
                  }
                  goto LABEL_196;
                case '"':
                  if ( (_DWORD)Size == 12 )
                  {
                    v63 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v26);
                    if ( (*((_DWORD *)v26 + 627) & 0x40) != 0 )
                    {
                      if ( *v15 < v63 )
                      {
                        ADAPTER_RENDER::QueryGpuMmuCaps(
                          *((ADAPTER_RENDER **)v26 + 396),
                          *v15,
                          (struct _D3DKMT_GPUMMU_CAPS *)(v15 + 1));
                      }
                      else
                      {
                        Registry = -1073741811;
                        WdLogSingleEntry2(3LL, (unsigned int)*v15, -1073741811LL);
                        WdLogGlobalForLineNumber = 4881;
                      }
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry1(3LL);
                      WdLogGlobalForLineNumber = 4871;
                    }
                  }
                  else
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4860;
                  }
                  goto LABEL_545;
                case '#':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4900;
                    goto LABEL_545;
                  }
                  v62 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 3084LL) == 0;
                  break;
                case '$':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4925;
                    goto LABEL_545;
                  }
                  v49 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 368);
                  goto LABEL_189;
                case '%':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4943;
                    goto LABEL_545;
                  }
                  v62 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 3085LL) == 0;
                  break;
                case '&':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4968;
                    goto LABEL_545;
                  }
                  v62 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 3086LL) == 0;
                  break;
                case '\'':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4993;
                    goto LABEL_545;
                  }
                  v62 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 3087LL) == 0;
                  break;
                default:
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 5018;
                    goto LABEL_545;
                  }
                  v62 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 3088LL) == 0;
                  break;
              }
LABEL_287:
              v52 = !v62;
              goto LABEL_209;
            }
            if ( SHIDWORD(Srca[0]) <= 61 )
            {
              if ( HIDWORD(Srca[0]) == 61 )
              {
                if ( (_DWORD)Size != 56 )
                {
                  Registry = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5218;
                  goto LABEL_545;
                }
                PnPRegistryPath = DXGADAPTER::GetNodePerfData(v26, (struct _D3DKMT_NODE_PERFDATA *)v15);
                goto LABEL_146;
              }
              if ( SHIDWORD(Srca[0]) > 51 )
              {
                switch ( HIDWORD(Srca[0]) )
                {
                  case '4':
LABEL_430:
                    if ( (_DWORD)Size != 16 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4036;
                      goto LABEL_545;
                    }
                    if ( HIDWORD(Srca[0]) == 4 )
                      v26 = v118;
                    if ( v26 )
                    {
                      *(_OWORD *)v15 = *(_OWORD *)((char *)v26 + 300);
                      goto LABEL_545;
                    }
                    goto LABEL_436;
                  case '5':
LABEL_423:
                    if ( (_DWORD)Size != 12 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4124;
                      goto LABEL_545;
                    }
                    Registry = -1073741823;
                    if ( HIDWORD(Srca[0]) == 6 )
                      v26 = v118;
                    if ( !v26 )
                      goto LABEL_545;
                    v90 = *(_QWORD *)(*((_QWORD *)v26 + 27) + 64LL);
                    *v15 = *(_DWORD *)(v90 + 1144);
                    v15[1] = *(unsigned __int16 *)(v90 + 1150);
                    v15[2] = (unsigned __int16)*(_DWORD *)(v90 + 1148);
                    goto LABEL_429;
                  case '6':
                    goto LABEL_138;
                  case '7':
                    goto LABEL_408;
                  case '8':
                    goto LABEL_399;
                  case '9':
LABEL_392:
                    if ( (_DWORD)Size != 4 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4273;
                      goto LABEL_545;
                    }
                    Registry = -1073741823;
                    v80 = v26;
                    if ( HIDWORD(Srca[0]) == 15 )
                      v80 = v118;
                    if ( !v80 )
                      goto LABEL_545;
                    AdapterType = DXGADAPTER::GetAdapterType(v80, (int *)&v117);
                    v82 = *AdapterType;
                    *v15 = *AdapterType;
                    v83 = v82 ^ ((unsigned __int16)v82 ^ (unsigned __int16)(*((unsigned __int8 *)v26 + 212) << 8)) & 0x100;
                    *v15 = v83;
                    if ( !*((_DWORD *)v80 + 852) )
                      goto LABEL_429;
                    v84 = v83 | 0x2000;
LABEL_407:
                    *v15 = v84;
                    goto LABEL_429;
                  case ':':
LABEL_386:
                    if ( (_DWORD)Size != 12 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4337;
                      goto LABEL_545;
                    }
                    Registry = -1073741823;
                    if ( HIDWORD(Srca[0]) == 17 )
                      v26 = v118;
                    if ( !v26 )
                      goto LABEL_545;
                    DXGADAPTER::QueryWDDM1_2Caps(v26, (struct _D3DKMT_WDDM_1_2_CAPS *)v15);
                    goto LABEL_429;
                }
                if ( HIDWORD(Srca[0]) != 59 )
                {
                  if ( (_DWORD)Size != 80 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4065;
                    goto LABEL_545;
                  }
                  if ( !*((_QWORD *)v118 + 27) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 4073;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pAdapterIn->GetFdo() != NULL",
                      4073LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v34 = v118;
                  }
                  v76 = (const void **)((*(_QWORD *)(*((_QWORD *)v34 + 27) + 64LL) + 4896LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 27) + 64LL) + 4904LL) != 0LL));
                  if ( v76 )
                  {
                    memset(v15, 0, 0x50uLL);
                    v77 = 78LL;
                    if ( *(_WORD *)v76 < 0x4Eu )
                      v77 = *(unsigned __int16 *)v76;
                    memmove(v15, v76[1], v77);
                    goto LABEL_545;
                  }
LABEL_436:
                  Registry = -1073741823;
                  goto LABEL_545;
                }
LABEL_379:
                if ( (_DWORD)Size != 4 )
                {
                  Registry = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4483;
                  goto LABEL_545;
                }
                Registry = -1073741823;
                v78 = v26;
                if ( HIDWORD(Srca[0]) == 22 )
                  v78 = v118;
                if ( !v78 )
                  goto LABEL_545;
                DXGADAPTER::QueryWDDM1_3Caps(v78, (struct _D3DKMT_WDDM_1_3_CAPS *)v15);
                if ( v79 != v26 )
                {
                  LODWORD(v113) = 0;
                  DXGADAPTER::QueryWDDM1_3Caps(v26, (struct _D3DKMT_WDDM_1_3_CAPS *)&v113);
                  *v15 = v113 & 0x20 | *v15 & 0xFFFFFFDF;
                }
                goto LABEL_429;
              }
              if ( HIDWORD(Srca[0]) != 51 )
              {
                switch ( HIDWORD(Srca[0]) )
                {
                  case '*':
                    if ( (_DWORD)Size == 56 )
                    {
                      v74 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v26);
                      if ( v75 >= v74 )
                      {
                        WdLogSingleEntry2(3LL, (unsigned int)*v15, -1073741811LL);
                        WdLogGlobalForLineNumber = 3972;
                      }
                      else
                      {
                        VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                          *(VIDMM_EXPORT **)(*((_QWORD *)v26 + 396) + 760LL),
                          *(const struct VIDMM_GLOBAL **)(*((_QWORD *)v26 + 396) + 768LL),
                          v75,
                          (unsigned __int64 *)v15 + 4,
                          (unsigned __int64 *)v15 + 5,
                          (unsigned __int64 *)v15 + 6,
                          (unsigned __int64 *)v15 + 1,
                          (unsigned __int64 *)v15 + 2,
                          (unsigned __int64 *)v15 + 3);
                      }
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 3948;
                    }
                    goto LABEL_545;
                  case '+':
                    if ( (_DWORD)Size != 4 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5043;
                      goto LABEL_545;
                    }
                    v62 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL) + 3089LL) == 0;
                    goto LABEL_287;
                  case ',':
                    if ( (_DWORD)Size == 1 )
                    {
                      *(_BYTE *)v15 = 1;
                      if ( *((_DWORD *)v26 + 105) == 1297040209 )
                      {
                        wcscpy((wchar_t *)&Str2, L"Qualcomm Adreno 530");
                        if ( !wcsncmp(*((const wchar_t **)v26 + 245), (const wchar_t *)&Str2, 0x14uLL)
                          && (*(_DWORD *)(*((_QWORD *)v26 + 379) + 16LL) & 0x10) == 0 )
                        {
                          *(_BYTE *)v15 = 0;
                        }
                      }
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5068;
                    }
                    goto LABEL_545;
                  case '-':
                    if ( (_DWORD)Size != 4 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5115;
                      goto LABEL_545;
                    }
                    if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v26 + 396)) )
                      goto LABEL_230;
                    v72 = *(_QWORD *)(*((_QWORD *)v26 + 396) + 16LL);
                    v73 = (_BYTE *)(v72 + 3089);
                    if ( *(_QWORD *)(v72 + 1224) )
                    {
                      if ( *v73 )
                        goto LABEL_230;
                    }
                    if ( !*(_QWORD *)(v72 + 1232) )
                      goto LABEL_196;
                    v50 = *v73 == 0;
                    goto LABEL_195;
                  case '.':
                    if ( (_DWORD)Size == 12 )
                    {
                      if ( v15[1] )
                      {
                        v68 = (unsigned int)*v15;
                        if ( (unsigned int)v68 < 0x10 )
                          *(_BYTE *)(v68 + *((_QWORD *)v26 + 396) + 1224) = v15[2] != 0;
                      }
                      else
                      {
                        v69 = (ADAPTER_RENDER *)*((_QWORD *)v26 + 396);
                        v70 = (unsigned int)*v15;
                        if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v69) && (unsigned int)v70 < 0x10 )
                          v71 = *((_BYTE *)v69 + v70 + 1224);
                        else
                          v71 = 0;
                        v15[2] = v71 != 0;
                      }
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5143;
                    }
                    goto LABEL_545;
                  case '/':
                    if ( (_DWORD)Size == 8 )
                    {
                      v115 = 0LL;
                      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                        (DXGDEVICEBYHANDLE *)&v119,
                        *v15,
                        (struct _KTHREAD **)Current,
                        &v115);
                      if ( v115 )
                      {
                        *((_BYTE *)v15 + 4) = *((_BYTE *)v115 + 1954);
                        v67 = 0;
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL);
                        WdLogGlobalForLineNumber = 5180;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Invalid hDevice (0x%I64x) specified",
                          (unsigned int)*v15,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v67 = -1073741811;
                      }
                      Registry = v67;
                      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v119);
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5165;
                    }
                    goto LABEL_545;
                  case '0':
                    v65 = 0LL;
                    if ( (*((_DWORD *)Current + 102) & 0x200) != 0 )
                    {
                      HostSilo = PsGetHostSilo();
                      v65 = PsAttachSiloToCurrentThread(HostSilo);
                    }
                    Registry = DxgkpQueryRegistry(v26, (unsigned int *)v15, Size);
                    if ( v65 )
                      PsAttachSiloToCurrentThread(v65);
                    goto LABEL_545;
                  case '1':
                    if ( (_DWORD)Size != 8 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 4379;
                      goto LABEL_545;
                    }
                    PnPRegistryPath = ADAPTER_RENDER::GetKmdFileVersion(
                                        *((ADAPTER_RENDER **)v26 + 396),
                                        (union _LARGE_INTEGER *)v15);
                    goto LABEL_146;
                }
              }
              if ( (unsigned int)Size < 8 )
              {
                Registry = -1073741811;
                WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                WdLogGlobalForLineNumber = 5197;
                goto LABEL_545;
              }
              LOBYTE(v33) = HIDWORD(Srca[0]) == 50;
              PnPRegistryPath = DpiReadBlockListInfo(*((_QWORD *)v26 + 27), v15, (unsigned int)Size, v33);
              goto LABEL_146;
            }
            if ( SHIDWORD(Srca[0]) > 73 )
            {
              switch ( HIDWORD(Srca[0]) )
              {
                case 'J':
                  if ( (_DWORD)Size == 8 )
                  {
                    if ( v24 )
                    {
                      *(_QWORD *)v15 = 0LL;
                      v101 = 0LL;
                      if ( !*((_QWORD *)v24 + 396) )
                      {
                        DisplayOnlyDriverPreferPhysicallyContiguous = ADAPTER_DISPLAY::GetDisplayOnlyDriverPreferPhysicallyContiguous(*((ADAPTER_DISPLAY **)v24 + 395));
                        v101 = DisplayOnlyDriverPreferPhysicallyContiguous ^ (*(_QWORD *)v15 ^ DisplayOnlyDriverPreferPhysicallyContiguous) & 0xFFFFFFFFFFFFFFFEuLL;
                        *(_QWORD *)v15 = v101;
                      }
                      if ( *((_BYTE *)v24 + 3010) )
                        *(_QWORD *)v15 = v101 | 2;
                    }
                    else
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry1(3LL);
                      WdLogGlobalForLineNumber = 5380;
                    }
                  }
                  else
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 5374;
                  }
                  goto LABEL_545;
                case 'K':
                  if ( (_DWORD)Size == 4 )
                  {
                    DXGADAPTER::QueryWDDM2_9Caps(v26, (struct _D3DKMT_WDDM_2_9_CAPS *)v15);
                  }
                  else
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4549;
                  }
                  goto LABEL_545;
                case 'L':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 5405;
                    goto LABEL_545;
                  }
                  v100 = *((_DWORD *)v26 + 627);
                  if ( (v100 & 0x10000) != 0 )
                  {
                    *v15 = 3;
                    goto LABEL_545;
                  }
                  if ( (v100 & 0x8000) != 0 )
                  {
                    *v15 = 2;
                    goto LABEL_545;
                  }
                  v51 = (unsigned __int8)v100 >> 4;
                  goto LABEL_208;
                case 'M':
                  if ( (_DWORD)Size == 4 )
                  {
                    DXGADAPTER::QueryWDDM3_0Caps(v26, (struct _D3DKMT_WDDM_3_0_CAPS *)v15);
                  }
                  else
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4567;
                  }
                  goto LABEL_545;
                case 'N':
                  if ( (unsigned int)Size >= 0x208 )
                  {
                    v98 = *((_QWORD *)v26 + 396);
                    if ( *(_WORD *)(v98 + 592) )
                      v99 = RtlStringCbCopyNW(
                              (char *)v15,
                              (unsigned int)(HIDWORD(Srca[0]) - 78),
                              *(char **)(v98 + 600),
                              *(unsigned __int16 *)(v98 + 592));
                    else
                      v99 = -1073741811;
                    Registry = v99;
                    if ( v99 < 0 )
                    {
                      WdLogSingleEntry3(4LL, v15, v26, v99);
                      WdLogGlobalForLineNumber = 3751;
                    }
                  }
                  else
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 3742;
                  }
                  goto LABEL_545;
                case 'O':
                  v96 = 520LL;
                  if ( (unsigned int)Size >= 0x208 )
                  {
                    v97 = *(_QWORD *)(*((_QWORD *)v26 + 27) + 64LL);
                    memset(v15, 0, 0x208uLL);
                    if ( *(_WORD *)(v97 + 2896) <= 0x208u )
                      v96 = *(unsigned __int16 *)(v97 + 2896);
                    memmove(v15, *(const void **)(v97 + 2904), v96);
                    *((_WORD *)v15 + 1) = 92;
                  }
                  else
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 3765;
                  }
                  goto LABEL_545;
                case 'P':
                  if ( (_DWORD)Size != 4 )
                  {
                    Registry = -1073741811;
                    WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                    WdLogGlobalForLineNumber = 4585;
                    goto LABEL_545;
                  }
                  *v15 = 0;
                  if ( !*((_QWORD *)v26 + 396) )
                    goto LABEL_545;
                  v51 = *((_DWORD *)v26 + 626) >> 11;
                  goto LABEL_208;
              }
              if ( HIDWORD(Srca[0]) != 81 )
                goto LABEL_501;
              if ( (_DWORD)Size != 4 )
              {
                Registry = -1073741811;
                WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                WdLogGlobalForLineNumber = 3852;
                goto LABEL_545;
              }
              if ( !(_BYTE)word_140168DDD || !*((_BYTE *)v26 + 2983) )
              {
                Registry = -1073741637;
                WdLogSingleEntry3(4LL, v15, v26, -1073741637LL);
                WdLogGlobalForLineNumber = 3866;
                goto LABEL_545;
              }
              v51 = *((_DWORD *)v26 + 754) >> 7;
            }
            else
            {
              if ( HIDWORD(Srca[0]) != 73 )
              {
                switch ( HIDWORD(Srca[0]) )
                {
                  case '>':
                    if ( (_DWORD)Size != 64 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5235;
                      goto LABEL_545;
                    }
                    PnPRegistryPath = DXGADAPTER::GetAdapterPerfData(v26, (struct _D3DKMT_ADAPTER_PERFDATA *)v15);
                    goto LABEL_146;
                  case '?':
                    if ( (_DWORD)Size != 40 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5252;
                      goto LABEL_545;
                    }
                    PnPRegistryPath = DXGADAPTER::GetAdapterPerfDataCaps(
                                        v26,
                                        (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v15);
                    goto LABEL_146;
                  case '@':
                    if ( (_DWORD)Size != 132 )
                    {
                      Registry = -1073741811;
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                      WdLogGlobalForLineNumber = 5269;
                      goto LABEL_545;
                    }
                    PnPRegistryPath = DXGADAPTER::GetGpuVersion(v26, (struct _D3DKMT_GPUVERSION *)v15);
                    goto LABEL_146;
                }
                if ( HIDWORD(Srca[0]) != 65 && HIDWORD(Srca[0]) != 66 )
                {
                  switch ( HIDWORD(Srca[0]) )
                  {
                    case 'D':
                      if ( (_DWORD)Size == 1 )
                      {
                        if ( v26 )
                          v95 = *((_BYTE *)v26 + 210);
                        else
                          v95 = 0;
                        *(_BYTE *)v15 = v95;
                      }
                      else
                      {
                        Registry = -1073741811;
                        WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                        WdLogGlobalForLineNumber = 5336;
                      }
                      goto LABEL_545;
                    case 'F':
                      if ( (_DWORD)Size == 4 )
                      {
                        DXGADAPTER::QueryWDDM2_7Caps(v26, (struct _D3DKMT_WDDM_2_7_CAPS *)v15);
                      }
                      else
                      {
                        Registry = -1073741811;
                        WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                        WdLogGlobalForLineNumber = 4531;
                      }
                      goto LABEL_545;
                    case 'G':
                      if ( (_DWORD)Size == 524 )
                      {
                        if ( *v15
                          || (DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(
                                                                                     *((_QWORD *)v26 + 396),
                                                                                     0),
                              (unsigned int)IsNullUmdDriver(DisplayUMDFileName)) )
                        {
                          v91 = -1073741811;
                        }
                        else
                        {
                          v91 = RtlStringCbCopyNW((char *)v15 + 4, v93, v94[1], *(unsigned __int16 *)v94);
                        }
                        Registry = v91;
                        if ( v91 < 0 )
                        {
                          WdLogSingleEntry3(4LL, v15, v26, v91);
                          WdLogGlobalForLineNumber = 5320;
                        }
                      }
                      else
                      {
                        Registry = -1073741811;
                        WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                        WdLogGlobalForLineNumber = 5311;
                      }
                      goto LABEL_545;
                    case 'H':
                      if ( (_DWORD)Size != 12 )
                      {
                        Registry = -1073741811;
                        WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                        WdLogGlobalForLineNumber = 5356;
                        goto LABEL_545;
                      }
                      PnPRegistryPath = DXGADAPTER::QueryTrackedWorkloadSupport(
                                          v26,
                                          (unsigned int)*v15,
                                          (enum DXGK_ENGINE_TYPE)v15[1],
                                          v15 + 2);
                      goto LABEL_146;
                  }
                  goto LABEL_501;
                }
                if ( (_DWORD)Size != 0x2000 )
                {
                  Registry = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5288;
                  goto LABEL_545;
                }
                Registry = -1073741823;
                if ( HIDWORD(Srca[0]) == 65 )
                  v26 = v118;
                if ( !v26 )
                  goto LABEL_545;
                DXGADAPTER::GetDeviceDescriptor(v26, 0x2000u, (unsigned __int16 *)v15);
LABEL_429:
                Registry = 0;
                goto LABEL_545;
              }
              if ( (_DWORD)Size != 4 )
              {
                Registry = -1073741811;
                WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                WdLogGlobalForLineNumber = 3827;
                goto LABEL_545;
              }
              if ( !(_BYTE)word_140168DDD || !*((_BYTE *)v26 + 2983) )
              {
                Registry = -1073741637;
                WdLogSingleEntry3(4LL, v15, v26, -1073741637LL);
                WdLogGlobalForLineNumber = 3841;
                goto LABEL_545;
              }
              v51 = *((_DWORD *)v26 + 754) >> 5;
            }
            LOBYTE(v51) = ~(_BYTE)v51;
LABEL_208:
            v52 = v51 & 1;
LABEL_209:
            *v15 = v52;
            goto LABEL_545;
          }
          Registry = -1073741130;
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126);
        }
LABEL_562:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v127);
LABEL_563:
        if ( Registry >= 0 )
        {
          if ( v109 )
            RtlCopyToUser(Srca[1], v15, (unsigned int)Size);
          else
            memmove(Srca[1], v15, (unsigned int)Size);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
        v7 = Registry;
        goto LABEL_76;
      }
      if ( (_DWORD)Size != 8 )
      {
        v7 = -1073741811;
        WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
        WdLogGlobalForLineNumber = 3471;
        goto LABEL_75;
      }
    }
    v20 = *v15;
    v116 = *v15;
    goto LABEL_82;
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 3362;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
  if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return 3221225495LL;
}

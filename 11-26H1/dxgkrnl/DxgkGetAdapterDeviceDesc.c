/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1402AD2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x14004B600 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1400559D4 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401CE964 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1402AC5B8 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402ACB84 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402AD220 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1402AF984 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x14032032C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403402BC (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1403B958C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1403C01D0 (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1403C9028 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x1403D3F84 (-MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YA?AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z @ 0x1403D41F8 (-D3dPixelFormatToDisplayConfigPixelFormat@@YA-AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(
        struct _LUID a1,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  unsigned int Value; // r13d
  __int64 v8; // rdi
  DXGGLOBAL *Global; // rax
  struct HDXGMONITOR__ *v10; // r14
  int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // edx
  unsigned __int64 *v14; // rcx
  struct DXGADAPTER **v15; // rax
  struct DXGADAPTER *v16; // rsi
  DXGADAPTER *v17; // r14
  struct DXGADAPTER *v18; // r8
  struct HDXGMONITOR__ *v19; // r12
  char *v20; // r8
  unsigned __int16 *v21; // rax
  _WORD *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r8
  _WORD *v25; // r9
  unsigned __int64 v26; // rcx
  _WORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct SESSION_VIEW *SessionViewOwner; // rsi
  char *v32; // r8
  unsigned __int16 *v33; // rax
  _WORD *v34; // rdx
  _WORD *v35; // r8
  unsigned __int64 v36; // rcx
  _WORD *v37; // rax
  __int64 v38; // rcx
  int v40; // r13d
  __int64 v41; // rcx
  unsigned int v42; // ecx
  __int64 v43; // rsi
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r12
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rax
  MONITOR_MGR *v52; // rsi
  int MonitorInstance; // eax
  struct DXGMONITOR *v54; // rsi
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v55; // esi
  int CurrentWireFormatAndColorSpace; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v57; // ecx
  struct HDXGMONITOR__ *v58; // r12
  int v59; // edx
  void *v60; // r8
  __int64 v61; // rsi
  unsigned int v62; // eax
  __int64 v63; // rsi
  int v64; // esi
  int MonitorNativeFlags; // esi
  DXGGLOBAL *v66; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v68; // rcx
  int v69; // eax
  _BOOL8 v70; // rbx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v73; // rcx
  _BOOL8 v74; // rbx
  __int64 v75; // rax
  unsigned int v76; // eax
  unsigned __int8 v77[4]; // [rsp+50h] [rbp-B0h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v78; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int8 v79[8]; // [rsp+58h] [rbp-A8h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v80[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v81; // [rsp+68h] [rbp-98h] BYREF
  BOOL v82; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v83; // [rsp+78h] [rbp-88h] BYREF
  struct DXGMONITOR *v84[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v85; // [rsp+90h] [rbp-70h]
  __int128 v86; // [rsp+A0h] [rbp-60h]
  struct HDXGMONITOR__ *MonitorHandle; // [rsp+B0h] [rbp-50h] BYREF
  int v88; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v89; // [rsp+C0h] [rbp-40h]
  char v90; // [rsp+C8h] [rbp-38h]
  _BYTE v91[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct DXGADAPTER *v92; // [rsp+D8h] [rbp-28h]
  char v93; // [rsp+E0h] [rbp-20h]
  char v94; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v95[144]; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  v78.0 = a2.0;
  Value = a2.Value;
  *(struct _LUID *)v80 = a1;
  v88 = -1;
  v89 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v90 = 1;
    v88 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v90 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v88, 2185);
  v83 = 0LL;
  v8 = 0LL;
  v81 = 0LL;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7196;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pDisplayInfo", 7196LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  MonitorHandle = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&MonitorHandle);
  v10 = MonitorHandle;
  if ( !MonitorHandle )
  {
    LODWORD(v12) = -1073741811;
    v40 = 1144079361;
    WdLogSingleEntry3(2LL, v80[1], a1.LowPart, 1144079361LL);
    WdLogGlobalForLineNumber = 7212;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetAdapterDeviceDesc function.",
      v80[1],
      a1.LowPart,
      1144079361LL,
      0LL,
      0LL);
    goto LABEL_62;
  }
  v11 = DxgkAcquireSessionModeChangeLock(0LL);
  v12 = v11;
  v82 = v11 >= 0;
  v77[0] = v11 >= 0;
  if ( v11 < 0 )
  {
    v40 = 1144079362;
    WdLogSingleEntry2(2LL, v11, 1144079362LL);
    WdLogGlobalForLineNumber = 7230;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v12,
      1144079362LL,
      0LL,
      0LL,
      0LL);
LABEL_130:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v77);
    goto LABEL_62;
  }
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
    goto LABEL_10;
  v66 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v66);
  if ( !SessionData )
  {
    LODWORD(v12) = -1073741811;
    v40 = 1144079369;
    v70 = PsGetCurrentProcess(v68) != (_QWORD)PsInitialSystemProcess;
    CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry3(2LL, ProcessSessionId, v70, 1144079369LL);
    WdLogGlobalForLineNumber = 7260;
    v74 = PsGetCurrentProcess(v73) != (_QWORD)PsInitialSystemProcess;
    v75 = PsGetCurrentProcess(PsInitialSystemProcess);
    v76 = PsGetProcessSessionId(v75);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Remote session: No session data for session 0x%I64x!!! System Process %I64d (0x%I64x)",
      v76,
      v74,
      1144079369LL,
      0LL,
      0LL);
    goto LABEL_130;
  }
  if ( *((_DWORD *)SessionData + 4627) == *((_DWORD *)v10 + 103)
    && *((_DWORD *)SessionData + 4628) == *((_DWORD *)v10 + 104) )
  {
    v4 = *((_DWORD *)SessionData + 4629);
  }
  if ( Value != -1 && Value >= v4 )
  {
    LODWORD(v12) = -1073741811;
    v40 = 1144079363;
    WdLogSingleEntry3(2LL, v78.Value, v4, 1144079363LL);
    WdLogGlobalForLineNumber = 7274;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Remote session: VidPnSourceId 0x%I64x is not less than the number of VidPnSources 0x%I64x.  (0x%I64x)",
      v78.Value,
      v4,
      1144079363LL,
      0LL,
      0LL);
    goto LABEL_130;
  }
  Value = -1;
  v78.Value = -1;
LABEL_10:
  v13 = 0;
  v14 = (unsigned __int64 *)&v94;
  if ( Value == -1 )
    v14 = 0LL;
  v15 = &v83;
  if ( Value == -1 )
    v15 = 0LL;
  else
    v13 = Value;
  if ( (int)DxgkpGetPairingAdapters(v10, v13, &v81, (unsigned __int64 *)v84, v15, v14, 0) < 0 )
  {
    LODWORD(v12) = -1073741811;
    v40 = 1144079364;
    WdLogSingleEntry4(2LL, v80[1], a1.LowPart, v78.Value, 1144079364LL);
    WdLogGlobalForLineNumber = 7308;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter (0x%I64x%08I64x) VidPn source 0x%I64x! (0x%I64x)",
      v80[1],
      a1.LowPart,
      v78.Value,
      1144079364LL,
      0LL);
LABEL_60:
    if ( v82 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_62;
  }
  v16 = v81;
  if ( !v81 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7313;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 7313LL, 0LL, 0LL, 0LL, 0LL);
  }
  v17 = v83;
  if ( (Value == -1) != (v83 == 0LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7314;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_UNINITIALIZED) == (pDisplayAdapter == NULL)",
      7314LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v17 && (*((_DWORD *)v17 + 111) & 0x100) != 0 )
  {
    v84[0] = 0LL;
    if ( (int)DxgkpGetIndirectDisplayPairedAdapter(v17, 0, v84) >= 0 )
      v8 = *(_QWORD *)((char *)v84[0] + 412);
    if ( v84[0] )
      DXGADAPTER::ReleaseReference(v84[0]);
    v84[0] = 0LL;
  }
  v18 = v17;
  if ( !v17 )
    v18 = v16;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v95, v16, v18);
  v19 = MonitorHandle;
  DXGADAPTER::ReleaseReference(MonitorHandle);
  DXGADAPTER::ReleaseReference(v16);
  if ( v17 )
    DXGADAPTER::ReleaseReference(v17);
  else
    v17 = v16;
  v92 = v16;
  v93 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  if ( *((_DWORD *)v16 + 50) != 1 )
  {
    LODWORD(v12) = -1073741130;
    v40 = 1144079365;
    WdLogSingleEntry4(3LL, v80[1], a1.LowPart, v78.Value, 1144079365LL);
    WdLogGlobalForLineNumber = 7364;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v95);
    goto LABEL_60;
  }
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v16 + 110);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v16 + 105);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v16 + 106);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v16 + 107);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v16 + 108);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v16 + 109);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v16 + 111) >> 7) & 1;
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v16 + 74) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v16 + 761);
  v20 = (char *)*((_QWORD *)v16 + 245);
  if ( v20 )
  {
    RtlStringCbCopyW((char *)(a4 + 860), 0x100uLL, v20);
  }
  else if ( a4 != -860 )
  {
    *(_WORD *)(a4 + 860) = 0;
  }
  v21 = (unsigned __int16 *)*((_QWORD *)v16 + 246);
  v22 = (_WORD *)(a4 + 1116);
  v23 = 260LL;
  v24 = 260LL;
  v25 = (_WORD *)*((_QWORD *)v21 + 1);
  v26 = (unsigned __int64)*v21 >> 1;
  do
  {
    if ( !v26 )
      break;
    if ( !*v25 )
      break;
    *v22++ = *v25++;
    --v26;
    --v24;
  }
  while ( v24 );
  v27 = v22 - 1;
  if ( v24 )
    v27 = v22;
  *v27 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  if ( !v17 )
    goto LABEL_52;
  v92 = v17;
  v93 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  if ( *((_DWORD *)v17 + 50) == 1 )
  {
    if ( Value == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
      goto LABEL_43;
    v30 = *((_QWORD *)v17 + 395);
    if ( v30 )
    {
      if ( Value < *(_DWORD *)(v30 + 96) )
      {
        SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v19 + 395), Value, v28, v29);
        if ( !SessionViewOwner )
        {
          *(_DWORD *)(a4 + 1916) = -1;
          v83 = 0LL;
          *(_OWORD *)(a4 + 1644) = 0LL;
          *(_OWORD *)(a4 + 1952) = 0LL;
          *(_QWORD *)(a4 + 1924) = 0LL;
          *(_QWORD *)(a4 + 1932) = 5LL;
          *(_DWORD *)(a4 + 1940) = 1;
          *(_QWORD *)(a4 + 1944) = 1LL;
          *(_QWORD *)(a4 + 1968) = 0LL;
          SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
LABEL_42:
          v23 = 260LL;
LABEL_43:
          *(_DWORD *)(a4 + 20) = *((_DWORD *)v17 + 110);
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v17 + 105);
          *(_DWORD *)(a4 + 28) = *((_DWORD *)v17 + 106);
          *(_DWORD *)(a4 + 32) = *((_DWORD *)v17 + 107);
          *(_DWORD *)(a4 + 36) = *((_DWORD *)v17 + 108);
          *(_DWORD *)(a4 + 40) = *((_DWORD *)v17 + 109);
          *(_DWORD *)(a4 + 824) = (*((_DWORD *)v17 + 111) >> 7) & 1;
          *(_DWORD *)(a4 + 828) = *((_DWORD *)v17 + 74) > 1u;
          *(_DWORD *)(a4 + 44) = *((_DWORD *)v17 + 761);
          v32 = (char *)*((_QWORD *)v17 + 245);
          if ( v32 )
          {
            RtlStringCbCopyW((char *)(a4 + 48), 0x100uLL, v32);
          }
          else if ( a4 != -48 )
          {
            *(_WORD *)(a4 + 48) = 0;
          }
          v33 = (unsigned __int16 *)*((_QWORD *)v17 + 246);
          v34 = (_WORD *)(a4 + 304);
          v35 = (_WORD *)*((_QWORD *)v33 + 1);
          v36 = (unsigned __int64)*v33 >> 1;
          do
          {
            if ( !v36 )
              break;
            if ( !*v35 )
              break;
            *v34++ = *v35++;
            --v36;
            --v23;
          }
          while ( v23 );
          v37 = v34 - 1;
          if ( v23 )
            v37 = v34;
          *v37 = 0;
          *(_QWORD *)(a4 + 2044) = v8 & -(__int64)((*((_DWORD *)v17 + 111) & 0x100) != 0);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
LABEL_52:
          *(_WORD *)(a4 + 306) = 92;
          *(_WORD *)(a4 + 1118) = 92;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v95);
          if ( v82 )
            DxgkReleaseSessionModeChangeLock();
          *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
          if ( *(_DWORD *)a4 == -11 )
          {
            v79[0] = 0;
            v77[0] = 0;
            if ( (int)DxgkpAdapterCheckStereoMode(a1, Value, v77, v79) < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 7738;
            }
            else
            {
              *(_DWORD *)(a4 + 2052) = (v79[0] != 0 ? 8 : 0) | (v77[0] != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
            }
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
          if ( v90 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit);
          }
          return 0LL;
        }
        LODWORD(v81) = -1;
        DmmGetMostImportantClientVidPnPathTargetsFromSource(v17, Value, (unsigned int *const)&v81);
        *(_DWORD *)(a4 + 2052) = *(_DWORD *)(a4 + 2052) & 0xFFFF7FFF | (*((_DWORD *)v17 + 111) >> 3) & 0x8000;
        if ( (_DWORD)v81 == -1 )
          TargetUsage = 0;
        else
          TargetUsage = DmmGetTargetUsage(v17, (unsigned int)v81, 0LL);
        *(_DWORD *)(a4 + 2028) = TargetUsage;
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v17 + 395), Value);
        if ( *(_DWORD *)(a4 + 2028) )
        {
          *(_OWORD *)(a4 + 1644) = 0LL;
          *(_OWORD *)(a4 + 1952) = 0LL;
        }
        else
        {
          *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
          *(_OWORD *)(a4 + 1952) = *(_OWORD *)(4024LL * Value + *(_QWORD *)(*((_QWORD *)v17 + 395) + 128LL) + 688);
        }
        *(_DWORD *)(a4 + 1916) = (_DWORD)v81;
        *(_DWORD *)(a4 + 1920) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v17 + 395), Value);
        *(_DWORD *)(a4 + 1924) = *(_DWORD *)DisplayModeInfo;
        *(_DWORD *)(a4 + 1928) = *((_DWORD *)DisplayModeInfo + 1);
        *(_DWORD *)(a4 + 1932) = D3dPixelFormatToDisplayConfigPixelFormat(*((unsigned int *)DisplayModeInfo + 2));
        v46 = *((_DWORD *)DisplayModeInfo + 4);
        if ( v46 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
        {
          *(_DWORD *)(a4 + 1936) = 64;
          v47 = 1;
        }
        else
        {
          *(_DWORD *)(a4 + 1936) = v46;
          v47 = *((_DWORD *)DisplayModeInfo + 5);
        }
        *(_DWORD *)(a4 + 1940) = v47;
        *(_DWORD *)(a4 + 1944) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v17 + 395), Value, 2LL);
        *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
        DxgkpCopyMonitorLinkInfoToFlags(v17, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
        *(_QWORD *)(a4 + 1968) = *((_QWORD *)SessionViewOwner + 8);
        SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
        if ( *((_DWORD *)SessionViewOwner + 10) != 1
          || (v50 = (unsigned int)v81,
              v78.Value = (unsigned int)v81,
              v51 = WdLogNewEntry5_WdTrace(v49, v48),
              *(_QWORD *)(v51 + 24) = v50,
              *(_QWORD *)(v51 + 32) = v17,
              WdLogGlobalForLineNumber = 2340,
              (_DWORD)v50 == -1) )
        {
LABEL_106:
          *(_DWORD *)(a4 + 2052) &= ~0x400u;
          v61 = 4024LL * Value;
          v62 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 395) + 128LL) + v61 + 3804);
          *(_QWORD *)(a4 + 2032) = v62;
          if ( v62 )
          {
            _mm_lfence();
            if ( *(_DWORD *)(*((_QWORD *)v17 + 395)
                           + 80LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v17 + 395) + 128LL) + v61 + 3804)
                           + 888) == 1 )
            {
              *(_DWORD *)(a4 + 2036) = 1;
            }
            else
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 7607;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"Invalid DXGK_SYNC_LOCK_STYLE, fallback to disable the output SyncLock.",
                7607LL,
                0LL,
                0LL,
                0LL,
                0LL);
              *(_DWORD *)(a4 + 2032) = 0;
            }
          }
          v63 = *(_QWORD *)(*((_QWORD *)v17 + 395) + 128LL) + v61;
          if ( v63 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v84, (struct DXGFASTMUTEX *const)(v63 + 3808), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v84);
            v64 = *(_DWORD *)(v63 + 16LL * *(unsigned int *)(v63 + 4016) + 3868) & 2;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v84);
            *(_DWORD *)(a4 + 2052) = (v64 != 0 ? 0x10000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFEFFFF;
          }
          goto LABEL_42;
        }
        if ( !*((_QWORD *)v17 + 395) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2361;
        }
        v52 = *(MONITOR_MGR **)(*((_QWORD *)v17 + 395) + 112LL);
        if ( !v52 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2371;
          goto LABEL_106;
        }
        v84[1] = 0LL;
        v84[0] = (struct DXGMONITOR *)DxgkGetAdapterDeviceDesc;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v84);
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v52, v78.Value, 0, (struct MONITOR_REF_ACCESSOR *)v84);
        if ( MonitorInstance == -1073741275 )
        {
          WdLogSingleEntry2(7LL, v78.Value, v52);
          WdLogGlobalForLineNumber = 2386;
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v54 = v84[1];
            if ( !v84[1] )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2398;
            }
            v84[1] = 0LL;
            MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v54);
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v84);
            v55 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
            v78.Value = 0;
            v80[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
            CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(v17, Value, (int)v81, &v78, v80);
            v57.0 = v78.0;
            if ( CurrentWireFormatAndColorSpace < 0 )
              v57.Value = v78.Value & 0xFFFFFF03 | 8;
            else
              v55 = v80[0];
            *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v57);
            *(_DWORD *)(a4 + 1980) = v55;
            *(_DWORD *)(a4 + 2040) = *((_DWORD *)DisplayModeInfo + 19);
            v80[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
            LOWORD(v80[1]) = 0;
            BYTE2(v80[1]) = 0;
            *(_OWORD *)v84 = 0LL;
            v85 = 0LL;
            v86 = 0LL;
            if ( (v55 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
               || (*(_BYTE *)&v78.0 = 0, v55 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL))
              && (*(_BYTE *)&v78.0 = 1, v55 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
            {
              v69 = *((_DWORD *)v17 + 111);
              *((_BYTE *)&v78.0 + 1) = 1;
              if ( (v69 & 0x200) == 0 && (v69 & 8) == 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7545;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(PickedColorSpace != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) || pDisplayAdapter->Get"
                            "Adapter()->IsXBoxOneDevice() || pDisplayAdapter->GetAdapter()->IsSoftGPU()",
                  7545LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              *((_BYTE *)&v78.0 + 1) = 0;
            }
            v58 = MonitorHandle;
            if ( (int)MonitorGetAdvancedColorParams(
                        MonitorHandle,
                        (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN *)&v78,
                        (struct DISPLAY_COLORIMETRY_INTERNAL *)v84,
                        (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT *)v80) >= 0 )
            {
              *(struct DXGMONITOR **)(a4 + 1984) = v84[0];
              *(struct DXGMONITOR **)(a4 + 1992) = v84[1];
              *(_OWORD *)(a4 + 2000) = v85;
              v59 = *(_DWORD *)(a4 + 2052);
              *(_QWORD *)(a4 + 2016) = v86;
              *(_DWORD *)(a4 + 2024) = DWORD2(v86);
              *(_DWORD *)(a4 + 2052) = (BYTE1(v80[0]) != 0 ? 0x1000 : 0) | (LOBYTE(v80[0]) != 0 ? 0x200 : 0) | v59 & 0xFFFFEDFF;
            }
            v77[0] = 0;
            *(_BYTE *)&v78.0 = 0;
            v79[0] = 0;
            MONITOR_MGR::AcquireMonitorShared(v84, (__int64)v58);
            if ( v84[0] )
            {
              MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v84[0], v77, (unsigned __int8 *)&v78, v79);
              CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v84);
              if ( MonitorNativeFlags >= 0 )
              {
                *(_DWORD *)(a4 + 2052) = (v77[0] != 0 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
                goto LABEL_105;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 2147;
              CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v84);
            }
            *(_DWORD *)(a4 + 2052) &= ~0x2000u;
LABEL_105:
            MonitorReleaseMonitorHandle(v17, v58, v60);
            goto LABEL_106;
          }
          WdLogSingleEntry2(2LL, v78.Value, v52);
          WdLogGlobalForLineNumber = 2393;
        }
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v84);
        goto LABEL_106;
      }
      v42 = *(_DWORD *)(v30 + 96);
    }
    else
    {
      v42 = -1;
    }
    v40 = 1144079367;
    LODWORD(v12) = -1073741811;
    v43 = v42;
    WdLogSingleEntry5(2LL, v78.Value, v42, v80[1], a1.LowPart, 1144079367LL);
    WdLogGlobalForLineNumber = 7650;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified VidPnSourceId 0x%I64x is bigger than the total number of VidPnSources 0x%I64x on adapter"
                " (0x%I64x%08I64x). (0x%I64x)",
      v78.Value,
      v43,
      v80[1],
      a1.LowPart,
      1144079367LL);
  }
  else
  {
    LODWORD(v12) = -1073741130;
    v40 = 1144079366;
    WdLogSingleEntry4(3LL, v80[1], a1.LowPart, v78.Value, 1144079366LL);
    WdLogGlobalForLineNumber = 7413;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v95);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v77);
LABEL_62:
  if ( *(_DWORD *)a4 == -21 )
    *(_DWORD *)(a4 + 2024) = v40;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
  if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit);
  return (unsigned int)v12;
}

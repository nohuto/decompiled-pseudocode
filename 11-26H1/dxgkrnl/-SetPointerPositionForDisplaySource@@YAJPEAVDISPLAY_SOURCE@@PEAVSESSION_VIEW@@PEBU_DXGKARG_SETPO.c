/*
 * XREFs of ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1402C7800 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_DXGKARG_SETPOINTERPOSITION@@P8OUTPUTDUPL_MGR@@EAAX2@Z@Z @ 0x1402A2CE8 (-RunForAdapter@-$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402CEA60 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1402CF050 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1402CF190 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403C073C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall SetPointerPositionForDisplaySource(
        struct DISPLAY_SOURCE *a1,
        struct SESSION_VIEW *a2,
        const struct _DXGKARG_SETPOINTERPOSITION *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  struct DISPLAY_SOURCE *v6; // rdi
  __int64 v10; // rsi
  DXGADAPTER *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rcx
  bool v15; // zf
  DXGFASTMUTEX *v16; // rcx
  __int64 Y; // r8
  __int64 v18; // rbx
  __int64 VidPnSourceId; // rdx
  __int64 v20; // r15
  __int64 v21; // rcx
  bool v22; // r15
  __int64 v23; // rax
  unsigned int v24; // edx
  MONITOR_MGR *v25; // r10
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  bool v29; // al
  int CurrentOrientation; // r8d
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned int *v33; // rbx
  int v34; // ecx
  int v35; // r10d
  int v36; // r11d
  int v37; // ebx
  int v38; // edx
  int v39; // r9d
  int v40; // r9d
  int v41; // ebx
  int v42; // r10d
  int v43; // eax
  int v44; // r11d
  INT v45; // edx
  INT v46; // r8d
  int v47; // r11d
  int v48; // r10d
  int v49; // ecx
  __int64 v50; // rbx
  struct DXGTHREAD *v51; // r15
  struct DXGTHREAD *Current; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r12
  char v59; // r15
  INT v60; // edx
  INT X; // r8d
  INT v62; // r9d
  INT v63; // r10d
  __int64 v64; // rcx
  struct SESSION_VIEW *v65; // rcx
  __int64 v66; // rdx
  __int64 Height; // rcx
  const wchar_t *v69; // r9
  __int64 Width; // rdx
  __int64 v71; // rax
  INT v72; // eax
  int v73; // edx
  int v74; // r8d
  _QWORD *v75; // rax
  __int64 v76; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v78; // rbx
  const void *pPixels; // r9
  int v80; // eax
  int v81; // ecx
  _DWORD *v82; // rax
  int v83; // ecx
  struct DXGMONITOR *v84; // rdx
  __int64 v85; // rbx
  int v86; // eax
  __int64 v87; // rbx
  KIRQL v88; // al
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 Timeouta; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutc; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutb; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutd; // [rsp+20h] [rbp-E0h]
  __int64 v94; // [rsp+28h] [rbp-D8h]
  __int64 v95; // [rsp+28h] [rbp-D8h]
  __int64 v96; // [rsp+28h] [rbp-D8h]
  __int64 v97; // [rsp+28h] [rbp-D8h]
  __int64 v98; // [rsp+28h] [rbp-D8h]
  __int64 v99; // [rsp+30h] [rbp-D0h]
  __int64 v100; // [rsp+30h] [rbp-D0h]
  __int64 v101; // [rsp+30h] [rbp-D0h]
  __int64 v102; // [rsp+30h] [rbp-D0h]
  __int64 v103; // [rsp+38h] [rbp-C8h]
  char v104; // [rsp+50h] [rbp-B0h]
  KIRQL CurrentIrql; // [rsp+50h] [rbp-B0h]
  int v106; // [rsp+54h] [rbp-ACh]
  int v107; // [rsp+54h] [rbp-ACh]
  __int64 v108; // [rsp+58h] [rbp-A8h]
  INT v109; // [rsp+58h] [rbp-A8h]
  int v110; // [rsp+58h] [rbp-A8h]
  INT v111; // [rsp+58h] [rbp-A8h]
  __int64 v112; // [rsp+58h] [rbp-A8h]
  int v113; // [rsp+64h] [rbp-9Ch]
  int v114; // [rsp+68h] [rbp-98h]
  int v115; // [rsp+6Ch] [rbp-94h]
  __int64 v116; // [rsp+6Ch] [rbp-94h]
  int v117; // [rsp+70h] [rbp-90h]
  INT v118; // [rsp+74h] [rbp-8Ch]
  INT v119; // [rsp+74h] [rbp-8Ch]
  __int64 v120; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v121; // [rsp+80h] [rbp-80h] BYREF
  __int64 v122; // [rsp+88h] [rbp-78h]
  unsigned int v123; // [rsp+90h] [rbp-70h]
  unsigned int v124; // [rsp+94h] [rbp-6Ch]
  __int128 v125; // [rsp+98h] [rbp-68h] BYREF
  const struct _DXGKARG_SETPOINTERPOSITION *v126; // [rsp+A8h] [rbp-58h]
  DXGFASTMUTEX *v127; // [rsp+B0h] [rbp-50h] BYREF
  char v128; // [rsp+B8h] [rbp-48h]
  struct SESSION_VIEW *v129; // [rsp+C0h] [rbp-40h]
  __int128 v130; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-28h]
  _DXGKARG_SETPOINTERPOSITION v132; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v133[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v134[16]; // [rsp+F8h] [rbp-8h] BYREF
  DXGADAPTER *v135; // [rsp+108h] [rbp+8h]
  _BYTE v136[16]; // [rsp+138h] [rbp+38h] BYREF
  DXGADAPTER *v137; // [rsp+148h] [rbp+48h]
  char v138; // [rsp+150h] [rbp+50h]
  __int64 v139; // [rsp+158h] [rbp+58h]
  char v140[8]; // [rsp+180h] [rbp+80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+88h] BYREF
  unsigned __int64 retaddr; // [rsp+1F8h] [rbp+F8h]

  v126 = a3;
  v131 = 0LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = 0LL;
  v129 = a2;
  v10 = *(_QWORD *)(v5 + 16);
  v130 = 0LL;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1787;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1787LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v10 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1788;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v132 = *a3;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v133, (struct DXGADAPTER *const)v10, 0LL);
  if ( v138 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v136, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v11 = v137;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v137 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v137 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)"g");
      KeWaitForSingleObject((char *)v137 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v137, 0LL);
    v11 = v137;
  }
  v139 = 0LL;
  v138 = 1;
  if ( *((_DWORD *)v11 + 50) != 1 )
    goto LABEL_110;
  if ( v135 != v137 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v134, 0LL);
    if ( *((_DWORD *)v135 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v134);
LABEL_110:
      COREACCESS::Release((COREACCESS *)v136);
      WdLogSingleEntry3(2LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), -1073741130LL);
      v95 = *(unsigned int *)(v10 + 412);
      Timeouta = *(int *)(v10 + 416);
      WdLogGlobalForLineNumber = 1801;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get CoreAdapterAccess lock on adapter 0x%I64x%08I64x, returning 0x%I64x.",
        Timeouta,
        v95,
        -1073741130LL,
        0LL,
        0LL);
      goto LABEL_100;
    }
  }
  v133[1] = 1;
  LODWORD(v13) = 0;
  v14 = *(_QWORD *)(v10 + 3160);
  v15 = v14 == -480;
  v16 = (DXGFASTMUTEX *)(v14 + 480);
  v128 = 0;
  v127 = v16;
  if ( v15 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v16 = v127;
  }
  if ( DXGFASTMUTEX::IsOwner(v16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v127);
  if ( a4 && (a3->Flags.Value & 1) != 0 )
  {
    if ( (v81 = *((_DWORD *)a1 + 949), v82 = (_DWORD *)((char *)a1 + 3800), Y = (unsigned int)a3->Y, v81 == -1)
      && *v82 == -1
      || (v83 = a3->X + v81, v83 < 0)
      || v83 >= *((_DWORD *)a1 + 248)
      || (int)Y + *v82 < 0
      || (int)Y + *v82 >= *((_DWORD *)a1 + 249) )
    {
      LODWORD(v13) = -1073741811;
      WdLogSingleEntry3(2LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), *((unsigned int *)a1 + 4));
      v71 = *((unsigned int *)a1 + 4);
      v69 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkSetPointerPosition() function: Adapter LUID: (0x%I64x%08I64"
             "x) VidpnSourceId: (0x%I64x).";
      Height = *(unsigned int *)(v10 + 412);
      Width = *(int *)(v10 + 416);
      WdLogGlobalForLineNumber = 1820;
      goto LABEL_103;
    }
  }
  if ( (*(_DWORD *)(v10 + 444) & 0x100) == 0 && (**(_DWORD **)(v10 + 3048) & 8) != 0 )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v127);
    goto LABEL_100;
  }
  v18 = *((unsigned int *)a1 + 4);
  v132.VidPnSourceId = v18;
  VidPnSourceId = (unsigned int)v18;
  v20 = *(_QWORD *)(v10 + 3160);
  if ( (unsigned int)v18 >= *(_DWORD *)(v20 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6468LL,
      0LL,
      0LL,
      0LL,
      0LL);
    VidPnSourceId = v132.VidPnSourceId;
  }
  v21 = 4024 * v18;
  if ( !*(_BYTE *)(4024 * v18 + *(_QWORD *)(v20 + 128) + 760) )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, VidPnSourceId);
    v75[3] = -1073741823LL;
    v75[4] = v132.VidPnSourceId;
    v76 = *(_BYTE *)&v132.Flags.0 & 1;
    v75[6] = v10;
    v75[5] = v76;
    WdLogGlobalForLineNumber = 1977;
LABEL_91:
    v57 = *(_QWORD *)(v10 + 3160);
    v58 = v132.VidPnSourceId;
    v59 = *(_BYTE *)&v132.Flags.0 & 1;
    v60 = v126->Y;
    X = v126->X;
    v62 = v132.Y;
    v63 = v132.X;
    v111 = v60;
    v119 = X;
    v116 = *(_QWORD *)&v132.X;
    if ( v132.VidPnSourceId >= *(_DWORD *)(v57 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6148;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6148LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v60 = v111;
      X = v119;
      v62 = HIDWORD(v116);
      v63 = v116;
    }
    v64 = 4024 * v58;
    *(_BYTE *)(4024 * v58 + *(_QWORD *)(v57 + 128) + 766) = v59;
    if ( v59 )
    {
      *(_DWORD *)(v64 + *(_QWORD *)(v57 + 128) + 768) = v63;
      *(_DWORD *)(v64 + *(_QWORD *)(v57 + 128) + 772) = v62;
      *(_DWORD *)(v64 + *(_QWORD *)(v57 + 128) + 716) = X;
      *(_DWORD *)(v64 + *(_QWORD *)(v57 + 128) + 720) = v60;
    }
    v65 = (struct SESSION_VIEW *)*((_QWORD *)v129 + 6);
    if ( v65 != (struct SESSION_VIEW *)((char *)v129 + 48) )
      v6 = (struct SESSION_VIEW *)((char *)v65 - 56);
    if ( a1 == v6 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v127);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v133);
      OutputDuplThunks<_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        (struct DXGADAPTER *)v10,
        v66,
        v126->VidPnSourceId,
        (__int64)v126);
    }
    goto LABEL_99;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v103) = v132.Flags.0;
    LODWORD(v99) = v132.Y;
    LODWORD(v94) = v132.X;
    LODWORD(Timeout) = VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v21, &EventSetPointerPosition, Y, v10, Timeout, v94, v99, v103);
  }
  v104 = 1;
  v22 = 1;
  LODWORD(v13) = -1073741811;
  if ( *((_DWORD *)a1 + 268) != -1 )
  {
    v23 = *(_QWORD *)(v10 + 3160);
    v108 = v23;
    if ( v23 )
    {
      if ( *(_QWORD *)(v23 + 112) )
      {
        v125 = retaddr;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v125);
        MONITOR_MGR::_GetMonitorInstance(v25, v24, 1u, (struct MONITOR_REF_ACCESSOR *)&v125);
        v26 = *((_QWORD *)&v125 + 1);
        v120 = *((_QWORD *)&v125 + 1);
        if ( *((_QWORD *)&v125 + 1) )
          MonitorResourceLock::AcquireShared((PERESOURCE)(*((_QWORD *)&v125 + 1) + 40LL));
        v121 = retaddr;
        v27 = 2LL;
        do
        {
          v122 = v26;
          --v27;
        }
        while ( v27 );
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v121);
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v125);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 791;
        CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v120, v84);
        v26 = v120;
      }
      if ( v26 )
      {
        if ( *(_DWORD *)(v26 + 280) != 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5280;
        }
        if ( !*(_DWORD *)(*(_QWORD *)(v26 + 240) + 16LL) && (*(_BYTE *)(v26 + 176) & 0x40) == 0 )
          v22 = 0;
        ExReleaseResourceLite((PERESOURCE)(v26 + 40));
        KeLeaveCriticalRegion();
        v120 = 0LL;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v121);
        v28 = v120;
        if ( v120 )
        {
          ExReleaseResourceLite((PERESOURCE)(v120 + 40));
          KeLeaveCriticalRegion();
        }
        if ( v22 )
        {
          v29 = 1;
          v22 = 1;
          goto LABEL_43;
        }
      }
      else
      {
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v120);
      }
      v28 = v108;
      v29 = *(_BYTE *)(v108 + 289) == 0;
      v22 = *(_BYTE *)(v108 + 290) == 0;
LABEL_43:
      v104 = v29;
      goto LABEL_44;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10231;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      10231LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), -1073741811LL);
  v100 = *(unsigned int *)(v10 + 412);
  v96 = *(int *)(v10 + 416);
  Timeoutc = *((unsigned int *)a1 + 4);
  WdLogGlobalForLineNumber = 1862;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
    Timeoutc,
    v96,
    v100,
    -1073741811LL,
    0LL);
  v29 = 1;
LABEL_44:
  if ( v29 && v22 || (*(_BYTE *)&v132.Flags.0 & 1) == 0 || a5 )
  {
LABEL_71:
    v50 = *(_QWORD *)(v10 + 3160);
    LODWORD(v120) = -1;
    v121 = 0LL;
    if ( (qword_1401664C0 & 2) != 0 )
    {
      LOBYTE(v122) = 1;
      LODWORD(v120) = 5019;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerEnter);
    }
    else
    {
      LOBYTE(v122) = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v120, 5019);
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v50 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v50 + 16) + 4852LL));
    CurrentIrql = KeGetCurrentIrql();
    v51 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v51 = Current) != 0LL) )
      v110 = *((_DWORD *)Current + 12);
    else
      v110 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v140,
      *(struct DXGADAPTER **)(v50 + 16));
    v13 = (*(int (__fastcall **)(_QWORD, _DXGKARG_SETPOINTERPOSITION *))(*(_QWORD *)(v50 + 16) + 560LL))(
            *(_QWORD *)(*(_QWORD *)(v50 + 16) + 288LL),
            &v132);
    if ( v140[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v88 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, v50, CurrentIrql, v88);
      WdLogGlobalForLineNumber = 2448;
    }
    if ( v51 )
    {
      v54 = *((int *)v51 + 12);
      if ( (_DWORD)v54 != v110 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v51 + 12), v110, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v50 + 16) + 4852LL));
    v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v54, v53);
    v55[3] = v13;
    v55[4] = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 288LL);
    v55[5] = *(_BYTE *)&v132.Flags.0 & 1;
    v55[6] = v132.X;
    v55[7] = v132.Y;
    WdLogGlobalForLineNumber = 2455;
    if ( (_DWORD)v13 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2457;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v50 + 16));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (_BYTE)v122 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit);
    if ( (int)v13 < 0 )
    {
      if ( (Feature_EnableNonCriticalAsserts__private_featureState & 0x10) == 0 )
      {
        v112 = Feature_EnableNonCriticalAsserts__private_featureState | 1u;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor,
          v112,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v112,
          3,
          (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor);
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1972;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NT_SUCCESS(Status) || !Feature_EnableNonCriticalAsserts_IsEnabled()",
        1972LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_91;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)a1 + 1), *((unsigned int *)a1 + 4), v29);
  v106 = CurrentOrientation;
  v31 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5538;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
        5538LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    CurrentOrientation = v106;
  }
  v32 = *((_QWORD *)a1 + 106);
  v33 = (unsigned int *)((char *)a1 + 828);
  if ( !v32 )
  {
    v32 = 0LL;
LABEL_102:
    WdLogSingleEntry3(2LL, *v33, *((unsigned int *)a1 + 208), v32);
    Height = *((unsigned int *)a1 + 208);
    v69 = L"GetSavedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
    Width = *v33;
    v71 = *((_QWORD *)a1 + 106);
    WdLogGlobalForLineNumber = 1895;
    goto LABEL_103;
  }
  v123 = *v33;
  if ( v123 > *(_DWORD *)(v10 + 2464) )
    goto LABEL_102;
  v124 = *((_DWORD *)a1 + 208);
  if ( v124 > *(_DWORD *)(v10 + 2468) )
    goto LABEL_102;
  v34 = *((_DWORD *)a1 + 174) - *((_DWORD *)a1 + 172);
  v35 = *((_DWORD *)v129 + 8) - *((_DWORD *)v129 + 6);
  v36 = *((_DWORD *)a1 + 175) - *((_DWORD *)a1 + 173);
  v37 = *((_DWORD *)a1 + 178);
  v38 = *((_DWORD *)v129 + 9) - *((_DWORD *)v129 + 7);
  v39 = *((_DWORD *)a1 + 177);
  v109 = v37;
  v118 = v39;
  v125 = *((_OWORD *)a1 + 43);
  v113 = v34;
  v107 = v36;
  if ( *((_BYTE *)a1 + 704) )
  {
    v34 = v39;
    v107 = v37;
    v36 = v37;
    v113 = v39;
    v40 = 0;
    v41 = 0;
  }
  else
  {
    v41 = DWORD1(v125);
    v40 = v125;
    v109 = HIDWORD(v125);
    v118 = DWORD2(v125);
  }
  v115 = v40;
  if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
  {
    v42 = v126->X * v36 / v35;
    v43 = v126->Y * v34;
  }
  else
  {
    v42 = v126->X * v34 / v35;
    v43 = v126->Y * v36;
  }
  v117 = v42;
  v44 = v43 / v38;
  v114 = v43 / v38;
  if ( v104 )
  {
    v132.X = v42 + v40;
    v72 = v44 + v41;
    goto LABEL_106;
  }
  if ( CurrentOrientation == 1 )
    goto LABEL_60;
  if ( CurrentOrientation == 2 )
  {
    v45 = v44 + v40;
    v47 = v107;
    v46 = v107 + v41 - v124 - v42;
    goto LABEL_64;
  }
  if ( CurrentOrientation != 3 )
  {
    if ( CurrentOrientation == 4 )
    {
      v46 = v42 + v41;
      v45 = v113 + v40 - v123 - v44;
LABEL_63:
      v47 = v107;
LABEL_64:
      v48 = v113;
      goto LABEL_65;
    }
LABEL_60:
    if ( CurrentOrientation != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 686;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Orientation == D3DKMDT_VPPR_IDENTITY",
        686LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v40 = v115;
    }
    v45 = v40 + v117;
    v46 = v41 + v114;
    goto LABEL_63;
  }
  v73 = v40 - v123 - v42;
  v48 = v113;
  v74 = v41 - v124 - v44;
  v47 = v107;
  v45 = v113 + v73;
  v46 = v107 + v74;
LABEL_65:
  v49 = v45 + *((_DWORD *)a1 + 207);
  v132.Y = v46;
  v132.X = v45;
  if ( v49 >= v40 && v45 <= v118 && v46 + *((_DWORD *)a1 + 208) >= v41 && v46 <= v109 )
    goto LABEL_69;
  v132.X = v40 + v48 / 2;
  v72 = v41 + v47 / 2;
LABEL_106:
  v132.Y = v72;
LABEL_69:
  FillClipParams((struct _DXGKARG_SETPOINTERSHAPE *)((char *)a1 + 824), a1, &v132, (struct CURSOR_CLIP_PARAMS *)&v130);
  if ( !HIDWORD(v131) )
  {
    if ( *((_BYTE *)a1 + 767) )
    {
      v86 = ADAPTER_DISPLAY::DdiSetPointerShape(
              *(ADAPTER_DISPLAY **)(v10 + 3160),
              (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)a1 + 824));
      if ( v86 < 0 )
      {
        v87 = v86;
        WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v86);
        v102 = *(unsigned int *)(v10 + 412);
        v98 = *(int *)(v10 + 416);
        Timeoutd = *((unsigned int *)a1 + 4);
        WdLogGlobalForLineNumber = 1959;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiSetPointerShape failed while setting last saved cursor shape on VidPn Source 0x%I64x adapter 0x%I6"
                    "4x%08I64x, returning 0x%I64x.",
          Timeoutd,
          v98,
          v102,
          v87,
          0LL);
      }
      *((_BYTE *)a1 + 767) = 0;
    }
    goto LABEL_71;
  }
  ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(a1, 0);
  v78 = ClippedCursor;
  pPixels = ClippedCursor->pPixels;
  if ( pPixels && ClippedCursor->Width <= *(_DWORD *)(v10 + 2464) && ClippedCursor->Height <= *(_DWORD *)(v10 + 2468) )
  {
    ClipCurrentCursor(
      (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)a1 + 824),
      ClippedCursor,
      (struct CURSOR_CLIP_PARAMS *)&v130);
    v78->VidPnSourceId = *((_DWORD *)a1 + 4);
    v80 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v10 + 3160), v78);
    if ( v80 < 0 )
    {
      v85 = v80;
      WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v80);
      v101 = *(unsigned int *)(v10 + 412);
      v97 = *(int *)(v10 + 416);
      Timeoutb = *((unsigned int *)a1 + 4);
      WdLogGlobalForLineNumber = 1941;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DdiSetPointerShape failed while setting clipped shape on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, r"
                  "eturning 0x%I64x.",
        Timeoutb,
        v97,
        v101,
        v85,
        0LL);
    }
    *((_BYTE *)a1 + 767) = 1;
    goto LABEL_71;
  }
  WdLogSingleEntry3(2LL, ClippedCursor->Width, ClippedCursor->Height, pPixels);
  Height = v78->Height;
  v69 = L"GetClippedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
  Width = v78->Width;
  v71 = (__int64)v78->pPixels;
  WdLogGlobalForLineNumber = 1925;
LABEL_103:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v69, Width, Height, v71, 0LL, 0LL);
LABEL_99:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v127);
  LODWORD(v6) = v13;
LABEL_100:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
  return (unsigned int)v6;
}

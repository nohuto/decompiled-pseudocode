/*
 * XREFs of DxgkDisplayOnOff @ 0x1403EBC10
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
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x140204E94 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D3940 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D3CBC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140323480 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EC47C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, char a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  struct DXGDEVICE *v7; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGSESSIONDATA *v17; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  struct _KPROCESS *v24; // rdi
  __int64 v25; // rcx
  DXGPROCESS *Current; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v30; // eax
  __int64 v31; // rdi
  bool v32; // r12
  __int64 v33; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  DXGSESSIONDATA **v35; // rbx
  __int64 v36; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  DXGPROCESS *v38; // r12
  __int64 v39; // r13
  __int64 v40; // r15
  unsigned int *v41; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v43; // rbx
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  DXGSESSIONDATA **v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // [rsp+20h] [rbp-E0h]
  __int64 v54; // [rsp+20h] [rbp-E0h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  __int64 v56; // [rsp+28h] [rbp-D8h]
  __int64 v57; // [rsp+28h] [rbp-D8h]
  __int64 v58; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  __int64 v60; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v63[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h]
  char v67; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v68; // [rsp+80h] [rbp-80h] BYREF
  BOOL v69; // [rsp+88h] [rbp-78h]
  DXGSESSIONDATA **v70; // [rsp+90h] [rbp-70h]
  DXGPROCESS *v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h] BYREF
  char v73; // [rsp+A8h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v74; // [rsp+B0h] [rbp-50h]
  GUID ActivityId; // [rsp+B8h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  char v77; // [rsp+F8h] [rbp-8h]
  char v78[8]; // [rsp+100h] [rbp+0h] BYREF
  char v79[64]; // [rsp+108h] [rbp+8h] BYREF
  char v80[88]; // [rsp+148h] [rbp+48h] BYREF

  v4 = a2;
  v63[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x35u, 0, &v64, v63);
  v74 = v64;
  v65 = -1;
  v66 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerEnter);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v65, 2183);
  v77 = 0;
  v7 = 0LL;
  v68 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v9, v10, v11);
  v17 = SessionData;
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 10661;
    v23 = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  v24 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v14) != v24 )
  {
    KeStackAttachProcess(v24, &ApcState);
    v77 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v25);
  v71 = Current;
  v27 = (__int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10678;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get current DXGPROCESS",
      10678LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_35:
    if ( v77 )
    {
      KeUnstackDetachProcess(&ApcState);
      v77 = 0;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit);
    if ( v63[0] )
      DisplayScenarioContextDissociate(&v64);
    return 3221225485LL;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10690;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).",
      v27,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v77 )
    {
      KeUnstackDetachProcess(&ApcState);
      v77 = 0;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
    if ( v63[0] )
      DisplayScenarioContextDissociate(&v64);
    return 3221225506LL;
  }
  v30 = DxgkAcquireSessionModeChangeLock(1);
  v31 = v30;
  v32 = v30 >= 0;
  v69 = v30 >= 0;
  if ( v30 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10704;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v31,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v32 )
      DxgkReleaseSessionModeChangeLock();
    if ( v77 )
    {
      KeUnstackDetachProcess(&ApcState);
      v77 = 0;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
    if ( v63[0] )
      DisplayScenarioContextDissociate(&v64);
    return (unsigned int)v31;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v17, a1, v4);
  v70 = SessionViewFromSource;
  v35 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    WdLogSingleEntry3(2LL, v4, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 10720;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.",
      v4,
      HighPart,
      LowPart,
      0LL,
      0LL);
    if ( v32 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_35;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( !PrimaryDisplaySource )
    goto LABEL_74;
  v38 = v71;
  do
  {
    v39 = *((unsigned int *)PrimaryDisplaySource + 4);
    v40 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    v41 = (unsigned int *)(v40 + 412);
    if ( v7 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v40 + 412), v7);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v7 + 2), v7);
      v68 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v40 + 412),
                                             &v68,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v43 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry3(2LL, *(int *)(v40 + 416), *v41, CddDeviceAndContextForCurrentSession);
      v56 = *v41;
      v53 = *(int *)(v40 + 416);
      WdLogGlobalForLineNumber = 10777;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
        v53,
        v56,
        v43,
        0LL,
        0LL);
      v35 = v70;
      goto LABEL_69;
    }
    v7 = v68;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v72, v68);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&ActivityId, (DXGPROCESS *)((char *)v38 + 360), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ActivityId);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, (__int64)v7, 1, v44, 0);
    v45 = COREDEVICEACCESS::AcquireExclusive((__int64)v78, 2LL);
    if ( v45 == -1073741130 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&ActivityId);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v72);
      continue;
    }
    if ( v45 >= 0 )
    {
      if ( !a3 )
      {
        DmmDisablePathsFromVidPnSource(v7, v39);
        goto LABEL_64;
      }
      if ( a4 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v40 + 3160)) )
        ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*(PERESOURCE ***)(v40 + 3160), *((struct ADAPTER_RENDER **)v7 + 2));
      if ( (int)DmmEnablePathsFromVidPnSource(v7, v39, a4, (struct COREDEVICEACCESS *)v78, v74) < 0 )
        goto LABEL_64;
      v48 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(ADAPTER_DISPLAY **)(v40 + 3160), v39);
      if ( v48 >= 0 )
        goto LABEL_64;
      v49 = v48;
      WdLogSingleEntry4(2LL, v39, *(int *)(v40 + 416), *(unsigned int *)(v40 + 412), v48);
      v60 = *(unsigned int *)(v40 + 412);
      v58 = *(int *)(v40 + 416);
      WdLogGlobalForLineNumber = 10906;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on adapter 0x%I64x%08I64x (status = 0x%I64x)",
        v39,
        v58,
        v60,
        v49,
        0LL);
    }
    else
    {
      v46 = v45;
      WdLogSingleEntry3(2LL, *(int *)(v40 + 416), *v41, v45);
      v57 = *v41;
      v54 = *(int *)(v40 + 416);
      WdLogGlobalForLineNumber = 10850;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire device lock on adapter 0x%I64x%08I64x (Status = 0x%I64x)",
        v54,
        v57,
        v46,
        0LL,
        0LL);
    }
    v35 = v70;
LABEL_64:
    COREACCESS::~COREACCESS((COREACCESS *)v80, v47);
    COREACCESS::~COREACCESS((COREACCESS *)v79, v50);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&ActivityId);
    if ( v73 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v72 + 136));
      KeLeaveCriticalRegion();
      v73 = 0;
    }
    if ( !v7 )
      goto LABEL_70;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v7 + 2), v7);
LABEL_69:
    v68 = 0LL;
    v7 = 0LL;
LABEL_70:
    v51 = (DXGSESSIONDATA **)*((_QWORD *)PrimaryDisplaySource + 7);
    PrimaryDisplaySource = 0LL;
    if ( v51 != v35 + 6 )
      PrimaryDisplaySource = (struct DISPLAY_SOURCE *)(v51 - 7);
  }
  while ( PrimaryDisplaySource );
  v32 = v69;
LABEL_74:
  if ( v32 )
    DxgkReleaseSessionModeChangeLock();
  if ( v77 )
  {
    KeUnstackDetachProcess(&ApcState);
    v77 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit);
  if ( v63[0] )
    DisplayScenarioContextDissociate(&v64);
  return 0LL;
}

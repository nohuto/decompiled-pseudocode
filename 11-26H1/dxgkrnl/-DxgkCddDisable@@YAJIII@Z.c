/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002E488 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140031434 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x14003189C (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x140038C9C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005CC84 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x14005FB00 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402D08F8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140323480 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EC47C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403FBC3C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x14041433C (DxgkRemoveSessionViewForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, unsigned int a3)
{
  int v3; // r12d
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rsi
  __int64 CurrentProcess; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // r14
  ADAPTER_DISPLAY **v18; // rbx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v22; // eax
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v28; // rcx
  bool v29; // zf
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v31; // rdx
  char v32; // r14
  __int64 v33; // r8
  struct DISPLAY_SOURCE *v34; // rdx
  unsigned int v35; // r12d
  __int64 v36; // rdi
  __int64 v37; // rcx
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *v39; // rbx
  __int64 v40; // r9
  ADAPTER_RENDER *v41; // r10
  int v42; // eax
  unsigned __int8 v43; // r8
  int v44; // eax
  ADAPTER_DISPLAY *v45; // rcx
  unsigned int v46; // ebx
  unsigned int v47; // edx
  __int64 v48; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+28h] [rbp-D8h]
  _BYTE v50[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v51; // [rsp+54h] [rbp-ACh]
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  char v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v56; // [rsp+78h] [rbp-88h]
  struct DISPLAY_SOURCE *v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  _BYTE v60[16]; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT v61; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v62[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v63[160]; // [rsp+110h] [rbp+10h] BYREF

  v51 = a3;
  v3 = a2;
  v55 = a2;
  v4 = (unsigned int)a1;
  v52 = -1;
  v53 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v52, 3003);
  Current = DXGPROCESS::GetCurrent();
  v6 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 614;
    v8 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v8,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    v10 = v54 == 0;
LABEL_31:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v11 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v12 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v12 < *(_DWORD *)(v6 + 296)
    && (v13 = *(_DWORD *)(*(_QWORD *)(v6 + 280) + 16LL * v12 + 8),
        (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v6 + 280) + 16LL * v12 + 8) & 0x60))
    && (v13 & 0x2000) == 0
    && (v13 & 0x1F) != 0 )
  {
    v14 = *(_QWORD *)(v6 + 280);
    if ( (*(_BYTE *)(v14 + 16LL * v12 + 8) & 0x1F) == 3 )
    {
      v15 = *(_QWORD *)(v14 + 16LL * v12);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v15 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v15 = 0LL;
  }
  _InterlockedDecrement(v11 + 4);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  v56 = (struct DXGDEVICE *)v15;
  if ( !v15 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v4, v6);
    WdLogGlobalForLineNumber = 622;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v4,
      v6,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    v10 = v54 == 0;
    goto LABEL_31;
  }
  v17 = *(_QWORD *)(v15 + 1896);
  v59 = v17;
  v18 = (ADAPTER_DISPLAY **)(v17 + 3160);
  if ( !v17 || !*v18 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      628LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v3 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, v15, 1, v16, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v63);
    if ( v3 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*v18) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*v18, *(struct ADAPTER_RENDER **)(v15 + 16));
    if ( *(_DWORD *)(v17 + 200) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*v18, v51, 0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
    DxgkInvalidateQdcCache();
    goto LABEL_77;
  }
  if ( ((v3 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 669;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(OLD_MODE_CHANGE == Win32kCommand) || ((PRESERVE_ACTIVE_VIDPN | OLD_MODE_CHANGE) == Win32kCommand)",
      669LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 679;
    v22 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v22,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    v10 = v54 == 0;
    goto LABEL_31;
  }
  v50[0] = 0;
  v24 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v50, 1);
  v25 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 693;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
    return (unsigned int)v25;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, (const struct _LUID *)(v17 + 412), v51);
  if ( !SessionViewFromSource )
  {
    WdLogSingleEntry3(4LL, v51, *(int *)(v17 + 416), *(unsigned int *)(v17 + 412));
    WdLogGlobalForLineNumber = 709;
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    v29 = v54 == 0;
    goto LABEL_78;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
    goto LABEL_73;
  v32 = v55;
  v33 = v31 + 48;
  v58 = v31 + 48;
  do
  {
    v34 = 0LL;
    v35 = *((_DWORD *)PrimaryDisplaySource + 4);
    v36 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    v37 = *((_QWORD *)PrimaryDisplaySource + 7);
    if ( v37 != v33 )
      v34 = (struct DISPLAY_SOURCE *)(v37 - 56);
    v57 = v34;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v36 + 412), 0);
    v25 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(2LL, *(int *)(v36 + 416), *(unsigned int *)(v36 + 412), CddDeviceAndContextForCurrentSession);
      v49 = *(unsigned int *)(v36 + 412);
      v48 = *(int *)(v36 + 416);
      WdLogGlobalForLineNumber = 758;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
        v48,
        v49,
        v25,
        0LL,
        0LL);
      goto LABEL_71;
    }
    v39 = v56;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60, v56);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v39, 1, v40, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v63);
    if ( *(_DWORD *)(v36 + 200) != 1 && *((_DWORD *)v39 + 152) == 4
      || *(_DWORD *)(v36 + 200) == 4
      || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 2) + 16LL) + 200LL) == 4 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60);
      goto LABEL_71;
    }
    if ( *(_QWORD *)(v36 + 3168) )
    {
      if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v39 + 2) + 16LL)) )
        ADAPTER_RENDER::FlushScheduler(v41, 8LL, v35);
      else
        ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v41, 1 << v35, 0, 1 << v35, 0);
    }
    if ( *(_DWORD *)(v36 + 200) != 1 )
    {
      v42 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v36 + 3160), v39, v35);
LABEL_60:
      LODWORD(v25) = v42;
      goto LABEL_68;
    }
    if ( (v32 & 4) != 0 )
    {
      v42 = DmmDisablePathsFromVidPnSource(v39, v35);
      goto LABEL_60;
    }
    v43 = *(_BYTE *)(v36 + 3057)
       && *(_BYTE *)(v36 + 2976)
       && *(_DWORD *)(v36 + 420) != 1297040209
       && DpiFdoIsMsBddAnchoredDevice(*(_QWORD *)(v36 + 216));
    v44 = DmmRemovePathsFromVidPnSource(v39, v35, v43);
    memset(v62, 0, sizeof(v62));
    LODWORD(v25) = v44;
    ADAPTER_DISPLAY::SetDisplayModeInfo(
      *(DXGADAPTER ***)(v36 + 3160),
      v35,
      (const struct _DXGK_DISPLAYMODE_INFO *const)v62);
LABEL_68:
    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v36 + 3160), v35, 0);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v36 + 3160), v35, 0);
    v45 = *(ADAPTER_DISPLAY **)(v36 + 3160);
    v61 = 0LL;
    ADAPTER_DISPLAY::SetContentRect(v45, v35, &v61);
    ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v36 + 3160), v35, 0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
LABEL_71:
    PrimaryDisplaySource = v57;
    v33 = v58;
  }
  while ( v57 );
  v17 = v59;
  v3 = v55;
LABEL_73:
  v46 = v51;
  if ( ((v3 - 0x40000000) & 0xFFFFFFFB) == 0 )
    DxgkRemoveSessionViewForCurrentSession((struct _LUID *)(v17 + 412), v51, 1u);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v50);
  DxgkInvalidateQdcCache();
  if ( (int)v25 < 0 )
  {
    v47 = *(_DWORD *)(v17 + 412);
    v56 = 0LL;
    DxgkLogCodePointPacket(0x41u, v47, v46, v25, 0LL);
  }
LABEL_77:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  v29 = v54 == 0;
LABEL_78:
  if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
  return 0LL;
}

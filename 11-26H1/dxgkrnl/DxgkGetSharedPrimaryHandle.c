/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1401B5F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x140016630 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004B4C4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1401A2764 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1401A3470 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1401A3F3C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(__int64 Src)
{
  _DWORD *v1; // r14
  struct _KTHREAD **Current; // rax
  DXGPROCESS *v3; // r12
  struct DXGADAPTER *v4; // rbx
  unsigned __int64 v5; // rdx
  int PairingAdapters; // edi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGADAPTER *v10; // rdi
  char v11; // bl
  int v12; // r14d
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // rcx
  int VidPnSourceOwnerType; // eax
  struct DXGDEVICE *v18; // r14
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned int *v26; // r13
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v28; // rbx
  __int64 v29; // r9
  __int64 v30; // r9
  const wchar_t *v31; // r9
  int v32; // edx
  int v33; // eax
  struct COREDEVICEACCESS *v34; // rbx
  int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  struct COREDEVICEACCESS *v38; // rbx
  int v39; // eax
  __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // [rsp+20h] [rbp-1F8h]
  __int64 v44; // [rsp+20h] [rbp-1F8h]
  struct COREDEVICEACCESS *v45; // [rsp+28h] [rbp-1F0h]
  __int64 v46; // [rsp+30h] [rbp-1E8h]
  _BYTE v47[8]; // [rsp+50h] [rbp-1C8h] BYREF
  struct DXGADAPTER *v48; // [rsp+58h] [rbp-1C0h] BYREF
  int v49; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-1B0h]
  char v51; // [rsp+70h] [rbp-1A8h]
  struct DXGDEVICE *v52; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v53; // [rsp+80h] [rbp-198h]
  _BYTE v54[16]; // [rsp+88h] [rbp-190h] BYREF
  DXGADAPTER *v55[2]; // [rsp+98h] [rbp-180h] BYREF
  _BYTE v56[24]; // [rsp+A8h] [rbp-170h] BYREF
  unsigned int v57; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v58[7]; // [rsp+C8h] [rbp-150h] BYREF
  unsigned int v59[2]; // [rsp+100h] [rbp-118h] BYREF
  int CddPrimaryShareResourceHandle; // [rsp+108h] [rbp-110h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-108h] BYREF
  char v62; // [rsp+140h] [rbp-D8h]
  _BYTE v63[160]; // [rsp+150h] [rbp-C8h] BYREF

  v1 = (_DWORD *)Src;
  v53 = Src;
  v49 = -1;
  v50 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2021);
  *(_QWORD *)v59 = 0LL;
  CddPrimaryShareResourceHandle = 0;
  RtlCopyFromUser(v59, v1, 0xCuLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v3 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_26;
  v48 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v55, v59[0], Current, &v48, 1);
  v4 = v48;
  if ( !v48 )
  {
    WdLogSingleEntry2(3LL, v59[0], -1073741811LL);
    WdLogGlobalForLineNumber = 5547;
LABEL_25:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v55, v5);
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v48 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v4, v59[1], 0LL, 0LL, &v48, (unsigned __int64 *)&v52, 0);
  if ( PairingAdapters >= 0 )
  {
    v10 = v48;
    if ( !v48 || !*((_QWORD *)v48 + 395) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5588;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter()",
        5588LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = 0;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v10, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    if ( v12 < 0 )
    {
      DXGADAPTER::ReleaseReference(v10);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v55, v13);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
      return (unsigned int)v12;
    }
    v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 395);
    if ( v59[1] >= *((_DWORD *)v15 + 24) )
    {
      DXGADAPTER::ReleaseReference(v10);
      WdLogSingleEntry2(2LL, v59[1], -1073741811LL);
      WdLogGlobalForLineNumber = 5613;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v59[1],
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
      goto LABEL_25;
    }
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v15, v59[1]);
    if ( !CddPrimaryShareResourceHandle && !DXGPROCESS::IsRemoteConnection(v3) )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v10 + 395), v59[1]) )
      {
        if ( DXGADAPTER::UsingSetTimingsFromVidPn(v10) )
        {
          VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v10 + 395), v59[1]);
          if ( !VidPnSourceOwnerType || (v11 = 0, VidPnSourceOwnerType == 3) )
            v11 = 1;
        }
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
    v18 = 0LL;
    v52 = 0LL;
    v48 = 0LL;
    if ( !v11 )
    {
LABEL_68:
      DXGADAPTER::ReleaseReference(v10);
      if ( v48 )
        DXGCONTEXT::ReleaseReference(v48);
      if ( v18 && _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
      v1 = (_DWORD *)v53;
      goto LABEL_74;
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 5655;
      v22 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v22,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_68;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v47);
    v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v47, 0);
    if ( v23 < 0 )
    {
      v24 = v23;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5668;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
        v24,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_67:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v47);
      goto LABEL_68;
    }
    if ( DXGPROCESS::IsRemoteConnection(v3) )
    {
      v25 = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, v25, -1073741811LL);
      WdLogGlobalForLineNumber = 5680;
      v43 = (unsigned int)PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session 0x%I64x has just been switched to remote session , returning 0x%I64x.",
        v43,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_67;
    }
    v62 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2332));
    v26 = (unsigned int *)((char *)v10 + 412);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v10 + 412),
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v28 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry2(2LL, v10, CddDeviceAndContextForCurrentSession);
      WdLogGlobalForLineNumber = 5704;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
        (__int64)v10,
        v28,
        0LL,
        0LL,
        0LL);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v47);
      v18 = v52;
      goto LABEL_68;
    }
    v18 = v52;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54, v52);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v58,
      &v48,
      1u,
      v29,
      1);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v56, v10, 1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v18, 1, v30, 0);
    if ( !v58[0] )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 5721;
      v46 = 0LL;
      v45 = 0LL;
      v44 = 5721LL;
      v31 = L"Out of memory - could not initialize context array lock exclusive.";
      v32 = 262145;
LABEL_48:
      DxgkLogInternalTriageEvent(0LL, v32, -1, (__int64)v31, v44, (__int64)v45, v46, 0LL, 0LL);
LABEL_66:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v58);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      goto LABEL_67;
    }
    v33 = COREDEVICEACCESS::AcquireExclusive((__int64)v63, 1LL);
    if ( v33 < 0 )
    {
      v34 = (struct COREDEVICEACCESS *)v33;
      WdLogSingleEntry2(2LL, v18, v33);
      WdLogGlobalForLineNumber = 5730;
      v46 = 0LL;
      v45 = v34;
      v44 = (__int64)v18;
      v31 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
LABEL_51:
      v32 = 0x40000;
      goto LABEL_48;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v10 + 395), v59[1])
      || DXGPROCESS::IsRemoteConnection(v3) )
    {
      WdLogSingleEntry3(2LL, v59[1], *((int *)v10 + 104), *v26);
      WdLogGlobalForLineNumber = 5747;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Getting Shared Primary Handle on not used VidPn source 0x%I64x on adapter 0x%I64x%08I64x in current session.",
        v59[1],
        *((int *)v10 + 104),
        *v26,
        0LL,
        0LL);
    }
    else
    {
      v35 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v10 + 395), v59[1]);
      if ( !v35 || v35 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((ADAPTER_DISPLAY **)v10 + 395),
                                          v59[1]);
        if ( CddPrimaryShareResourceHandle )
          goto LABEL_66;
        v37 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                *((ADAPTER_DISPLAY **)v10 + 395),
                v18,
                v59[1],
                (unsigned int *)&v52,
                &v57,
                (struct COREDEVICEACCESS *)v63);
        if ( v37 >= 0 )
        {
          CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                            *((ADAPTER_DISPLAY **)v10 + 395),
                                            v59[1]);
          if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v10 + 395), v59[1]) )
            goto LABEL_66;
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v10 + 395), v59[1]) )
            goto LABEL_66;
          v39 = ADAPTER_DISPLAY::PresentCddPrimary(
                  *((PERESOURCE ***)v10 + 395),
                  v48,
                  v59[1],
                  (struct COREDEVICEACCESS *)v63);
          if ( v39 >= 0 )
            goto LABEL_66;
          v40 = v39;
          WdLogSingleEntry3(2LL, v59[1], v10, v39);
          WdLogGlobalForLineNumber = 5820;
          v46 = v40;
          v45 = v10;
          v44 = v59[1];
          v31 = L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I64x (St"
                 "atus = 0x%I64x).";
        }
        else
        {
          v38 = (struct COREDEVICEACCESS *)v37;
          WdLogSingleEntry2(2LL, v10, v37);
          WdLogGlobalForLineNumber = 5795;
          v46 = 0LL;
          v45 = v38;
          v44 = (__int64)v10;
          v31 = L"Failed to delay create CDD primary on adapter 0x%I64x (Status = 0x%I64x).";
        }
        goto LABEL_51;
      }
      v36 = v35;
      WdLogSingleEntry4(2LL, v35, v59[1], *((int *)v10 + 104), *v26);
      WdLogGlobalForLineNumber = 5765;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Ownership has been changed to 0x%I64x on VidPn source 0x%I64x on adapter 0x%I64x%08I64x.",
        v36,
        v59[1],
        *((int *)v10 + 104),
        *v26,
        0LL);
    }
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_66;
  }
  WdLogSingleEntry2(2LL, v4, v59[1]);
  WdLogGlobalForLineNumber = 5564;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
    (__int64)v4,
    v59[1],
    0LL,
    0LL,
    0LL);
  if ( *((_BYTE *)v4 + 209) )
  {
    CddPrimaryShareResourceHandle = 0;
LABEL_74:
    RtlWriteULongToUser(v1 + 2, CddPrimaryShareResourceHandle);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v55, v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit);
    return 0LL;
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v55, v7);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
  return (unsigned int)PairingAdapters;
}

/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1402C4DC0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkGetPresentHistory @ 0x1401F4EE0 (DxgkGetPresentHistory.c)
 *     DxgkCleanupPresentHistoryInternal @ 0x140414260 (DxgkCleanupPresentHistoryInternal.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000CFBC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x140012B80 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x140023E90 (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x140037AB0 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1400399D0 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x14004644C (--0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetPresentHistoryInternal(char *Src, int a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  struct DXGPROCESS *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rdi
  int PairingAdapters; // eax
  __int64 v13; // rsi
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v21; // r13
  DXGGLOBAL *v22; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGSESSIONDATA *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGADAPTER *v32; // r15
  struct PRESENTHISTORYBITS *v33; // rbx
  char *v34; // rdi
  unsigned int v35; // esi
  unsigned int v36; // r14d
  _DWORD *v37; // r15
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  _BYTE *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned int v46; // ebx
  __int64 v47; // rax
  unsigned int v48; // ebx
  int v49; // eax
  int v50; // eax
  LONG v51; // r14d
  __int64 v52; // rsi
  struct DXGADAPTER *v53; // r12
  int *v54; // rbx
  char v55; // r15
  DXGPRESENTHISTORYTOKENQUEUE *v56; // rdi
  int v57; // eax
  int v58; // edx
  __int64 v59; // r8
  __int64 v60; // rcx
  int v61; // r10d
  int v62; // r9d
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v66; // rdi
  unsigned int v67; // eax
  __int64 v68; // rbx
  __int64 v69; // rcx
  bool v70; // zf
  __int64 v71; // rcx
  unsigned int v72; // eax
  unsigned __int64 v73; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int64 *v81; // [rsp+28h] [rbp-1B0h]
  unsigned __int8 v82[8]; // [rsp+30h] [rbp-1A8h]
  __int64 v83; // [rsp+40h] [rbp-198h]
  __int64 v84; // [rsp+48h] [rbp-190h]
  size_t Size; // [rsp+60h] [rbp-178h] BYREF
  unsigned int v86; // [rsp+68h] [rbp-170h] BYREF
  int v87; // [rsp+70h] [rbp-168h] BYREF
  __int64 v88; // [rsp+78h] [rbp-160h]
  char v89; // [rsp+80h] [rbp-158h]
  __int128 v90; // [rsp+88h] [rbp-150h] BYREF
  int v91; // [rsp+98h] [rbp-140h]
  struct DXGPROCESS *v92; // [rsp+A0h] [rbp-138h]
  int Srca; // [rsp+A8h] [rbp-130h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v94[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-118h] BYREF
  char v96; // [rsp+C8h] [rbp-110h]
  struct DXGADAPTER *v97; // [rsp+D0h] [rbp-108h] BYREF
  unsigned int v98; // [rsp+D8h] [rbp-100h]
  int v99; // [rsp+DCh] [rbp-FCh]
  DXGADAPTER *v100; // [rsp+E0h] [rbp-F8h] BYREF
  struct DXGADAPTER *v101; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-E0h] BYREF
  char v103; // [rsp+100h] [rbp-D8h]
  void *v104; // [rsp+108h] [rbp-D0h]
  struct DXGPROCESS *v105; // [rsp+110h] [rbp-C8h]
  _BYTE v106[8]; // [rsp+118h] [rbp-C0h] BYREF
  __int64 v107; // [rsp+120h] [rbp-B8h]
  int v108; // [rsp+128h] [rbp-B0h]
  unsigned int v109[4]; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v110; // [rsp+140h] [rbp-98h]
  int v111; // [rsp+150h] [rbp-88h]
  _BYTE v112[16]; // [rsp+160h] [rbp-78h] BYREF
  DXGADAPTER *v113; // [rsp+170h] [rbp-68h]
  char v114; // [rsp+178h] [rbp-60h]
  __int64 v115; // [rsp+180h] [rbp-58h]

  v99 = a2;
  v87 = -1;
  v88 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v89 = 1;
    v87 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v89 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v87, 2060);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_7;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v8 )
      goto LABEL_7;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v8 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
      v8 = v7;
    }
  }
  v92 = v8;
  v105 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 189;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    v70 = v89 == 0;
    goto LABEL_150;
  }
  if ( (*((_DWORD *)v8 + 102) & 4) == 0 )
  {
    WdLogSingleEntry2(3LL, v8, -1073741790LL);
    WdLogGlobalForLineNumber = 201;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v78, (__int64)&EventProfilerExit);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v95, v8);
  if ( v96 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v95, 0LL, 0LL);
    WdLogGlobalForLineNumber = 672;
  }
  v9 = v95;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v9 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v9 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v9 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9 + 8, 0LL) )
    {
      if ( bTracingEnabled && *(_DWORD *)(v9 + 36) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16));
      ExAcquirePushLockExclusiveEx(v9 + 8, 0LL);
    }
    if ( *(_QWORD *)(v9 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v9 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 32) = 1;
  }
  v96 = 1;
  *(_OWORD *)v109 = 0LL;
  v110 = 0LL;
  if ( a2 )
  {
    v86 = 0;
    RtlCopyFromUser(v109, Src, 0x20uLL);
    RtlCopyToUser(Src + 24, &v86, 4uLL);
    RtlCopyToUser(Src + 8, &v86, 4uLL);
  }
  else
  {
    *(_OWORD *)v109 = *(_OWORD *)Src;
    v110 = *((_OWORD *)Src + 1);
    *((_DWORD *)Src + 6) = 0;
    *((_DWORD *)Src + 2) = 0;
  }
  if ( !(_QWORD)v110 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 249;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NULL present history pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_149:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v95);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    v70 = v89 == 0;
LABEL_150:
    if ( v70 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_177;
  }
  v97 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v100, v109[0], (struct _KTHREAD **)v8, &v97, 1);
  v11 = v97;
  if ( !v97 )
  {
    WdLogSingleEntry2(2LL, v109[0], -1073741811LL);
    WdLogGlobalForLineNumber = 263;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v109[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_147:
    if ( v100 )
      DXGADAPTER::ReleaseReference(v100);
    goto LABEL_149;
  }
  v101 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v97, 0, &v101, (unsigned __int64 *)v94, 0LL, 0LL, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry2(2LL, v11, PairingAdapters);
    WdLogGlobalForLineNumber = 282;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistory (Status = 0x%I64x)!",
      (__int64)v11,
      v13,
      0LL,
      0LL,
      0LL);
    if ( v100 )
      DXGADAPTER::ReleaseReference(v100);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v95);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v71, (__int64)&EventProfilerExit);
    return (unsigned int)v13;
  }
  v14 = v101;
  if ( !v101 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 287;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 287LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREACCESS::COREACCESS((COREACCESS *)v112, v14);
  if ( v114 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v112, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v113 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v113 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)"g");
      KeWaitForSingleObject((char *)v113 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v113, 0LL);
  }
  v115 = 0LL;
  v114 = 1;
  DXGADAPTER::ReleaseReference(v14);
  if ( !*((_QWORD *)v14 + 396) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 299;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      299LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Srca = 0;
  Size = 0LL;
  v16 = *((_QWORD *)v14 + 396);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v106, (struct _KTHREAD **)(v16 + 976), 0);
  v17 = v107;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v17, 0LL) )
  {
    if ( bTracingEnabled && *(_DWORD *)(v17 + 24) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)"g");
    ExAcquirePushLockSharedEx(v17, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v17 + 16));
  v108 = 1;
  v19 = PsGetCurrentProcess(v18);
  ProcessSessionId = PsGetProcessSessionId(v19);
  if ( ProcessSessionId < *(_DWORD *)(v16 + 1008) && *(_QWORD *)(*(_QWORD *)(v16 + 1016) + 8LL * ProcessSessionId) )
  {
    _mm_lfence();
    v21 = *(_QWORD *)(*(_QWORD *)(v16 + 1016) + 8LL * ProcessSessionId);
  }
  else
  {
    v21 = 0LL;
  }
  v94[0] = (DXGPRESENTHISTORYTOKENQUEUE *)v21;
  if ( !v21 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 322;
    if ( *((_DWORD *)v14 + 50) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v106);
      COREACCESS::~COREACCESS((COREACCESS *)v112, v79);
      if ( v100 )
        DXGADAPTER::ReleaseReference(v100);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v95);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
      if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v80, (__int64)&EventProfilerExit);
      return 0LL;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v106);
    COREACCESS::~COREACCESS((COREACCESS *)v112, v77);
    goto LABEL_147;
  }
  v22 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v22);
  v28 = SessionData;
  if ( !SessionData )
  {
    PsGetCurrentProcessSessionId(v25, v24, v26, v27);
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 343;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v106);
    COREACCESS::~COREACCESS((COREACCESS *)v112, v73);
    if ( v100 )
      DXGADAPTER::ReleaseReference(v100);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v95);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( !v89 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_177:
    McTemplateK0q_EtwWriteTransfer(v69, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v102, (struct DXGSESSIONDATA *)((char *)SessionData + 16), 0);
  if ( v103 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v102, 0LL, 0LL);
    WdLogGlobalForLineNumber = 672;
  }
  v29 = v102;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v29 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v29 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v29 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29 + 8, 0LL) )
    {
      if ( bTracingEnabled && *(_DWORD *)(v29 + 36) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)"g");
      _InterlockedIncrement64((volatile signed __int64 *)(v29 + 16));
      ExAcquirePushLockExclusiveEx(v29 + 8, 0LL);
    }
    if ( *(_QWORD *)(v29 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v29 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v29 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v29 + 32) = 1;
  }
  v103 = 1;
  v32 = (struct DXGSESSIONDATA *)((char *)v28 + 64);
  v97 = v32;
  v33 = (struct DXGSESSIONDATA *)((char *)v28 + 16448);
  v92 = v33;
  v34 = (char *)v110;
  v104 = (void *)v110;
  v35 = v109[1];
  v98 = v109[1];
  v86 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory((KSPIN_LOCK *)v21, v30, &v86, v32, v33) >= 0 )
  {
    v36 = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 367;
    v36 = 0;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 367LL, 0LL, 0LL, 0LL, 0LL);
  }
  v91 = 0;
  while ( 1 )
  {
    if ( v36 >= v86 )
    {
      v48 = v91;
      goto LABEL_83;
    }
    v37 = (_DWORD *)*((_QWORD *)v32 + v36);
    if ( *v37 != 2 )
    {
      switch ( *v37 )
      {
        case 1:
          v67 = v37[14];
          if ( v67 <= 0x10 )
          {
            v39 = 16 * v67 + 67;
            goto LABEL_65;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 53;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 53LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_187;
        case 3:
          v72 = v37[10];
          if ( v72 <= 0x10 )
          {
            v39 = 16 * v72 + 51;
            goto LABEL_65;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 73;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 73LL, 0LL, 0LL, 0LL, 0LL);
          break;
        case 4:
        case 5:
        case 7:
        case 8:
          v39 = 31;
          goto LABEL_65;
        case 9:
          v39 = 47;
          goto LABEL_65;
        default:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 96;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Unknown type for present history token is found in queue.",
            96LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v39 = 7;
          goto LABEL_65;
      }
      goto LABEL_187;
    }
    v38 = v37[203];
    if ( v38 > 0x10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 63;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 63LL, 0LL, 0LL, 0LL, 0LL);
LABEL_187:
      v40 = 0;
      goto LABEL_66;
    }
    v39 = 16 * v38 + 823;
LABEL_65:
    v40 = v39 & 0xFFFFFFF8;
LABEL_66:
    LODWORD(Size) = v40;
    if ( !v40 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 377;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TokenSize > 0", 377LL, 0LL, 0LL, 0LL, 0LL);
      v40 = 0;
    }
    if ( v40 > v35 )
      break;
    v37[1] = v40;
    if ( *v37 == 2 )
      goto LABEL_70;
    if ( *v37 == 9 )
    {
      *(_QWORD *)&v90 = *((_QWORD *)v37 + 2);
      if ( (_QWORD)v90 )
      {
        if ( (v37[8] & 4) != 0 )
        {
          KeEnterCriticalRegion();
          v68 = v90;
          ExAcquirePushLockSharedEx(v90 + 88, 0LL);
          *(_QWORD *)&v90 = *(_QWORD *)(v68 + 112);
          CPushLock::ReleaseLock((CPushLock *)(v68 + 88));
          if ( !(_QWORD)v90 || !*(_DWORD *)(v90 + 32) && !*(_DWORD *)(v90 + 36) )
            goto LABEL_75;
          v33 = v92;
          if ( *(_QWORD *)(v90 + 48) )
          {
LABEL_70:
            v90 = 0LL;
            if ( *v37 == 2 )
            {
              CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
                (CIFlipPresentHistoryTokenRedirectedFlip *)&v90,
                (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v37 + 4));
            }
            else if ( *v37 == 9 )
            {
              CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
                (CIFlipPresentHistoryTokenFlipManager *)&v90,
                (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)(v37 + 4));
            }
            v41 = (char *)v33 + v36;
            v42 = (unsigned __int8)*v41;
            if ( (v42 & 1) != 0 )
            {
              LOBYTE(v42) = 1;
              (*(void (__fastcall **)(__int128 *, __int64))(v90 + 272))(&v90, v42);
              (*(void (__fastcall **)(__int128 *, bool))(v90 + 280))(&v90, (*v41 & 2) != 0);
            }
            else
            {
              LOBYTE(v42) = (v42 & 4) != 0;
              (*(void (__fastcall **)(__int128 *, __int64))(v90 + 288))(&v90, v42);
              if ( (*v41 & 8) != 0 )
              {
                LOBYTE(v43) = 1;
                (*(void (__fastcall **)(__int128 *, __int64))(v90 + 232))(&v90, v43);
              }
            }
            LOBYTE(v43) = (*v41 & 0x60) == 64;
            (*(void (__fastcall **)(__int128 *, __int64))(v90 + 312))(&v90, v43);
            v44 = *((_QWORD *)v37 + 1);
            v45 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v90 + 16))(&v90);
            v46 = (*(__int64 (__fastcall **)(__int128 *))(v90 + 336))(&v90);
            v47 = (*(__int64 (__fastcall **)(__int128 *))(v90 + 104))(&v90);
            WdLogSingleEntry5(8LL, v37, v47, v46, v45, v44);
            WdLogGlobalForLineNumber = 417;
            (*(void (__fastcall **)(__int128 *, __int64))v90)(&v90, 1LL);
            v34 = (char *)v104;
            v35 = v98;
LABEL_75:
            v33 = v92;
          }
        }
      }
    }
    if ( *v37 == 9 )
      v37[8] ^= ((unsigned __int8)v37[8] ^ (*((_BYTE *)v33 + v36) >> 4)) & 1;
    if ( v99 )
      RtlCopyToUser(v34, v37, (unsigned int)Size);
    else
      memmove(v34, v37, (unsigned int)Size);
    if ( (*((_BYTE *)v33 + v36) & 1) != 0 && *v37 == 2 )
    {
      if ( (v37[15] & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 451;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pToken->Token.Flip.Flags.IndependentFlip",
          451LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (unsigned int)((int)(v37[15] << 16) >> 30) > 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 452;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITT"
                    "ED || pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_COMPLETE",
          452LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v37[15] = (((__int16)v37[15] & 0xFFFFC000) + 0x4000) ^ ((((__int16)v37[15] & 0xFFFFC000) + 0x4000) ^ v37[15]) & 0xFFFF3FFF;
    }
    v34 += (unsigned int)Size;
    v104 = v34;
    Srca += Size;
    v35 -= Size;
    v98 = v35;
    ++v36;
    v32 = v97;
  }
  v48 = 261;
  v91 = 261;
  v32 = v97;
LABEL_83:
  HIDWORD(Size) = v36;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v21, 0);
  if ( v99 )
  {
    RtlCopyToUser(Src + 24, (char *)&Size + 4, 4uLL);
    if ( HIDWORD(Size) || !(_DWORD)Size )
    {
      RtlCopyToUser(Src + 8, &Srca, 4uLL);
    }
    else
    {
      RtlCopyToUser(Src + 8, &Size, 4uLL);
      v48 = -1073741789;
      v91 = -1073741789;
      v111 = -1073741789;
    }
  }
  else
  {
    v49 = HIDWORD(Size);
    *((_DWORD *)Src + 6) = HIDWORD(Size);
    if ( v49 || (v50 = Size) == 0 )
    {
      v50 = Srca;
    }
    else
    {
      v48 = -1073741789;
      v91 = -1073741789;
    }
    *((_DWORD *)Src + 2) = v50;
  }
  v51 = HIDWORD(Size);
  v52 = 0LL;
  if ( HIDWORD(Size) )
  {
    v53 = v101;
    do
    {
      v54 = (int *)*((_QWORD *)v32 + v52);
      v55 = 1;
      if ( *v54 == 2
        || *v54 == 9
        && (v66 = *((_QWORD *)v54 + 2)) != 0
        && (v54[8] & 4) != 0
        && (KeEnterCriticalRegion(),
            ExAcquirePushLockSharedEx(v66 + 88, 0LL),
            v94[0] = *(DXGPRESENTHISTORYTOKENQUEUE **)(v66 + 112),
            CPushLock::ReleaseLock((CPushLock *)(v66 + 88)),
            v94[0])
        && (*((_DWORD *)v94[0] + 8) || *((_DWORD *)v94[0] + 9))
        && *((_QWORD *)v94[0] + 6) )
      {
        if ( (*((_BYTE *)v92 + v52) & 1) != 0 )
        {
          *(_OWORD *)v94 = 0LL;
          if ( *v54 == 2 )
          {
            CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
              (CIFlipPresentHistoryTokenRedirectedFlip *)v94,
              (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v54 + 4));
          }
          else if ( *v54 == 9 )
          {
            CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
              (CIFlipPresentHistoryTokenFlipManager *)v94,
              (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)(v54 + 4));
          }
          v56 = v94[0];
          v57 = (*((__int64 (__fastcall **)(DXGPRESENTHISTORYTOKENQUEUE **))v94[0] + 37))(v94);
          (*((void (__fastcall **)(DXGPRESENTHISTORYTOKENQUEUE **, _QWORD))v56 + 38))(v94, (unsigned int)(v57 + 1));
          if ( (*((unsigned int (__fastcall **)(DXGPRESENTHISTORYTOKENQUEUE **))v94[0] + 37))(v94) < 2 )
          {
            v55 = 0;
            (*((void (__fastcall **)(DXGPRESENTHISTORYTOKENQUEUE **))v94[0] + 46))(v94);
          }
          (*(void (__fastcall **)(DXGPRESENTHISTORYTOKENQUEUE **, __int64))v94[0])(v94, 1LL);
        }
      }
      if ( v55 )
      {
        if ( bTracingEnabled )
        {
          v58 = 0;
          v59 = 0LL;
          v60 = 0LL;
          v61 = 0;
          v62 = 0;
          if ( v54 )
          {
            v58 = *v54;
            v59 = (unsigned int)v54[1];
            if ( *v54 == 2 )
            {
              v60 = *((_QWORD *)v54 + 3);
            }
            else if ( v58 == 3 )
            {
LABEL_163:
              v60 = *((_QWORD *)v54 + 2);
            }
            else
            {
              switch ( v58 )
              {
                case 1:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                  goto LABEL_163;
                default:
                  v60 = 0LL;
                  break;
              }
            }
            switch ( v58 )
            {
              case 2:
                v61 = v54[15];
                break;
              case 6:
                v61 = v54[6];
                break;
              case 9:
                v61 = v54[8];
                break;
            }
            if ( v58 == 2 )
              v62 = v54[199];
            else
              v62 = 0;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v84) = v62;
            LODWORD(v83) = v61;
            *(_DWORD *)v82 = v59;
            LODWORD(v81) = v58;
            McTemplateK0ppqqxdqp_EtwWriteTransfer(
              v60,
              &EventRetirePresentHistory,
              v59,
              v53,
              v54,
              v81,
              *(_QWORD *)v82,
              v60,
              v83,
              v84,
              0LL);
          }
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v21 + 48), (PSLIST_ENTRY)v54 - 1);
      }
      else
      {
        --v51;
      }
      v52 = (unsigned int)(v52 + 1);
      v32 = v97;
    }
    while ( (unsigned int)v52 < HIDWORD(Size) );
    v48 = v91;
  }
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v21, SHIDWORD(Size));
  if ( v51 )
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v21 + 64), 0, v51, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v102);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v106);
  COREACCESS::~COREACCESS((COREACCESS *)v112, v63);
  if ( v100 )
    DXGADAPTER::ReleaseReference(v100);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v95);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
  if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v64, (__int64)&EventProfilerExit);
  return v48;
}

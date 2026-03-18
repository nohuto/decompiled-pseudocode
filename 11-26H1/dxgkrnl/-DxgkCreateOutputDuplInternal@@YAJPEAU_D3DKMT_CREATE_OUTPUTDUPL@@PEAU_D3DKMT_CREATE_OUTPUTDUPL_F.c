/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1404032E0
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1401EF110 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1400463DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1401ED1DC (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1401ED2DC (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14029E110 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x140403B68 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x14040F02C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r15
  __int64 v6; // rcx
  bool v7; // zf
  DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  const wchar_t *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  char IsRemoteSessionUsingXddmMonitors; // al
  int v18; // ecx
  char v19; // al
  __int64 v20; // rcx
  bool v21; // zf
  int v22; // eax
  struct DXGADAPTER **v23; // r9
  D3DKMT_HANDLE hAdapter; // edx
  int v25; // eax
  int RemoteOutputDuplMgr; // edi
  struct DXGADAPTER *v27; // r12
  struct DXGADAPTER *v28; // r13
  struct DXGADAPTER *v29; // rsi
  unsigned __int64 v30; // rdx
  bool v31; // zf
  int OutputDuplManager; // eax
  OUTPUTDUPL_MGR *v33; // rsi
  DXGGLOBAL *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v39; // rax
  const wchar_t *v40; // r9
  OUTPUTDUPL_SESSION_MGR *v41; // r15
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // esi
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  bool v47; // zf
  UINT KeyedMutexCount; // eax
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  int OutputDuplication; // eax
  __int64 v56; // rcx
  struct DXGPROCESS *v57; // rax
  __int64 v58; // rbx
  __int64 VidPnSourceId; // [rsp+20h] [rbp-E0h]
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+58h] [rbp-A8h]
  char v62; // [rsp+60h] [rbp-A0h]
  int v63; // [rsp+68h] [rbp-98h] BYREF
  DXGADAPTER *v64[2]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v65; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 Current; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTER *v67; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v68; // [rsp+98h] [rbp-68h] BYREF
  OUTPUTDUPL_MGR *v69; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v70[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v71; // [rsp+B0h] [rbp-50h]
  char v72; // [rsp+B8h] [rbp-48h]
  _BYTE v73[144]; // [rsp+C0h] [rbp-40h] BYREF

  v60 = -1;
  v61 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v62 = 1;
    v60 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2061);
  if ( !(unsigned __int8)MmIsKernelAddress(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3226;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"MmIsKernelAddress((PVOID)pCreate)",
      3226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = (unsigned __int64)DXGPROCESS::GetCurrent(v4);
  v5 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3231;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 3231LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 )
    {
      v7 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_49;
    }
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  if ( *((_DWORD *)DXGGLOBAL::GetSessionData(Global, v9, v10, v11) + 4742) )
  {
    WdLogSingleEntry0(2LL);
    v12 = 3239LL;
    v13 = L"Screen capture (DDA) is disabled in VAIL container";
    goto LABEL_14;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    WdLogSingleEntry0(2LL);
    v12 = 3246LL;
    v13 = L"Screen capture (DDA) is disabled because of MDM policy";
LABEL_14:
    WdLogGlobalForLineNumber = v12;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return 3221225506LL;
  }
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors(v14);
  v18 = *(_DWORD *)a2;
  v19 = *(_DWORD *)a2 ^ (32 * IsRemoteSessionUsingXddmMonitors);
  v63 = 0;
  *(_DWORD *)a2 = v18 ^ v19 & 0x20;
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*(_QWORD *)(v5 + 88) + 240LL))(&v63, 0LL, 0LL);
  if ( !v63 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3258;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Output duplication is not supported on disconnected session",
      3258LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 )
    {
      v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_64;
    }
    return 2147483685LL;
  }
  v22 = *(_DWORD *)a2;
  v23 = &v65;
  hAdapter = a1->hAdapter;
  v65 = 0LL;
  if ( (v22 & 0x20) != 0 )
    v23 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v64, hAdapter, (struct _KTHREAD **)v5, v23, 1);
  v25 = *(_DWORD *)a2;
  RemoteOutputDuplMgr = 0;
  v67 = 0LL;
  v27 = 0LL;
  v68 = 0LL;
  v28 = 0LL;
  v69 = 0LL;
  if ( (v25 & 0x20) == 0 )
  {
    v29 = v65;
    if ( !v65 )
    {
      WdLogSingleEntry2(3LL, a1->hAdapter, -1073741811LL);
      WdLogGlobalForLineNumber = 3280;
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v64, v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
      v31 = v62 == 0;
      goto LABEL_47;
    }
    OutputDuplManager = FindOutputDuplManager(
                          v65,
                          a1->VidPnSourceId,
                          &v67,
                          (unsigned __int64 *)&v65,
                          &v68,
                          &Current,
                          &v69);
    RemoteOutputDuplMgr = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      WdLogSingleEntry2(3LL, v29, OutputDuplManager);
      WdLogGlobalForLineNumber = 3295;
      if ( v64[0] )
        DXGADAPTER::ReleaseReference(v64[0]);
      goto LABEL_80;
    }
    v27 = v67;
    v28 = v68;
    v33 = v69;
LABEL_43:
    KeyedMutexCount = a1->KeyedMutexCount;
    if ( KeyedMutexCount )
    {
      if ( KeyedMutexCount > 3 )
      {
        WdLogSingleEntry1(2LL);
        v49 = a1->KeyedMutexCount;
        WdLogGlobalForLineNumber = 3343;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid KeyedMutexCount specified 0x%I64x",
          v49,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v64, v50);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
        v31 = v62 == 0;
LABEL_47:
        if ( !v31 )
        {
          v7 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_49:
          if ( !v7 )
            McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
        }
        return 3221225485LL;
      }
      *(_DWORD *)a2 &= ~0x10u;
    }
    else
    {
      *(_DWORD *)a2 |= 0x10u;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, v27, v28);
    if ( (*(_DWORD *)a2 & 0x20) == 0 )
    {
      DXGADAPTER::ReleaseReference(v27);
      DXGADAPTER::ReleaseReference(v28);
      RemoteOutputDuplMgr = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73, 0LL);
      if ( RemoteOutputDuplMgr < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
LABEL_79:
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v64, v51);
LABEL_80:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
        v47 = v62 == 0;
LABEL_81:
        if ( !v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v46, (__int64)&EventProfilerExit);
        return (unsigned int)RemoteOutputDuplMgr;
      }
    }
    if ( a1->VidPnSourceId >= *((_DWORD *)v33 + 19) )
    {
      WdLogSingleEntry1(2LL);
      VidPnSourceId = a1->VidPnSourceId;
      WdLogGlobalForLineNumber = 3369;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid source ID 0x%I64x",
        VidPnSourceId,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v64, v52);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
      if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, (__int64)&EventProfilerExit);
      return 3223192324LL;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70, (struct _KTHREAD **)v33 + 3, 0);
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v70);
    if ( !*((_DWORD *)v33 + 18) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3380;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Connection currently not allowed",
        3380LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v64, v54);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
      if ( v62 )
      {
        v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_64:
        if ( !v21 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
      }
      return 2147483685LL;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
      {
LABEL_72:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
        if ( RemoteOutputDuplMgr >= 0 && (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x10) == 0 )
        {
          v57 = DXGPROCESS::GetCurrent(v56);
          if ( v57 )
            v58 = *((_QWORD *)v57 + 11);
          else
            v58 = 0LL;
          v71 = v5;
          v72 = 0;
          DXGUSERCRIT::Acquire((DXGUSERCRIT *)v70, 1u);
          (*(void (**)(void))(v58 + 216))();
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v70);
        }
        goto LABEL_79;
      }
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v33, a1);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v33, a1, a2);
    }
    RemoteOutputDuplMgr = OutputDuplication;
    goto LABEL_72;
  }
  v34 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v34, v35, v36, v37);
  if ( SessionData )
  {
    v41 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
    if ( v41 )
    {
      v33 = (OUTPUTDUPL_MGR *)*((_QWORD *)v41 + 15);
      if ( !v33 )
      {
        v44 = (*(__int64 (**)(void))(*(_QWORD *)(Current + 88) + 344LL))();
        RemoteOutputDuplMgr = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(v41, v44);
        if ( RemoteOutputDuplMgr < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3324;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create remote output duplication manager for 0x%I64x sources",
            v44,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v64, v45);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
          v47 = v62 == 0;
          goto LABEL_81;
        }
        v33 = (OUTPUTDUPL_MGR *)*((_QWORD *)v41 + 15);
      }
      v5 = Current;
      goto LABEL_43;
    }
    WdLogSingleEntry0(2LL);
    v39 = 3312LL;
    v40 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v39 = 3305LL;
    v40 = L"DXGSESSIONDATA is NULL";
  }
  WdLogGlobalForLineNumber = v39;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v39, 0LL, 0LL, 0LL, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v64, v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit);
  return 3221225495LL;
}

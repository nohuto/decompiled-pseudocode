/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402A3E84
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403CA78C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rax
  __int64 v12; // rax
  int v13; // r13d
  DXGADAPTER *v14; // r12
  struct DXGADAPTER *v15; // r14
  __int64 v16; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  int IndirectDisplayPairedAdapter; // eax
  __int64 v19; // rdi
  char v20; // r15
  __int64 v21; // rbx
  __int64 result; // rax
  __int64 v23; // rbx
  volatile signed __int64 *v24; // rbx
  DXGADAPTER *v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  DXGADAPTER *v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v36)(struct OUTPUTDUPL_MGR *, __int64); // [rsp+70h] [rbp-90h]
  _BYTE v37[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v38[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[16]; // [rsp+98h] [rbp-68h] BYREF
  DXGADAPTER *v40; // [rsp+A8h] [rbp-58h]
  _BYTE v41[16]; // [rsp+D8h] [rbp-28h] BYREF
  DXGADAPTER *v42; // [rsp+E8h] [rbp-18h]
  char v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]

  v6 = a3;
  v34 = a3;
  v36 = a5;
  v35 = a4;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess
    || (v10 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7, (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0) )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v11 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v11 )
        goto LABEL_4;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v9;
  if ( !v9 )
  {
LABEL_6:
    v13 = 0;
    goto LABEL_7;
  }
LABEL_4:
  v12 = *((_QWORD *)v11 + 11);
  if ( !v12 )
    goto LABEL_6;
  v33 = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v12 + 240))(0LL, 0LL, &v33) )
    goto LABEL_6;
  v13 = 1;
  if ( v33 )
    goto LABEL_6;
LABEL_7:
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 || v13 )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v10) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 82;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgIsRemoteSessionUsingXddmMonitors()",
        82LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 88;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find remote output duplication manager",
        88LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221226021LL;
    }
    goto LABEL_31;
  }
  v16 = *((_QWORD *)a1 + 395);
  v31 = 0LL;
  if ( v16 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(v16 + 96) )
    {
      v23 = v6;
      LODWORD(v6) = -1073741811;
      WdLogSingleEntry2(2LL, v23, -1073741811LL);
      WdLogGlobalForLineNumber = 8833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v23,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
      if ( *((_QWORD *)a1 + 396) )
      {
        v31 = a1;
        _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
        v32 = -1LL;
LABEL_13:
        v14 = v31;
        v15 = a1;
        v31 = 0LL;
        if ( !v14 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3188;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(!o_ppRenderAdapter || *o_ppRenderAdapter != NULL) && (!o_ppDisplayAdapter || *o_ppDisplayAdapter != NULL)",
            3188LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        RemoteOutputDuplMgr = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)a1 + 395) + 120LL);
        goto LABEL_23;
      }
      if ( (*((_DWORD *)a1 + 111) & 0x100) != 0 )
      {
        IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, 0, &v31);
        v6 = IndirectDisplayPairedAdapter;
        if ( IndirectDisplayPairedAdapter >= 0 )
          goto LABEL_13;
        WdLogSingleEntry2(2LL, a1, IndirectDisplayPairedAdapter);
        WdLogGlobalForLineNumber = 8875;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
          (__int64)a1,
          v6,
          0LL,
          0LL,
          0LL);
        if ( v31 )
          DXGADAPTER::ReleaseReference(v31);
        v31 = 0LL;
      }
      else
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
        v24 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 126);
        v31 = (DXGADAPTER *)v24;
        if ( v24 )
        {
          _InterlockedIncrement64(v24 + 3);
          v32 = -1LL;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
          goto LABEL_13;
        }
        LODWORD(v6) = -1073741637;
        WdLogSingleEntry2(2LL, a1, -1073741637LL);
        WdLogGlobalForLineNumber = 8889;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
          (__int64)a1,
          -1073741637LL,
          0LL,
          0LL,
          0LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
        v31 = 0LL;
      }
      DXGADAPTER::ReleaseReference(a1);
    }
  }
  else
  {
    LODWORD(v6) = -1073741637;
    WdLogSingleEntry2(4LL, a1, -1073741637LL);
    WdLogGlobalForLineNumber = 8846;
  }
  v19 = v34;
  WdLogSingleEntry3(2LL, a1, v34, (int)v6);
  WdLogGlobalForLineNumber = 3183;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
    (__int64)a1,
    v19,
    (int)v6,
    0LL,
    0LL);
  RemoteOutputDuplMgr = 0LL;
  if ( (int)v6 < 0 )
  {
    WdLogSingleEntry2(3LL, a1, (int)v6);
    result = (unsigned int)v6;
    WdLogGlobalForLineNumber = 75;
    return result;
  }
LABEL_23:
  if ( !v15 )
  {
LABEL_31:
    v20 = 0;
    goto LABEL_25;
  }
  v37[16] = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v15 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v15 + 38);
  v20 = 1;
LABEL_25:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v15, 0LL);
  if ( a1 && !v13 )
  {
    DXGADAPTER::ReleaseReference(v14);
    DXGADAPTER::ReleaseReference(v15);
    if ( v43 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v41, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v25 = v42;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v42 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v42 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, (__int64)"g");
        KeWaitForSingleObject((char *)v42 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v42, 0LL);
      v25 = v42;
    }
    v44 = 0LL;
    v43 = 1;
    if ( *((_DWORD *)v25 + 50) != 1 )
      goto LABEL_55;
    if ( v40 != v42 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v39, 0LL);
      if ( *((_DWORD *)v40 + 50) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v39);
LABEL_55:
        COREACCESS::Release((COREACCESS *)v41);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
        if ( v20 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v15 + 38);
          ExReleasePushLockSharedEx((char *)v15 + 136, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference(v15);
        }
        return 3221226166LL;
      }
    }
    v38[1] = 1;
  }
  if ( v34 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    v27 = v36(RemoteOutputDuplMgr, v35);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    if ( v20 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v15 + 38);
      ExReleasePushLockSharedEx((char *)v15 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v15);
    }
    return v27;
  }
  else
  {
    v21 = v34;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 126;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v21, 0LL, 0LL, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    if ( v20 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v15 + 38);
      ExReleasePushLockSharedEx((char *)v15 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v15);
    }
    return 3223192324LL;
  }
}

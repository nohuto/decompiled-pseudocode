/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_DXGKARG_SETPOINTERPOSITION@@P8OUTPUTDUPL_MGR@@EAAX2@Z@Z @ 0x1402A2CE8
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_b9a5656a752cedcbf1444dc35c6078d9_@@CA@PEAVOUTPUTDUPL_MGR@@P82@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1@Z @ 0x1402A3554 (-_lambda_invoker_cdecl_@_lambda_b9a5656a752cedcbf1444dc35c6078d9_@@CA@PEAVOUTPUTDUPL_MGR@@P82@EA.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbx
  int IsRemoteSessionUsingXddmMonitors; // eax
  DXGADAPTER *v7; // r14
  struct DXGADAPTER *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r13
  char v13; // al
  char v14; // di
  DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rbx
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+64h] [rbp-9Ch]
  _QWORD v24[2]; // [rsp+70h] [rbp-90h] BYREF
  char v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[16]; // [rsp+98h] [rbp-68h] BYREF
  DXGADAPTER *v29; // [rsp+A8h] [rbp-58h]
  _BYTE v30[16]; // [rsp+D8h] [rbp-28h] BYREF
  DXGADAPTER *v31; // [rsp+E8h] [rbp-18h]
  char v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  v4 = a3;
  v22 = a3;
  v26 = a4;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v7 = 0LL;
  v23 = IsRemoteSessionUsingXddmMonitors;
  v8 = 0LL;
  if ( !a1 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
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
      LODWORD(v10) = -1073741275;
      return (unsigned int)v10;
    }
    goto LABEL_56;
  }
  v9 = *((_QWORD *)a1 + 395);
  v21[0] = 0LL;
  if ( v9 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(v9 + 96) )
    {
      LODWORD(v10) = -1073741811;
      WdLogSingleEntry2(2LL, v4, -1073741811LL);
      WdLogGlobalForLineNumber = 8833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v4,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_5;
    }
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    if ( *((_QWORD *)a1 + 396) )
    {
      v21[0] = a1;
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
      v21[1] = (DXGADAPTER *)-1LL;
LABEL_28:
      v7 = v21[0];
      v8 = a1;
      v21[0] = 0LL;
      if ( !v7 )
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
      goto LABEL_7;
    }
    if ( (*((_DWORD *)a1 + 111) & 0x100) != 0 )
    {
      IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, 0, v21);
      v10 = IndirectDisplayPairedAdapter;
      if ( IndirectDisplayPairedAdapter >= 0 )
        goto LABEL_28;
      WdLogSingleEntry2(2LL, a1, IndirectDisplayPairedAdapter);
      WdLogGlobalForLineNumber = 8875;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
        (__int64)a1,
        v10,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v24);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
      Global = DXGGLOBAL::GetGlobal();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, *((struct DXGADAPTER **)Global + 126));
      if ( v21[0] )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
        goto LABEL_28;
      }
      LODWORD(v10) = -1073741637;
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
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    }
    if ( v21[0] )
      DXGADAPTER::ReleaseReference(v21[0]);
    v21[0] = 0LL;
    DXGADAPTER::ReleaseReference(a1);
    goto LABEL_5;
  }
  LODWORD(v10) = -1073741637;
  WdLogSingleEntry2(4LL, a1, -1073741637LL);
  WdLogGlobalForLineNumber = 8846;
LABEL_5:
  v11 = v22;
  WdLogSingleEntry3(2LL, a1, v22, (int)v10);
  WdLogGlobalForLineNumber = 3183;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
    (__int64)a1,
    v11,
    (int)v10,
    0LL,
    0LL);
  RemoteOutputDuplMgr = 0LL;
  if ( (int)v10 < 0 )
  {
    WdLogSingleEntry2(3LL, a1, (int)v10);
    WdLogGlobalForLineNumber = 75;
    return (unsigned int)v10;
  }
  v7 = 0LL;
LABEL_7:
  if ( !v8 )
  {
LABEL_56:
    v13 = 0;
    goto LABEL_9;
  }
  v13 = 1;
LABEL_9:
  v24[1] = v8;
  v14 = 0;
  v25 = 0;
  if ( v13 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 3);
    v24[0] = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v8 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v8 + 38);
    v14 = 1;
    v25 = 1;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v8, 0LL);
  if ( a1 && !v23 )
  {
    DXGADAPTER::ReleaseReference(v7);
    DXGADAPTER::ReleaseReference(v8);
    if ( v32 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v30, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v15 = v31;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v31 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v31 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (__int64)"g");
        KeWaitForSingleObject((char *)v31 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v31, 0LL);
      v15 = v31;
    }
    v33 = 0LL;
    v32 = 1;
    if ( *((_DWORD *)v15 + 50) != 1 )
      goto LABEL_41;
    if ( v29 != v31 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v28, 0LL);
      if ( *((_DWORD *)v29 + 50) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v28);
LABEL_41:
        COREACCESS::Release((COREACCESS *)v30);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        LODWORD(v10) = -1073741130;
        return (unsigned int)v10;
      }
    }
    v27[1] = 1;
  }
  if ( v22 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    v18 = v22;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 126;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v18, 0LL, 0LL, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8 + 38);
      ExReleasePushLockSharedEx((char *)v8 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v8);
    }
    LODWORD(v10) = -1071774972;
  }
  else
  {
    LODWORD(v10) = _lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_(
                     RemoteOutputDuplMgr,
                     OUTPUTDUPL_MGR::ProcessPointerPositionChange,
                     v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8 + 38);
      ExReleasePushLockSharedEx((char *)v8 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v8);
    }
  }
  return (unsigned int)v10;
}

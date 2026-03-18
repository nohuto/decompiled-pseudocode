/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402A1824
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402A1730 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_META.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // rbx
  int IsRemoteSessionUsingXddmMonitors; // eax
  char v8; // r15
  struct DXGADAPTER *v9; // r14
  __int64 v10; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  __int64 v12; // r15
  int IndirectDisplayPairedAdapter; // eax
  __int64 v14; // rdi
  char v15; // al
  int v16; // r8d
  unsigned int v17; // ebx
  __int64 result; // rax
  struct DXGGLOBAL *Global; // rax
  int v20; // esi
  __int64 v21; // rbx
  DXGADAPTER *v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v27)(struct OUTPUTDUPL_MGR *, __int64); // [rsp+80h] [rbp-80h]
  _BYTE v28[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a3;
  v23 = a3;
  v27 = a5;
  v26 = a4;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v8 = 0;
  v25 = IsRemoteSessionUsingXddmMonitors;
  v24 = 0LL;
  v9 = 0LL;
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
      return 3221226021LL;
    }
    goto LABEL_26;
  }
  v10 = *((_QWORD *)a1 + 395);
  v22[0] = 0LL;
  if ( v10 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(v10 + 96) )
    {
      LODWORD(v12) = -1073741811;
      WdLogSingleEntry2(2LL, v6, -1073741811LL);
      WdLogGlobalForLineNumber = 8833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v6,
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
        v22[0] = a1;
        _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
        v22[1] = (DXGADAPTER *)-1LL;
LABEL_7:
        v24 = v22[0];
        v9 = a1;
        v22[0] = 0LL;
        if ( !v24 )
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
        goto LABEL_17;
      }
      if ( (*((_DWORD *)a1 + 111) & 0x100) != 0 )
      {
        IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, 0, v22);
        v12 = IndirectDisplayPairedAdapter;
        if ( IndirectDisplayPairedAdapter >= 0 )
          goto LABEL_7;
        WdLogSingleEntry2(2LL, a1, IndirectDisplayPairedAdapter);
        WdLogGlobalForLineNumber = 8875;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
          (__int64)a1,
          v12,
          0LL,
          0LL,
          0LL);
        if ( v22[0] )
          DXGADAPTER::ReleaseReference(v22[0]);
        v22[0] = 0LL;
      }
      else
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v28);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
        Global = DXGGLOBAL::GetGlobal();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, *((struct DXGADAPTER **)Global + 126));
        if ( v22[0] )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
          goto LABEL_7;
        }
        LODWORD(v12) = -1073741637;
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
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
        if ( v22[0] )
          DXGADAPTER::ReleaseReference(v22[0]);
        v22[0] = 0LL;
      }
      DXGADAPTER::ReleaseReference(a1);
    }
  }
  else
  {
    LODWORD(v12) = -1073741637;
    WdLogSingleEntry2(4LL, a1, -1073741637LL);
    WdLogGlobalForLineNumber = 8846;
  }
  v24 = 0LL;
  v14 = v23;
  WdLogSingleEntry3(2LL, a1, v23, (int)v12);
  WdLogGlobalForLineNumber = 3183;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
    (__int64)a1,
    v14,
    (int)v12,
    0LL,
    0LL);
  RemoteOutputDuplMgr = 0LL;
  if ( (int)v12 < 0 )
  {
    WdLogSingleEntry2(3LL, a1, (int)v12);
    result = (unsigned int)v12;
    WdLogGlobalForLineNumber = 75;
    return result;
  }
LABEL_17:
  v8 = 0;
  if ( !v9 )
  {
LABEL_26:
    v15 = 0;
    goto LABEL_19;
  }
  v15 = 1;
LABEL_19:
  if ( v15 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v9 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v9 + 38);
    v8 = 1;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v9, 0LL);
  if ( a1
    && v25 == v16
    && (DXGADAPTER::ReleaseReference(v24),
        DXGADAPTER::ReleaseReference(v9),
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL),
        v20 < 0) )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9 + 38);
      ExReleasePushLockSharedEx((char *)v9 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v9);
    }
    return (unsigned int)v20;
  }
  else if ( v23 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    v21 = v23;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 126;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v21, 0LL, 0LL, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9 + 38);
      ExReleasePushLockSharedEx((char *)v9 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v9);
    }
    return 3223192324LL;
  }
  else
  {
    v17 = v27(RemoteOutputDuplMgr, v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9 + 38);
      ExReleasePushLockSharedEx((char *)v9 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v9);
    }
    return v17;
  }
}

/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x14038F6C0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
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

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__usercall *)@<rax>(OUTPUTDUPL_MGR *__hidden this@<rcx>, const struct _DXGKARG_SETPOINTERPOSITION *@<rdx>, const struct _DXGKARG_SETPOINTERSHAPE *@<r8>, unsigned int@<r9d>, unsigned int), __int64, __int64, int, int))
{
  __int64 v10; // rbx
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rdi
  __int64 v14; // rax
  char v15; // r13
  __int64 v16; // r14
  __int64 v17; // rdi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r12
  char v19; // r14
  volatile signed __int32 *v20; // rbx
  int v21; // edi
  __int64 result; // rax
  __int64 v23; // rbx
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+70h] [rbp-90h]
  _BYTE v30[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v31; // [rsp+80h] [rbp-80h]
  char v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v35)(struct OUTPUTDUPL_MGR *, __int64 (__usercall *)@<rax>(OUTPUTDUPL_MGR *__hidden@<rcx>, const struct _DXGKARG_SETPOINTERPOSITION *@<rdx>, const struct _DXGKARG_SETPOINTERSHAPE *@<r8>, unsigned int@<r9d>, unsigned int), __int64, __int64, int, int); // [rsp+A0h] [rbp-60h]
  _BYTE v36[144]; // [rsp+B0h] [rbp-50h] BYREF

  v34 = a5;
  v33 = a6;
  v10 = a3;
  v35 = a9;
  v27 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)a1);
  v13 = 0LL;
  v29 = IsRemoteSessionUsingXddmMonitors;
  v28 = 0LL;
  if ( !a1 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v12) )
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
    if ( RemoteOutputDuplMgr )
    {
LABEL_40:
      v15 = 0;
LABEL_8:
      v19 = 0;
      v20 = (volatile signed __int32 *)v13;
      v31 = v13;
      v32 = 0;
      if ( v15 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
        v19 = v32;
        v20 = (volatile signed __int32 *)v31;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v13, 0LL);
      if ( !a1
        || v29
        || (DXGADAPTER::ReleaseReference(v28),
            DXGADAPTER::ReleaseReference(v13),
            v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL),
            v21 >= 0) )
      {
        if ( v27 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
        {
          v21 = v35(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, v34, v33, a7, a8);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
          if ( v19 )
          {
            _InterlockedDecrement(v20 + 38);
            ExReleasePushLockSharedEx(v20 + 34, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v20);
          }
          return (unsigned int)v21;
        }
        v23 = v27;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 126;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v23, 0LL, 0LL, 0LL, 0LL);
        v21 = -1071774972;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
      return (unsigned int)v21;
    }
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
  v14 = *((_QWORD *)a1 + 395);
  v15 = 1;
  v26[0] = 0LL;
  if ( v14 )
  {
    if ( (unsigned int)v10 >= *(_DWORD *)(v14 + 96) )
    {
      LODWORD(v16) = -1073741811;
      WdLogSingleEntry2(2LL, v10, -1073741811LL);
      WdLogGlobalForLineNumber = 8833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v10,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_5;
    }
    _InterlockedAdd64((volatile signed __int64 *)a1 + 3, 1uLL);
    if ( *((_QWORD *)a1 + 396) )
    {
      v26[0] = a1;
      _InterlockedAdd64((volatile signed __int64 *)a1 + 3, 1uLL);
      v26[1] = (DXGADAPTER *)-1LL;
LABEL_20:
      v13 = a1;
      v28 = v26[0];
      v26[0] = 0LL;
      if ( !v28 )
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
LABEL_7:
      if ( v13 )
        goto LABEL_8;
      goto LABEL_40;
    }
    if ( (*((_DWORD *)a1 + 111) & 0x100) != 0 )
    {
      IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, 0, v26);
      v16 = IndirectDisplayPairedAdapter;
      if ( IndirectDisplayPairedAdapter >= 0 )
        goto LABEL_20;
      WdLogSingleEntry2(2LL, a1, IndirectDisplayPairedAdapter);
      WdLogGlobalForLineNumber = 8875;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
        (__int64)a1,
        v16,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
      Global = DXGGLOBAL::GetGlobal();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v26, *((struct DXGADAPTER **)Global + 126));
      if ( v26[0] )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
        goto LABEL_20;
      }
      LODWORD(v16) = -1073741637;
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
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
    }
    if ( v26[0] )
      DXGADAPTER::ReleaseReference(v26[0]);
    v26[0] = 0LL;
    DXGADAPTER::ReleaseReference(a1);
    goto LABEL_5;
  }
  LODWORD(v16) = -1073741637;
  WdLogSingleEntry2(4LL, a1, -1073741637LL);
  WdLogGlobalForLineNumber = 8846;
LABEL_5:
  v28 = 0LL;
  v17 = v27;
  WdLogSingleEntry3(2LL, a1, v27, (int)v16);
  WdLogGlobalForLineNumber = 3183;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
    (__int64)a1,
    v17,
    (int)v16,
    0LL,
    0LL);
  RemoteOutputDuplMgr = 0LL;
  if ( (int)v16 >= 0 )
  {
    v13 = 0LL;
    goto LABEL_7;
  }
  WdLogSingleEntry2(3LL, a1, (int)v16);
  result = (unsigned int)v16;
  WdLogGlobalForLineNumber = 75;
  return result;
}

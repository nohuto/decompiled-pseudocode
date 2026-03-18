/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x14029DE64
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x14029DAB8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14029E110 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_RELEASE_FRAME *>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r15
  int IsRemoteSessionUsingXddmMonitors; // eax
  int v9; // r14d
  struct DXGADAPTER *v10; // rdi
  int OutputDuplManager; // eax
  unsigned int v12; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v14; // al
  int v15; // edi
  __int64 result; // rax
  struct OUTPUTDUPL_MGR *v17; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v18; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v19; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v21; // [rsp+70h] [rbp-90h]
  char v22; // [rsp+78h] [rbp-88h]
  unsigned __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v9 = IsRemoteSessionUsingXddmMonitors;
  v19 = 0LL;
  v10 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
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
    goto LABEL_11;
  }
  OutputDuplManager = FindOutputDuplManager(this, v6, &v19, &v24, &v18, &v23, &v17);
  v12 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    WdLogSingleEntry2(3LL, this, OutputDuplManager);
    result = v12;
    WdLogGlobalForLineNumber = 75;
    return result;
  }
  v10 = v18;
  RemoteOutputDuplMgr = v17;
  if ( !v18 )
  {
LABEL_11:
    v14 = 0;
    goto LABEL_6;
  }
  v14 = v9 + 1;
LABEL_6:
  v21 = v10;
  v22 = 0;
  if ( v14 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v10, 0LL);
  if ( !this
    || v9
    || (DXGADAPTER::ReleaseReference(v19),
        DXGADAPTER::ReleaseReference(v10),
        v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL),
        v15 >= 0) )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 126;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v6, 0LL, 0LL, 0LL, 0LL);
      v15 = -1071774972;
    }
    else
    {
      v15 = a5(RemoteOutputDuplMgr, a4);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  return (unsigned int)v15;
}

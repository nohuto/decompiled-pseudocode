/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1403F7494
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403F7470 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14029E110 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this)))
{
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v7; // rcx
  int v8; // r14d
  struct DXGADAPTER *v9; // rdi
  int OutputDuplManager; // eax
  unsigned int v11; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v13; // r8
  int v14; // edi
  __int64 result; // rax
  struct OUTPUTDUPL_MGR *v16; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v17; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[144]; // [rsp+90h] [rbp-70h] BYREF

  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v8 = IsRemoteSessionUsingXddmMonitors;
  v18 = 0LL;
  v9 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v7) )
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
  }
  else
  {
    OutputDuplManager = FindOutputDuplManager(this, 0, &v18, &v20, &v17, &v19, &v16);
    v11 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      WdLogSingleEntry2(3LL, this, OutputDuplManager);
      result = v11;
      WdLogGlobalForLineNumber = 75;
      return result;
    }
    v9 = v17;
    RemoteOutputDuplMgr = v16;
    if ( v17 )
    {
      v13 = v8 + 1;
      goto LABEL_6;
    }
  }
  v13 = 0;
LABEL_6:
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21, v9, v13);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v9, 0LL);
  if ( !this
    || v8
    || (DXGADAPTER::ReleaseReference(v18),
        DXGADAPTER::ReleaseReference(v9),
        v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL),
        v14 >= 0) )
  {
    if ( *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      v14 = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 126;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", 0LL, 0LL, 0LL, 0LL, 0LL);
      v14 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  return (unsigned int)v14;
}

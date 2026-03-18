/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1403EE1A4
 * Callers:
 *     DxgkDesktopSwitch @ 0x1403EE0E0 (DxgkDesktopSwitch.c)
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

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
        struct DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this, __int64 a2), _QWORD))
{
  __int64 v7; // r15
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v9; // rcx
  int v10; // r14d
  struct DXGADAPTER *v11; // rdi
  int OutputDuplManager; // eax
  unsigned int v13; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v15; // r8
  int v16; // edi
  __int64 result; // rax
  struct OUTPUTDUPL_MGR *v18; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v19; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v20; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v24[144]; // [rsp+90h] [rbp-70h] BYREF

  v7 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  v10 = IsRemoteSessionUsingXddmMonitors;
  v20 = 0LL;
  v11 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( !this || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v9) )
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
    OutputDuplManager = FindOutputDuplManager(this, v7, &v20, &v22, &v19, &v21, &v18);
    v13 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      WdLogSingleEntry2(3LL, this, OutputDuplManager);
      result = v13;
      WdLogGlobalForLineNumber = 75;
      return result;
    }
    v11 = v19;
    RemoteOutputDuplMgr = v18;
    if ( v19 )
    {
      v15 = v10 + 1;
      goto LABEL_6;
    }
  }
  v15 = 0;
LABEL_6:
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23, v11, v15);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v11, 0LL);
  if ( !this
    || v10
    || (DXGADAPTER::ReleaseReference(v20),
        DXGADAPTER::ReleaseReference(v11),
        v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL),
        v16 >= 0) )
  {
    if ( (unsigned int)v7 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 126;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v7, 0LL, 0LL, 0LL, 0LL);
      v16 = -1071774972;
    }
    else
    {
      v16 = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessDesktopSwitch, a5);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  return (unsigned int)v16;
}

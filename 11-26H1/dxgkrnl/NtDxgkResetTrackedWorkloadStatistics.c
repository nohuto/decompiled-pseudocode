/*
 * XREFs of NtDxgkResetTrackedWorkloadStatistics @ 0x14020C200
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140037E00 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x140209C88 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x14020A008 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x14020B0FC (-ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkResetTrackedWorkloadStatistics(struct DXGDEVICE *Src)
{
  unsigned int ULongFromUser; // eax
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rdi
  struct DXGDEVICE *v7; // rsi
  __int64 v8; // r9
  int v9; // eax
  struct DXGDEVICE *v10; // rdx
  struct DXGDEVICE *v11[2]; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v12[2]; // [rsp+60h] [rbp-D8h] BYREF
  DXGTRACKEDWORKLOAD *v13; // [rsp+68h] [rbp-D0h] BYREF
  DXGTRACKEDWORKLOAD *v14[2]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v15[160]; // [rsp+80h] [rbp-B8h] BYREF

  v11[0] = Src;
  *(_QWORD *)v12 = 0LL;
  ULongFromUser = RtlReadULongFromUser((unsigned int *)Src);
  if ( ULongFromUser >= 8 )
  {
    if ( ULongFromUser > 8 )
      ULongFromUser = 8;
    RtlCopyFromUser(v12, Src, ULongFromUser);
    v11[0] = 0LL;
    v13 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v14,
      v12[1],
      Current,
      &v13,
      v11);
    v5 = (struct _KTHREAD **)v13;
    if ( v13 )
    {
      v7 = v11[0];
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v11, v11[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, (__int64)v7, 0, v8, 0);
      v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v15, 0LL);
      v6 = v9;
      if ( v9 >= 0 )
      {
        LODWORD(v6) = DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(v5, v10);
      }
      else
      {
        WdLogSingleEntry2(2LL, v7, v9);
        WdLogGlobalForLineNumber = 848;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
          (__int64)v7,
          v6,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v15);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v11);
    }
    else
    {
      LODWORD(v6) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v14);
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 810;
    return 3221225485LL;
  }
}

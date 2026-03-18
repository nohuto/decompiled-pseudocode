/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x14020BF20
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
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x140209C88 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x14020A008 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x14020A5E4 (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x14020A728 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x14020B014 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(char *Src)
{
  unsigned int ULongFromUser; // eax
  struct _KTHREAD **Current; // rax
  DXGTRACKEDWORKLOAD *v5; // rsi
  __int64 v6; // rdi
  struct DXGDEVICE *v7; // r14
  __int64 v8; // r9
  int v9; // eax
  struct COREDEVICEACCESS *v10; // r8
  unsigned __int64 *v11; // rax
  struct DXGDEVICE *v12; // rdx
  struct DXGDEVICE *v13[2]; // [rsp+50h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v14[2]; // [rsp+60h] [rbp-338h] BYREF
  DXGTRACKEDWORKLOAD *v15; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v16[592]; // [rsp+80h] [rbp-318h] BYREF
  _BYTE v17[160]; // [rsp+2D0h] [rbp-C8h] BYREF

  v13[0] = (struct DXGDEVICE *)Src;
  memset(v16, 0, sizeof(v16));
  ULongFromUser = RtlReadULongFromUser((unsigned int *)Src);
  if ( ULongFromUser >= 0x250 )
  {
    if ( ULongFromUser > 0x250 )
      ULongFromUser = 592;
    RtlCopyFromUser(v16, Src, ULongFromUser);
    v13[0] = 0LL;
    v15 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v14,
      *(unsigned int *)&v16[4],
      Current,
      &v15,
      v13);
    v5 = v15;
    if ( v15 )
    {
      v7 = v13[0];
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v13, v13[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v7, 0, v8, 0);
      v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v17, 0LL);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v11 = (unsigned __int64 *)&v16[16];
        if ( *((_DWORD *)v5 + 21) )
          v11 = 0LL;
        LODWORD(v6) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v5, v7, v10, *(unsigned __int64 *)&v16[8], v11);
        if ( (int)v6 >= 0 )
        {
          LODWORD(v6) = DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
                          v5,
                          v12,
                          (struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)v16);
          if ( (int)v6 >= 0 )
          {
            DXGTRACKEDWORKLOAD::ReportStats(v5);
            RtlCopyToUser(Src + 536, &v16[536], 0x28uLL);
            RtlCopyToUser(Src + 576, &v16[576], 8uLL);
            RtlCopyToUser(Src + 584, &v16[584], 4uLL);
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v7, v9);
        WdLogGlobalForLineNumber = 744;
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
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v17);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v13);
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
    WdLogGlobalForLineNumber = 706;
    return 3221225485LL;
  }
}

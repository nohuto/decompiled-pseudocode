/*
 * XREFs of NtDxgkUpdateTrackedWorkload @ 0x14020C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x140209C88 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x14020A008 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x14020A728 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x14020B014 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x14020B2AC (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 */

__int64 __fastcall NtDxgkUpdateTrackedWorkload(char *Src)
{
  unsigned int ULongFromUser; // eax
  struct _KTHREAD **Current; // rax
  struct DXGTRACKEDWORKLOAD *v5; // rbx
  __int64 v6; // rdi
  struct DXGDEVICE *v7; // rsi
  __int64 v8; // r9
  int v9; // eax
  struct COREDEVICEACCESS *v10; // r8
  unsigned __int64 *v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // r15
  struct DXGDEVICE *v14; // rdx
  int v15; // eax
  struct DXGTRACKEDWORKLOAD *Srca; // [rsp+50h] [rbp-458h] BYREF
  int v17; // [rsp+58h] [rbp-450h]
  struct DXGDEVICE *v18[2]; // [rsp+60h] [rbp-448h] BYREF
  DXGTRACKEDWORKLOAD *v19[3]; // [rsp+70h] [rbp-438h] BYREF
  _BYTE v20[24]; // [rsp+88h] [rbp-420h] BYREF
  _OWORD v21[2]; // [rsp+A0h] [rbp-408h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-3E8h]
  __int64 v23; // [rsp+D0h] [rbp-3D8h]
  _BYTE v24[600]; // [rsp+E0h] [rbp-3C8h] BYREF
  _BYTE v25[160]; // [rsp+340h] [rbp-168h] BYREF
  _BYTE v26[160]; // [rsp+3E0h] [rbp-C8h] BYREF

  v19[2] = (DXGTRACKEDWORKLOAD *)Src;
  memset(v24, 0, sizeof(v24));
  ULongFromUser = RtlReadULongFromUser((unsigned int *)Src);
  if ( ULongFromUser < 0x258 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 568;
    return 3221225485LL;
  }
  if ( ULongFromUser > 0x258 )
    ULongFromUser = 600;
  RtlCopyFromUser(v24, Src, ULongFromUser);
  v18[0] = 0LL;
  Srca = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v19,
    *(unsigned int *)&v24[4],
    Current,
    &Srca,
    v18);
  v5 = Srca;
  if ( Srca )
  {
    v7 = v18[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v18,
      v18[0]);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v20,
      *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v7, 0, v8, 0);
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = (unsigned __int64 *)&v24[80];
      if ( *((_DWORD *)v5 + 21) )
        v11 = 0LL;
      LODWORD(v6) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v5, v7, v10, *(unsigned __int64 *)&v24[48], v11);
      if ( (int)v6 < 0 )
        goto LABEL_10;
      v13 = 0LL;
      if ( *((_DWORD *)v5 + 286) == 1 )
      {
        memset(v21, 0, sizeof(v21));
        v22 = 0LL;
        v23 = 0LL;
        LODWORD(v21[0]) = *((_DWORD *)v7 + 117);
        DWORD1(v21[0]) = 4;
        LODWORD(v6) = DxgkGetDeviceStateInternal(v21);
        if ( (int)v6 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 631;
          goto LABEL_10;
        }
        v13 = (unsigned int)(v22 + 1);
      }
      Srca = v7;
      v17 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v7, 0, v12, 0);
      if ( *((_DWORD *)v5 + 286) == 1
        && (DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&Srca),
            v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL),
            v6 = v15,
            v15 < 0) )
      {
        WdLogSingleEntry2(2LL, v7, v15);
        WdLogGlobalForLineNumber = 648;
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
      else
      {
        LODWORD(v6) = DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
                        v5,
                        v14,
                        (const struct _D3DKMT_UPDATETRACKEDWORKLOAD *)v24,
                        v13);
        if ( (int)v6 >= 0 )
        {
          DXGTRACKEDWORKLOAD::ReportStats(v5);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&Srca);
          LODWORD(Srca) = 1;
          RtlCopyToUser(Src + 592, &Srca, 4uLL);
          goto LABEL_10;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&Srca);
    }
    else
    {
      WdLogSingleEntry2(2LL, v7, v9);
      WdLogGlobalForLineNumber = 606;
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
LABEL_10:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v18);
    goto LABEL_7;
  }
  LODWORD(v6) = -1073741811;
LABEL_7:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v19);
  return (unsigned int)v6;
}

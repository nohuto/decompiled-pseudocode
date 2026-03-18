/*
 * XREFs of ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x14018D368
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x14040C5C8 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x140232200 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int64 a5)
{
  _BYTE *v9; // rbx
  int HostProcess; // eax
  int v12; // eax
  __int64 v13; // rdi
  PVOID P[2]; // [rsp+50h] [rbp-148h] BYREF
  int v15; // [rsp+60h] [rbp-138h]
  char v16; // [rsp+64h] [rbp-134h] BYREF

  v15 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x28u, 0LL, 0LL, 0LL);
  v9 = P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    v9[12] = 0;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_DWORD *)v9 + 2) = HostProcess;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 2) = 27LL;
    *((_DWORD *)v9 + 7) = *((_DWORD *)a3 + 7);
    *((_QWORD *)v9 + 4) = a5;
    *((_DWORD *)v9 + 6) = a4;
    v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(this, (struct DXGVMBUSMESSAGE *)P);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 10020;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSignalFenceNtSharedByRef failed: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v13;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v16 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}

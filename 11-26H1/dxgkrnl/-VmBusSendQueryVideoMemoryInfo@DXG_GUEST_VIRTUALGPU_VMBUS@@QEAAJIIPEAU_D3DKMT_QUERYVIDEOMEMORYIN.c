/*
 * XREFs of ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x14018CE88
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1402C0A40 (DxgkQueryVideoMemoryInfo.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a4)
{
  _DWORD *v8; // rcx
  int v10; // ebx
  unsigned int v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  char v14; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD v15[4]; // [rsp+160h] [rbp+60h] BYREF

  v13 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x28u, 0LL, 0LL, 0LL);
  v8 = P[0];
  if ( P[0] )
  {
    *((_BYTE *)P[0] + 12) = 0;
    v8[3] &= 0x1FFu;
    *(_QWORD *)v8 = 0LL;
    v8[2] = a2;
    *((_QWORD *)v8 + 2) = 21LL;
    v8[6] = a3;
    v8[7] = a4->MemorySegmentGroup;
    v8[8] = a4->PhysicalAdapterIndex;
    v11[0] = 32;
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v15, v11);
    if ( v10 < 0 || (v10 = -1073741823, v11[0] < 0x20) )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 12828;
    }
    else
    {
      v10 = 0;
      a4->Budget = v15[0];
      a4->AvailableForReservation = v15[3];
      a4->CurrentReservation = v15[2];
      a4->CurrentUsage = v15[1];
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v10;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v14 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}

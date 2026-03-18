/*
 * XREFs of ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x140284414
 * Callers:
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1403C2A34 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x14042BC04 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall BLTQUEUE::WaitFence(BLTQUEUE *this, __int64 a2, struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v3; // rdx
  int v4; // ebx
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v6; // [rsp+50h] [rbp-38h] BYREF
  __int64 v7; // [rsp+98h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (struct DXGPROCESS *)*((_QWORD *)a3 + 5);
  *(_OWORD *)&v6.hAsyncEvent = 0LL;
  v6.FenceValueArray = (const UINT64 *)&v7;
  v6.hDevice = *((_DWORD *)a3 + 117);
  v6.ObjectCount = 1;
  v6.ObjectHandleArray = (const D3DKMT_HANDLE *)((char *)this + 2936);
  v4 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4712LL),
         v3,
         *((_DWORD *)a3 + 118),
         &v6,
         1u);
  if ( v4 < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 621;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkWaitForSynchronizationObjectFromCpuInternal failed",
      621LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}

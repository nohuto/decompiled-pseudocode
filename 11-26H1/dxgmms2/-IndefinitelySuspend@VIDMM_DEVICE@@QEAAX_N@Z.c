/*
 * XREFs of ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1401026D8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x140102574 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x140042B5C (VidSchDeviceQueuesNotEmpty.c)
 *     VidMmSuspendDevice @ 0x14009A77C (VidMmSuspendDevice.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1401022D0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1401029EC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140102ABC (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::IndefinitelySuspend(__int64 **this, char a2)
{
  struct VIDMM_PROCESS *v4; // rcx
  unsigned __int8 v5; // di
  unsigned __int8 v6; // si
  _KEVENT *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // zf
  _QWORD *v13; // rax
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct VIDMM_PROCESS *)*this;
  if ( (*((_BYTE *)v4 + 41065) & 0x10) != 0 )
  {
    VidMmSuspendDevice(*(VIDMM_GLOBAL ***)v4, (struct VIDMM_PROCESS **)this, 4u);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      v4,
      (struct VIDMM_PROCESS *)this[1],
      (struct VIDMM_DEVICE *)this,
      0);
    v5 = 4;
    v6 = (_BYTE)this[39] & 7;
    if ( !v6 )
    {
      v7 = (_KEVENT *)this[4];
      if ( v7 )
        VidSchSuspendResumeDevice(v7, 1, 0, 0);
    }
    VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
    v8 = **this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8 + 184, 0LL);
    *(_QWORD *)(v8 + 192) = KeGetCurrentThread();
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
      (struct _KTHREAD **)*this + 5625);
    if ( a2 == 1 && (VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 16)) )
      v5 = 3;
    LOBYTE(v9) = v5;
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, v9);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    *(_QWORD *)(v8 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 184, 0LL);
    KeLeaveCriticalRegion();
    v12 = (*((_BYTE *)this + 58) & 4) == 0;
    *((_BYTE *)this + 56) = a2;
    if ( !v12 )
    {
      --*((_DWORD *)*this + 11286);
      *((_BYTE *)this + 58) &= ~4u;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10);
      v13[4] = v6;
      v13[5] = v5;
      v13[3] = this;
      v10 = (__int64)this[27];
      v13[6] = v10;
      WdLogGlobalForLineNumber = 1240;
    }
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v10, &EventVidMmSuspendDevice, v11, this[3], v5);
  }
}

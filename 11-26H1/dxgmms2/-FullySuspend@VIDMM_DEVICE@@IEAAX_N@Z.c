/*
 * XREFs of ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78
 * Callers:
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x140100468 (-Suspend@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x140042B5C (VidSchDeviceQueuesNotEmpty.c)
 *     VidMmSuspendDevice @ 0x14009A77C (VidMmSuspendDevice.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1401022D0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1401029EC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140102ABC (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140102B20 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

void __fastcall VIDMM_DEVICE::FullySuspend(__int64 **this, char a2)
{
  struct VIDMM_PROCESS *v4; // rcx
  unsigned __int8 v5; // si
  unsigned __int8 v6; // bp
  _KEVENT *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct VIDMM_PROCESS *)*this;
  if ( (*((_BYTE *)v4 + 41065) & 0x10) != 0 )
  {
    VidMmSuspendDevice(*(VIDMM_GLOBAL ***)v4, (struct VIDMM_PROCESS **)this, 3u);
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
    this[29] = (__int64 *)qword_14008A5A0;
    v8 = **this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8 + 184, 0LL);
    *(_QWORD *)(v8 + 192) = KeGetCurrentThread();
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v15,
      (struct _KTHREAD **)*this + 5625);
    if ( VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 16) )
      v5 = 3;
    LOBYTE(v9) = v5;
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, v9);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    *(_QWORD *)(v8 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( (*((_BYTE *)this + 58) & 4) != 0 )
    {
      --*((_DWORD *)*this + 11286);
      *((_BYTE *)this + 58) &= ~4u;
    }
    v12 = 0LL;
    if ( a2 )
    {
      v14 = qword_14008A590;
      v12 = VidMmiQuerySystemTime() + v14;
      this[27] = (__int64 *)v12;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10);
      v13[4] = v6;
      v10 = v5;
      v13[5] = v5;
      v13[3] = this;
      v13[6] = v12;
      WdLogGlobalForLineNumber = 1140;
    }
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v10, &EventVidMmSuspendDevice, v11, this[3], v5);
    if ( (*(_DWORD *)(this[3][5] + 408) & 4) != 0 )
      VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
        (VIDMM_COMMIT_TELEMETRY *)(**this + 216),
        (struct VIDMM_DEVICE *)this,
        1);
  }
}

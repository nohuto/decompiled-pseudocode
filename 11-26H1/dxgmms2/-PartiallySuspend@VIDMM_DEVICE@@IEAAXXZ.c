/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009A53C (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x140100468 (-Suspend@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 *     VidMmSuspendDevices @ 0x14010107C (VidMmSuspendDevices.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x14010131C (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     VidMmSuspendDevice @ 0x14009A77C (VidMmSuspendDevice.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140102508 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1401029EC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 */

void __fastcall VIDMM_DEVICE::PartiallySuspend(struct VIDMM_PROCESS **this)
{
  struct VIDMM_PROCESS *v2; // rcx
  _KEVENT *v3; // rcx
  unsigned __int8 v4; // si
  struct VIDMM_PROCESS *v5; // rbx
  __int64 SystemTime; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  int v12; // [rsp+20h] [rbp-18h]

  v2 = *this;
  if ( (*((_BYTE *)v2 + 41065) & 0x10) != 0 )
  {
    VidMmSuspendDevice(*(VIDMM_GLOBAL ***)v2, this, 1u);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(v2, this[1], (struct VIDMM_DEVICE *)this, 0);
    v3 = (_KEVENT *)this[4];
    v4 = (_BYTE)this[39] & 7;
    if ( v3 )
      VidSchSuspendResumeDevice(v3, 1, 0, 0);
    v5 = this[28];
    SystemTime = VidMmiQuerySystemTime();
    LOBYTE(v7) = 1;
    this[29] = (struct VIDMM_PROCESS *)((char *)v5 - SystemTime);
    VIDMM_DEVICE::MoveToPenaltyBoxBand(this, v7);
    v9 = *(_QWORD *)*this;
    v10 = *(_QWORD *)(v9 + 16);
    if ( v10 && (*(_BYTE *)(v10 + 312) & 7) != 0 )
      *((_BYTE *)this + 58) |= 0x10u;
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
      v9 = v4;
      v11[3] = this;
      v11[4] = v4;
      v11[5] = 1LL;
      WdLogGlobalForLineNumber = 1035;
    }
    if ( (byte_14008A203 & 4) != 0 )
    {
      v12 = 1;
      McTemplateK0pq_EtwWriteTransfer(v9, &EventVidMmSuspendDevice, v8, this[3], v12);
    }
  }
}

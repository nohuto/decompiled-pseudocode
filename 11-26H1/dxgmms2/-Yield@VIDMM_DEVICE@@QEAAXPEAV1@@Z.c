/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x14010216C
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14003F8FC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1401022D0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140102508 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  struct VIDMM_DEVICE *v2; // rbp
  unsigned __int8 v4; // si
  _KEVENT *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v12; // rax

  v2 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)this + 41065LL) & 0x10) == 0 )
  {
    v4 = *((_BYTE *)this + 312) & 7;
    *((_QWORD *)this + 30) = a2;
    if ( v4 != 2 )
    {
      if ( v4 )
      {
        if ( v4 == 1 )
          VIDMM_DEVICE::SuspendPagingQueues(this);
      }
      else
      {
        v5 = (_KEVENT *)*((_QWORD *)this + 4);
        if ( v5 )
          VidSchSuspendResumeDevice(v5, 1, 0, 0);
        VIDMM_DEVICE::SuspendPagingQueues(this);
        v6 = *((_QWORD *)this + 28);
        *((_QWORD *)this + 29) = v6 - VidMmiQuerySystemTime();
      }
      LOBYTE(a2) = 2;
      VIDMM_DEVICE::MoveToPenaltyBoxBand(this, a2);
      if ( (byte_14008A203 & 4) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v7, &EventVidMmSuspendDevice, v8, *((_QWORD *)this + 3), 2);
    }
    VIDMM_DEVICE::FaultAllAllocations(this);
    v11 = *((_QWORD *)v2 + 28);
    *((_QWORD *)this + 27) = v11;
    if ( g_IsInternalReleaseOrDbg )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
      v12[3] = this;
      v12[4] = *((_QWORD *)this + 30);
      v9 = v4;
      v12[5] = v4;
      v12[6] = 3LL;
      v12[7] = v11;
      WdLogGlobalForLineNumber = 2668;
    }
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0ppq_EtwWriteTransfer(
        v9,
        &EventVidMmYieldDevice,
        v10,
        *((_QWORD *)this + 3),
        *((_QWORD *)v2 + 3),
        v11 - *(_DWORD *)(*(_QWORD *)this + 4568LL));
  }
}

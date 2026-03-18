/*
 * XREFs of VidMmSuspendDevice @ 0x14009A77C
 * Callers:
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78 (-FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1401026D8 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?VidMmAddToSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400B9040 (-VidMmAddToSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1401022D0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1401029EC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140102B20 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x14011A5B4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmSuspendDevice(VIDMM_GLOBAL **a1, struct VIDMM_PROCESS **a2, unsigned __int8 a3)
{
  __int64 v4; // rbp
  VIDMM_GLOBAL *v5; // rcx
  struct VIDMM_PROCESS *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  struct VIDMM_TASK *v11; // r8
  struct VIDMM_SCHCLASS *v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-38h]
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a3;
  v5 = *a1;
  if ( (*((_BYTE *)v5 + 41065) & 0x10) == 0 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(v5, a2[1], (struct VIDMM_DEVICE *)a2, 0);
  if ( ((_BYTE)a2[39] & 7) == 0 )
  {
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)a2);
    if ( (unsigned __int8)v4 >= 3u )
      VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)a2);
    v7 = 0LL;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)*a1 + 5625);
    LOBYTE(v8) = v4;
    VidMmAddToSuspendList(a1, a2, v8);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    if ( (_BYTE)v4 == 1 )
    {
      v11 = (struct VIDMM_TASK *)(a2 + 40);
      v12 = (struct VIDMM_SCHCLASS *)(a1 + 684);
    }
    else
    {
      if ( (_BYTE)v4 != 3 )
      {
LABEL_12:
        if ( g_IsInternalReleaseOrDbg )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdTrace();
          v14[3] = a2;
          v14[4] = 0LL;
          v14[5] = v4;
          v14[6] = v7;
          WdLogGlobalForLineNumber = 922;
        }
        if ( (byte_14008A203 & 4) != 0 )
        {
          LODWORD(v15) = v4;
          McTemplateK0pq_EtwWriteTransfer(v9, &EventVidMmSuspendDevice, v10, a2[3], v15);
        }
        if ( (*(_DWORD *)(*((_QWORD *)a2[3] + 5) + 408LL) & 4) != 0 )
          VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
            (VIDMM_COMMIT_TELEMETRY *)(a1 + 27),
            (struct VIDMM_DEVICE *)a2,
            1);
        return;
      }
      v13 = qword_14008A590;
      v7 = (struct VIDMM_PROCESS *)(VidMmiQuerySystemTime() + v13);
      v11 = (struct VIDMM_TASK *)(a1 + 719);
      a2[27] = v7;
      v12 = (struct VIDMM_SCHCLASS *)(a1 + 679);
    }
    VidMmNotifyTaskWork((struct VIDMM_WORKER_THREAD2 *)a1, v12, v11, 1u);
    goto LABEL_12;
  }
}

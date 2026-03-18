/*
 * XREFs of ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x140101B04
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401017C4 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmResumePagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x140101BB4 (-VidMmResumePagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::ResumePagingQueues(VIDMM_DEVICE *this)
{
  VIDMM_DEVICE *v2; // rsi
  struct VIDMM_PAGING_QUEUE *v3; // rdx

  if ( *((_BYTE *)this + 57) == 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
    *((_QWORD *)this + 15) = KeGetCurrentThread();
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 57) = 0;
    while ( v2 != (VIDMM_DEVICE *)((char *)this + 96) )
    {
      v3 = (VIDMM_DEVICE *)((char *)v2 - 48);
      v2 = *(VIDMM_DEVICE **)v2;
      VidMmResumePagingQueue(**(struct VIDMM_WORKER_THREAD ***)this, v3);
    }
    *((_QWORD *)this + 15) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
    KeLeaveCriticalRegion();
  }
}

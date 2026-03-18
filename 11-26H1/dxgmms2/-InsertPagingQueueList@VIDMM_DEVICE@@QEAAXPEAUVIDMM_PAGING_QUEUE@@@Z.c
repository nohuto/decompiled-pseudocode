/*
 * XREFs of ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400994CC
 * Callers:
 *     ?VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400CA588 (-VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x140101C80 (-VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_Q.c)
 */

void __fastcall VIDMM_DEVICE::InsertPagingQueueList(VIDMM_DEVICE *this, struct VIDMM_PAGING_QUEUE *a2)
{
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE **v5; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
  *((_QWORD *)this + 15) = KeGetCurrentThread();
  v4 = (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 48);
  v5 = (VIDMM_DEVICE **)*((_QWORD *)this + 13);
  if ( *v5 != (VIDMM_DEVICE *)((char *)this + 96) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)this + 96;
  *((_QWORD *)a2 + 7) = v5;
  *v5 = v4;
  *((_QWORD *)this + 13) = v4;
  if ( *((_BYTE *)this + 57) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v6,
      (struct DXGPUSHLOCKFAST *)(**(_QWORD **)this + 184LL),
      1);
    VidMmSetPagingQueueStatus(**(_QWORD **)this, a2, 2LL);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v6);
  }
  *((_QWORD *)this + 15) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
  KeLeaveCriticalRegion();
}

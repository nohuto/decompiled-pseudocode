/*
 * XREFs of ?VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x14011BA10
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmRewindPagingQueuePacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3)
{
  char *v4; // rsi
  char *v6; // rbx
  __int64 v7; // rax

  v4 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  v6 = (char *)a2 + 32;
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v7 = *(_QWORD *)v6;
  if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
    __fastfail(3u);
  *(_QWORD *)a3 = v7;
  *((_QWORD *)a3 + 1) = v6;
  *(_QWORD *)(v7 + 8) = a3;
  *(_QWORD *)v6 = a3;
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}

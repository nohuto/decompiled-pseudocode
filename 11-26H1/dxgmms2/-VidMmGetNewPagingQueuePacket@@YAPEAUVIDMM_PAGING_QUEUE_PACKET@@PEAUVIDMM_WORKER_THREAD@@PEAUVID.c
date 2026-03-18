/*
 * XREFs of ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E4BE4
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400E49FC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

struct VIDMM_PAGING_QUEUE_PACKET *__fastcall VidMmGetNewPagingQueuePacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2)
{
  char *v3; // rsi
  struct VIDMM_PAGING_QUEUE_PACKET *v4; // rdi
  __int64 v5; // rbp
  struct VIDMM_PAGING_QUEUE_PACKET *v6; // rbx
  __int64 v7; // rax
  struct VIDMM_PAGING_QUEUE_PACKET *result; // rax

  v3 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v4 = (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = *((_QWORD *)a2 + 9);
  *((_QWORD *)a2 + 9) = v5 + 1;
  v6 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)a2 + 2);
  if ( *((struct VIDMM_PAGING_QUEUE_PACKET **)v6 + 1) != v4
    || (v7 = *(_QWORD *)v6, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v6 + 8LL) != v6) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = v7;
  *(_QWORD *)(v7 + 8) = v4;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 != v4 )
  {
    memset(v6, 0, 0xA0uLL);
LABEL_5:
    *((_QWORD *)v6 + 5) = v5;
    return v6;
  }
  result = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(160LL, 0x38346956u, 256LL);
  v6 = result;
  if ( result )
    goto LABEL_5;
  return result;
}

/*
 * XREFs of EtwpCompressionDpc @ 0x1405306E0
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140219094 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140219160 (EtwpSwitchBuffer.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 170) + 704LL) + 8LL * *a2),
    1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 342), DelayedWorkQueue);
}

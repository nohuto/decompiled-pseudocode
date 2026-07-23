/*
 * XREFs of EtwpCompressionDpc @ 0x140532BE0
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1402191F4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 170) + 704LL) + 8LL * *a2),
    1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 342), DelayedWorkQueue);
}

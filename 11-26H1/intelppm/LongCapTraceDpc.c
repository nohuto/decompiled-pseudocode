/*
 * XREFs of LongCapTraceDpc @ 0x14000B5E0
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x140004750 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(
        struct _KDPC *Dpc,
        PVOID *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(
    DeferredContext,
    (__int64)(DeferredContext + 116),
    (__int64)&PPM_ETW_LONG_CAP_INFO,
    (__int64)&PPM_ETW_LONG_CAP_INFO_HV);
}

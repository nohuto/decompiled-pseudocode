/*
 * XREFs of CpcNativeInterruptDpc @ 0x1400063D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcNativeInterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  IoQueueWorkItem(
    *(PIO_WORKITEM *)(DeferredContext[31] + 1320LL),
    CpcNativeInterruptWorker,
    CriticalWorkQueue,
    DeferredContext);
}

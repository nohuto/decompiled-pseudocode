/*
 * XREFs of NvmeAdapterFabricControllerQuiesceTimerDpcRoutine @ 0x1400E8500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterFabricControllerQuiesceTimerDpcRoutine(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
}

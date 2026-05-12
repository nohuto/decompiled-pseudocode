/*
 * XREFs of NvmeInvokeCompletionDpcRoutineAtDispatchLevel @ 0x14011FF64
 * Callers:
 *     ProcessNVMeCompletionQueues @ 0x140122CC0 (ProcessNVMeCompletionQueues.c)
 * Callees:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 */

void __fastcall NvmeInvokeCompletionDpcRoutineAtDispatchLevel(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        volatile signed __int32 *SystemArgument1,
        _QWORD **SystemArgument2)
{
  KIRQL v8; // bl

  v8 = KfRaiseIrql(2u);
  NvmeCompletionDpcRoutine(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
  KeLowerIrql(v8);
}

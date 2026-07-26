/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1400CDC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&dword_14011F228, 1, 0) )
    ExQueueWorkItem(&stru_14011E930, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}

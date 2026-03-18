/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x140501480
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PpmHeteroHgsUpdateDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140FC01F0.1144, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x10);
}

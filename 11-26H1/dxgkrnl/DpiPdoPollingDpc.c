/*
 * XREFs of DpiPdoPollingDpc @ 0x140094E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoPollingDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_140169058, 1) )
    IoQueueWorkItem(qword_140169050, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}

/*
 * XREFs of KeInitializeSemaphore @ 0x1404AF2D0
 * Callers:
 *     PopFxInitializeWorkPool @ 0x1407D0630 (PopFxInitializeWorkPool.c)
 *     AlpcpInitializePort @ 0x1408F08D0 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140A9F7D0 (NtCreateSemaphore.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Limit = Limit;
}

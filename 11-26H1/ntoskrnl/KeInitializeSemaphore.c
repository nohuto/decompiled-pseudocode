/*
 * XREFs of KeInitializeSemaphore @ 0x1404B5E80
 * Callers:
 *     PopFxInitializeWorkPool @ 0x1407CD590 (PopFxInitializeWorkPool.c)
 *     AlpcpInitializePort @ 0x1408EA310 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140A9F4A0 (NtCreateSemaphore.c)
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

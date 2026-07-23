/*
 * XREFs of RtlpAbFreeKernelEntry @ 0x180015690
 * Callers:
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180015B00 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

NTSTATUS __fastcall RtlpAbFreeKernelEntry(__int64 a1)
{
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  ThreadInformation[1] = 0LL;
  ThreadInformation[0] = (signed __int64)(a1 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
  return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
}

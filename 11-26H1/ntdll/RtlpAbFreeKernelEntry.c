/*
 * XREFs of RtlpAbFreeKernelEntry @ 0x18002A590
 * Callers:
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18002AA00 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlpAbFreeKernelEntry(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 0LL;
  v2[0] = (signed __int64)(a1 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))NtSetInformationThread)(-2LL, 56LL, v2, 16LL);
}

/*
 * XREFs of ZwFreeVirtualMemory @ 0x1407237B0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1404DDA94 (SepRmDispatchDataToLsa.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14061BC88 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14061C228 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14061C6E0 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x14061CBCC (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x1406A6CB0 (DifZwFreeVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C1C10 (VmpUpdateCommitStateMemoryRange.c)
 *     RtlpDestroyHeapSegment @ 0x14077C458 (RtlpDestroyHeapSegment.c)
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     EtwpFreeUserBufferSpace @ 0x14082FF88 (EtwpFreeUserBufferSpace.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspDeleteUserStack @ 0x14095EE54 (PspDeleteUserStack.c)
 *     PspSetupUserStack @ 0x1409EA234 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1409EA3A8 (RtlCreateUserStack.c)
 *     sub_1409F0198 @ 0x1409F0198 (sub_1409F0198.c)
 *     RtlpWow64CreateUserStack @ 0x140AB853C (RtlpWow64CreateUserStack.c)
 *     ExRaiseHardError @ 0x140B06D30 (ExRaiseHardError.c)
 *     RtlDestroyHeap @ 0x140B3BB10 (RtlDestroyHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B6DC5C (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}

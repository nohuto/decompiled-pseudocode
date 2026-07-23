/*
 * XREFs of ZwFreeVirtualMemory @ 0x14069B500
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1403D831C (SepRmDispatchDataToLsa.c)
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1405DFC90 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405E0230 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405E06E0 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405E0C00 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x140634520 (DifZwFreeVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14063F600 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     RtlpDestroyHeapSegment @ 0x140774488 (RtlpDestroyHeapSegment.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140785D9C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1407A2328 (EtwpFreeUserBufferSpace.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     sub_1409E1778 @ 0x1409E1778 (sub_1409E1778.c)
 *     PspSetupUserStack @ 0x1409EB438 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1409EB5AC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A144C8 (RtlpWow64CreateUserStack.c)
 *     ExRaiseHardError @ 0x140A4BC70 (ExRaiseHardError.c)
 *     PspDeleteUserStack @ 0x140A5F668 (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x140A8C040 (RtlDestroyHeap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

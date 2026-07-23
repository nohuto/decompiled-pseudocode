/*
 * XREFs of ZwFreeVirtualMemory @ 0x140728380
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1404D7174 (SepRmDispatchDataToLsa.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x14061FC1C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     DifZwFreeVirtualMemoryWrapper @ 0x1406AA890 (DifZwFreeVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C57F0 (VmpUpdateCommitStateMemoryRange.c)
 *     RtlpDestroyHeapSegment @ 0x14077EF4C (RtlpDestroyHeapSegment.c)
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     EtwpFreeUserBufferSpace @ 0x1408361C8 (EtwpFreeUserBufferSpace.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PspSetupUserStack @ 0x1409E6A04 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1409E6B78 (RtlCreateUserStack.c)
 *     sub_1409EC968 @ 0x1409EC968 (sub_1409EC968.c)
 *     PspDeleteUserStack @ 0x140A04714 (PspDeleteUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140AB9B7C (RtlpWow64CreateUserStack.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     RtlDestroyHeap @ 0x140B3DD90 (RtlDestroyHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B7102C (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

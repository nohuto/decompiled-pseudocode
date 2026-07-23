/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14069B440
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14048411C (PspWow64ThunkProcessParameters.c)
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     RtlpStdExtendLowerWatermark @ 0x1405DC3A4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405DC48C (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x1405E0230 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405E0484 (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405E0C00 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x1405E0CE0 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1405F9260 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x14062F8D0 (DifZwAllocateVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14063F600 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140785D9C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14078F410 (VmCreateMemoryProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14083C23C (PspSetupUserProcessAddressSpace.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408B9D1C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     EtwpFindUserBufferSpace @ 0x140991174 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1409EB5AC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A144C8 (RtlpWow64CreateUserStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140A15118 (PspReserveAndCommitUserShadowStack.c)
 *     MiCheckForUserStackOverflow @ 0x140A296B4 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x140A299E0 (MiCheckShadowStackOverflow.c)
 *     PspSetupReservedUserMappings @ 0x140A4428C (PspSetupReservedUserMappings.c)
 *     ExRaiseHardError @ 0x140A4BC70 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1407282C0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1404B85BC (PspWow64ThunkProcessParameters.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     RtlpStdExtendLowerWatermark @ 0x14061BEA4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x14061BF8C (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x14061FC1C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x14061FCFC (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x14063BB70 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x14069DAD0 (DifZwAllocateVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C57F0 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x14094CB6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     RtlCreateUserStack @ 0x1409E6B78 (RtlCreateUserStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409EE630 (PspReserveAndCommitUserShadowStack.c)
 *     EtwpFindUserBufferSpace @ 0x140A14940 (EtwpFindUserBufferSpace.c)
 *     MiCheckForUserStackOverflow @ 0x140AA4214 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x140AA45B0 (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x140AB9B7C (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x140ADB07C (PspSetupReservedUserMappings.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     VmCreateMemoryProcess @ 0x140B518E0 (VmCreateMemoryProcess.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B7102C (SepAdtCopyToLsaSharedMemory.c)
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

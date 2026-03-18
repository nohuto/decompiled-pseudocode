/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1407236F0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1404BED6C (PspWow64ThunkProcessParameters.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     RtlpStdExtendLowerWatermark @ 0x140618E54 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140618F3C (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendHeap @ 0x14061C228 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14061C484 (RtlpFindAndCommitPages.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x14061CBCC (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpInitializeHeapSegment @ 0x14061CCAC (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x140638B60 (RtlpHpFixedHeapCommitRoutine.c)
 *     DifZwAllocateVirtualMemoryWrapper @ 0x140699EF0 (DifZwAllocateVirtualMemoryWrapper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C1C10 (VmpUpdateCommitStateMemoryRange.c)
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     RtlCreateUserStack @ 0x1409EA3A8 (RtlCreateUserStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409F1E60 (PspReserveAndCommitUserShadowStack.c)
 *     EtwpFindUserBufferSpace @ 0x140A1574C (EtwpFindUserBufferSpace.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x140A83A6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x140AA2744 (MiCheckForUserStackOverflow.c)
 *     MiCheckShadowStackOverflow @ 0x140AA2AE0 (MiCheckShadowStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x140AB853C (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x140ADE30C (PspSetupReservedUserMappings.c)
 *     ExRaiseHardError @ 0x140B06D30 (ExRaiseHardError.c)
 *     VmCreateMemoryProcess @ 0x140B4F050 (VmCreateMemoryProcess.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B6DC5C (SepAdtCopyToLsaSharedMemory.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress);
}

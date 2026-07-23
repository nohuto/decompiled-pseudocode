/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18015F140
 * Callers:
 *     RtlAllocateHandle @ 0x1800018E0 (RtlAllocateHandle.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     EtwpAllocateFreeBuffers @ 0x18005DEF4 (EtwpAllocateFreeBuffers.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     EtwpInitializeCompression @ 0x1800647F0 (EtwpInitializeCompression.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800678D4 (EtwpAllocateTraceBufferPool.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpInitializeHeapSegment @ 0x18006A718 (RtlpInitializeHeapSegment.c)
 *     RtlpStdExtendUpperWatermark @ 0x18006AB6C (RtlpStdExtendUpperWatermark.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18006CC20 (RtlpCreateLowFragHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18006D468 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180075000 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180075B50 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x180076560 (RtlQueryProcessBackTraceInformation.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009554C (RtlpExtendLowFragHeapSegment.c)
 *     RtlStdInitializeStackDatabase @ 0x180096440 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryZone @ 0x1800969C0 (RtlCreateMemoryZone.c)
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 *     PssNtCaptureSnapshot @ 0x1800B2290 (PssNtCaptureSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800B376C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800B3D74 (PsspCaptureVaSpaceInformation.c)
 *     RtlpWalkCallbackRoutine @ 0x1800BAC60 (RtlpWalkCallbackRoutine.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800BB000 (RtlpCommitQueryDebugInfo.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CB848 (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800D301C (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E8A40 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800EB550 (RtlExtendMemoryZone.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FBBAC (RtlpStdExtendLowerWatermark.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateUserStack @ 0x18010FC60 (RtlCreateUserStack.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     RtlResetStackOverflow @ 0x18013AD18 (RtlResetStackOverflow.c)
 *     RtlpAllocateTags @ 0x1801445C8 (RtlpAllocateTags.c)
 *     RtlpTraceDatabaseAllocate @ 0x18014A09C (RtlpTraceDatabaseAllocate.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159A3C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180159FD8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

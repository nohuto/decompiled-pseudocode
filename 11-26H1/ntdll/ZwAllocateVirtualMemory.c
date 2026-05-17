/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18015F240
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1800127C4 (EtwpAllocateFreeBuffers.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180015508 (RtlpValidateHeapHeaders.c)
 *     RtlpExtendHeap @ 0x180022EF0 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     RtlAllocateHandle @ 0x180037C10 (RtlAllocateHandle.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180072098 (RtlpExtendLowFragHeapSegment.c)
 *     RtlStdInitializeStackDatabase @ 0x180075850 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryZone @ 0x180075DC0 (RtlCreateMemoryZone.c)
 *     EtwpInitializeCompression @ 0x180075FD0 (EtwpInitializeCompression.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800790B4 (EtwpAllocateTraceBufferPool.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpInitializeHeapSegment @ 0x18007BEF8 (RtlpInitializeHeapSegment.c)
 *     RtlpStdExtendUpperWatermark @ 0x18007C34C (RtlpStdExtendUpperWatermark.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18007EE98 (RtlpCreateLowFragHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18007F11C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800902A0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800917B0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlpCommitQueryDebugInfo @ 0x180092020 (RtlpCommitQueryDebugInfo.c)
 *     RtlpWalkCallbackRoutine @ 0x1800921A0 (RtlpWalkCallbackRoutine.c)
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 *     PssNtCaptureSnapshot @ 0x1800B4D70 (PssNtCaptureSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800B624C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800B6854 (PsspCaptureVaSpaceInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CE0D8 (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800D605C (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E9830 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800EC380 (RtlExtendMemoryZone.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FC45C (RtlpStdExtendLowerWatermark.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateUserStack @ 0x1801100D0 (RtlCreateUserStack.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     RtlResetStackOverflow @ 0x18013AFA8 (RtlResetStackOverflow.c)
 *     RtlpAllocateTags @ 0x180144718 (RtlpAllocateTags.c)
 *     RtlpTraceDatabaseAllocate @ 0x18014A1EC (RtlpTraceDatabaseAllocate.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159B6C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18015A108 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwAllocateVirtualMemory()
{
  __int64 result; // rax

  result = 24LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

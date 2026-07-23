/*
 * XREFs of ZwFreeVirtualMemory @ 0x18015F200
 * Callers:
 *     RtlpDecommitBlock @ 0x180002230 (RtlpDecommitBlock.c)
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800678D4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1800682E0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18006DDDC (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpFreeVA @ 0x18006EE10 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrAlloc @ 0x18006F7E8 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpEnvFreeVA @ 0x180070900 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x180070970 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdInitializeStackDatabase @ 0x180096440 (RtlStdInitializeStackDatabase.c)
 *     PsspFreeLinkedHandleList @ 0x1800B2168 (PsspFreeLinkedHandleList.c)
 *     PssNtFreeSnapshot @ 0x1800B2AB0 (PssNtFreeSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800B376C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800B3D74 (PsspCaptureVaSpaceInformation.c)
 *     GetShipAssertBuffer @ 0x1800D301C (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 *     RtlpInitParameterBlock @ 0x1800E8844 (RtlpInitParameterBlock.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E8A40 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800EB550 (RtlExtendMemoryZone.c)
 *     RtlFreeUserStack @ 0x1800FEF30 (RtlFreeUserStack.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     RtlDestroyHandleTable @ 0x18010D280 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x18010D84C (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x18010DF90 (LdrCreateEnclave.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F160 (PssNtFreeRemoteSnapshot.c)
 *     RtlCreateUserStack @ 0x18010FC60 (RtlCreateUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180112690 (RtlDestroyMemoryZone.c)
 *     RtlStdDeleteStackDatabase @ 0x180120440 (RtlStdDeleteStackDatabase.c)
 *     WerpFreeSid @ 0x1801223C0 (WerpFreeSid.c)
 *     LdrDeleteEnclave @ 0x180126340 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x18013AB70 (WerReportExceptionWorker.c)
 *     RtlpTraceDatabaseFree @ 0x18014A0E8 (RtlpTraceDatabaseFree.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159A3C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180159FD8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

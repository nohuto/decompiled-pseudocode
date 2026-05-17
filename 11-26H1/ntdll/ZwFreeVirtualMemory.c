/*
 * XREFs of ZwFreeVirtualMemory @ 0x18015F300
 * Callers:
 *     RtlpDecommitBlock @ 0x180017150 (RtlpDecommitBlock.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlStdInitializeStackDatabase @ 0x180075850 (RtlStdInitializeStackDatabase.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800790B4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180079AC0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     RtlpHpLargeReAlloc @ 0x180089604 (RtlpHpLargeReAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18008A9A4 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpFreeVA @ 0x18008B9D0 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrAlloc @ 0x18008C3AC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpEnvFreeVA @ 0x18008CFA0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x18008D010 (RtlpHpVaMgrRangeFree.c)
 *     PsspFreeLinkedHandleList @ 0x1800B4C48 (PsspFreeLinkedHandleList.c)
 *     PssNtFreeSnapshot @ 0x1800B5590 (PssNtFreeSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800B624C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800B6854 (PsspCaptureVaSpaceInformation.c)
 *     GetShipAssertBuffer @ 0x1800D605C (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 *     RtlpInitParameterBlock @ 0x1800E9634 (RtlpInitParameterBlock.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E9830 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800EC380 (RtlExtendMemoryZone.c)
 *     RtlFreeUserStack @ 0x1800FF7E0 (RtlFreeUserStack.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     RtlDestroyHandleTable @ 0x18010D730 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x18010DCFC (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x18010E440 (LdrCreateEnclave.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F5D0 (PssNtFreeRemoteSnapshot.c)
 *     RtlCreateUserStack @ 0x1801100D0 (RtlCreateUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180112BE0 (RtlDestroyMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x180120690 (RtlStdDeleteStackDatabase.c)
 *     WerpFreeSid @ 0x180122620 (WerpFreeSid.c)
 *     LdrDeleteEnclave @ 0x1801265D0 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x18013AE00 (WerReportExceptionWorker.c)
 *     RtlpTraceDatabaseFree @ 0x18014A238 (RtlpTraceDatabaseFree.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159B6C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18015A108 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwFreeVirtualMemory()
{
  __int64 result; // rax

  result = 30LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

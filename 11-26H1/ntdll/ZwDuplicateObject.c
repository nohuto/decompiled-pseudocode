/*
 * XREFs of ZwDuplicateObject @ 0x18015F5C0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     TppIsWorkerThread @ 0x18007DF00 (TppIsWorkerThread.c)
 *     RtlReportSilentProcessExit @ 0x18007EAA0 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionHelper @ 0x18007F3E0 (RtlReportExceptionHelper.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     PsspWalkHandleTable @ 0x1800B3A60 (PsspWalkHandleTable.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D57A0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800E5AEC (TppPoolUpdateTrimmedWorker.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800F8C38 (RtlpWow64OpenThreadProcess.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F160 (PssNtFreeRemoteSnapshot.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138848 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138A38 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159A3C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180159FD8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  NTSTATUS result; // eax

  result = 60;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

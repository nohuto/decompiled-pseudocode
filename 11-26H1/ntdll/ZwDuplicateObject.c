/*
 * XREFs of ZwDuplicateObject @ 0x18015F6C0
 * Callers:
 *     TppIsWorkerThread @ 0x180086B60 (TppIsWorkerThread.c)
 *     RtlReportSilentProcessExit @ 0x180087720 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionHelper @ 0x180088060 (RtlReportExceptionHelper.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     PsspWalkHandleTable @ 0x1800B6540 (PsspWalkHandleTable.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D87E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800E708C (TppPoolUpdateTrimmedWorker.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800F94C8 (RtlpWow64OpenThreadProcess.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F5D0 (PssNtFreeRemoteSnapshot.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138AD8 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138CC8 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180159B6C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18015A108 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwDuplicateObject()
{
  __int64 result; // rax

  result = 60LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

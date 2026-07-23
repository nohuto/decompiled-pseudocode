/*
 * XREFs of ZwQueryInformationThread @ 0x18015F2E0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x18007DF00 (TppIsWorkerThread.c)
 *     WerpThreadId @ 0x18007FB80 (WerpThreadId.c)
 *     LdrpDetectDetour @ 0x180084FB0 (LdrpDetectDetour.c)
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 *     PsspDumpThread @ 0x1800B1008 (PsspDumpThread.c)
 *     PssNtCaptureSnapshot @ 0x1800B2290 (PssNtCaptureSnapshot.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x1800CAD50 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x1800E4590 (RtlCheckHeldCriticalSections.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800F8C38 (RtlpWow64OpenThreadProcess.c)
 *     PsspDumpObject_Thread @ 0x180101C10 (PsspDumpObject_Thread.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x180104F80 (DbgUiConvertStateChangeStructureWorker.c)
 *     RtlSetThreadIsCritical @ 0x18010B630 (RtlSetThreadIsCritical.c)
 *     RtlpHpEnvThreadSuspend @ 0x18010BF40 (RtlpHpEnvThreadSuspend.c)
 *     PsspSampleCounters @ 0x18010DE00 (PsspSampleCounters.c)
 *     LdrpDoDebuggerBreak @ 0x180122418 (LdrpDoDebuggerBreak.c)
 *     RtlWow64GetThreadContext @ 0x1801383B0 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1801383E0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138848 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138A38 (RtlpWow64SuspendProcess.c)
 *     RtlQueryThreadProfiling @ 0x180138F30 (RtlQueryThreadProfiling.c)
 *     RtlSetProcessDebugInformation @ 0x18013A090 (RtlSetProcessDebugInformation.c)
 *     RtlpRcuCurrentThreadData @ 0x1801499CC (RtlpRcuCurrentThreadData.c)
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

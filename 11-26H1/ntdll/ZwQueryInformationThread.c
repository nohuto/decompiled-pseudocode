/*
 * XREFs of ZwQueryInformationThread @ 0x18015F3E0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpDetectDetour @ 0x180064B60 (LdrpDetectDetour.c)
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x180086B60 (TppIsWorkerThread.c)
 *     WerpThreadId @ 0x180088800 (WerpThreadId.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 *     PsspDumpThread @ 0x1800B3AE8 (PsspDumpThread.c)
 *     PssNtCaptureSnapshot @ 0x1800B4D70 (PssNtCaptureSnapshot.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x1800CD5E0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x1800E6380 (RtlCheckHeldCriticalSections.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800F94C8 (RtlpWow64OpenThreadProcess.c)
 *     PsspDumpObject_Thread @ 0x1801024C0 (PsspDumpObject_Thread.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x180105730 (DbgUiConvertStateChangeStructureWorker.c)
 *     RtlSetThreadIsCritical @ 0x18010BAE0 (RtlSetThreadIsCritical.c)
 *     RtlpHpEnvThreadSuspend @ 0x18010C3F0 (RtlpHpEnvThreadSuspend.c)
 *     PsspSampleCounters @ 0x18010E2B0 (PsspSampleCounters.c)
 *     LdrpDoDebuggerBreak @ 0x180122678 (LdrpDoDebuggerBreak.c)
 *     RtlWow64GetThreadContext @ 0x180138640 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x180138670 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138AD8 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138CC8 (RtlpWow64SuspendProcess.c)
 *     RtlQueryThreadProfiling @ 0x1801391C0 (RtlQueryThreadProfiling.c)
 *     RtlSetProcessDebugInformation @ 0x18013A320 (RtlSetProcessDebugInformation.c)
 *     RtlpRcuCurrentThreadData @ 0x180149B1C (RtlpRcuCurrentThreadData.c)
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationThread()
{
  __int64 result; // rax

  result = 37LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

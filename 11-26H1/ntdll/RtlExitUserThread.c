/*
 * XREFs of RtlExitUserThread @ 0x18007DD10
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x18007DC90 (RtlUserFiberStart.c)
 *     RtlUserThreadStart @ 0x18007DCC0 (RtlUserThreadStart.c)
 *     DbgUiRemoteBreakin @ 0x1801391B0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x18013A330 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x18013A430 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144BD0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x18007DE70 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x18015F8A0 (NtTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}

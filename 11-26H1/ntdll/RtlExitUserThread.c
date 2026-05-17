/*
 * XREFs of RtlExitUserThread @ 0x180086970
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x1800868F0 (RtlUserFiberStart.c)
 *     RtlUserThreadStart @ 0x180086920 (RtlUserThreadStart.c)
 *     DbgUiRemoteBreakin @ 0x180139440 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x18013A5C0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x18013A6C0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144D20 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x180086AD0 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x18015F9A0 (NtTerminateThread.c)
 */

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v2, 4LL, 0LL) < 0 || !v2 )
  {
    LdrShutdownThread();
    TpCheckTerminateWorker(0LL);
    NtTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  __debugbreak();
}

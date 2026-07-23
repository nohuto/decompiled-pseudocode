/*
 * XREFs of ZwSetInformationThread @ 0x14069B2E0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140206060 (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x14063CB00 (DifZwSetInformationThreadWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 *     RtlReleasePrivilege @ 0x1409BE610 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     RtlAcquirePrivilege @ 0x140A280B4 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140A28334 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

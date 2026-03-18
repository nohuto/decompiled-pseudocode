/*
 * XREFs of ZwSetInformationThread @ 0x140723590
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402C303C (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x1406BAAB0 (DifZwSetInformationThreadWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409D2010 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409D22A0 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140AEBFD0 (RtlReleasePrivilege.c)
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
  return KiServiceInternal(ThreadHandle, ThreadInformationClass, ThreadInformation);
}

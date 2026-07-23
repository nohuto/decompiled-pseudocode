/*
 * XREFs of ZwSetInformationThread @ 0x140728160
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14030DCFC (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x1406BE690 (DifZwSetInformationThreadWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409A2FF0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409A3280 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140AEEEDC (RtlReleasePrivilege.c)
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

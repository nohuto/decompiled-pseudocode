/*
 * XREFs of ZwQueryInformationProcess @ 0x14069B460
 * Callers:
 *     DifZwQueryInformationProcessWrapper @ 0x140639370 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14068C42C (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

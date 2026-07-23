/*
 * XREFs of ZwQueryInformationProcess @ 0x1407282E0
 * Callers:
 *     DifZwQueryInformationProcessWrapper @ 0x1404B9CC0 (DifZwQueryInformationProcessWrapper.c)
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

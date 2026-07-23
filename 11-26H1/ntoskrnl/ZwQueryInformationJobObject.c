/*
 * XREFs of ZwQueryInformationJobObject @ 0x14072AAA0
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x1406B5140 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}

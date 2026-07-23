/*
 * XREFs of ZwSetInformationJobObject @ 0x14072B500
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x1406BDD30 (DifZwSetInformationJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}

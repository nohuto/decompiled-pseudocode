/*
 * XREFs of ZwSetInformationJobObject @ 0x14069E660
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x14063C4C0 (DifZwSetInformationJobObjectWrapper.c)
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

/*
 * XREFs of ZwQueryInformationEnlistment @ 0x14069DBE0
 * Callers:
 *     DifZwQueryInformationEnlistmentWrapper @ 0x140638E70 (DifZwQueryInformationEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

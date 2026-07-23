/*
 * XREFs of ZwQueryInformationEnlistment @ 0x14072AA80
 * Callers:
 *     DifZwQueryInformationEnlistmentWrapper @ 0x1406B4DF0 (DifZwQueryInformationEnlistmentWrapper.c)
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

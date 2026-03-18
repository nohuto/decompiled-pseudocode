/*
 * XREFs of ZwSetInformationEnlistment @ 0x1407268F0
 * Callers:
 *     DifZwSetInformationEnlistmentWrapper @ 0x1406B9C90 (DifZwSetInformationEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&EnlistmentInformationClass);
}

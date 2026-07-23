/*
 * XREFs of ZwQueryIoCompletion @ 0x14072ABA0
 * Callers:
 *     DifZwQueryIoCompletionWrapper @ 0x1406B61A0 (DifZwQueryIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}

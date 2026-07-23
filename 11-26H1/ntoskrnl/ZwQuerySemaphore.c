/*
 * XREFs of ZwQuerySemaphore @ 0x14072AD20
 * Callers:
 *     DifZwQuerySemaphoreWrapper @ 0x1406B7A40 (DifZwQuerySemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG SemaphoreInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}

/*
 * XREFs of ZwQueryEvent @ 0x140728A80
 * Callers:
 *     DifZwQueryEventWrapper @ 0x1406B45E0 (DifZwQueryEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}

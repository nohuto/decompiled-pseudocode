/*
 * XREFs of ZwReadRequestData @ 0x140728A40
 * Callers:
 *     DifZwReadRequestDataWrapper @ 0x1406B9AF0 (DifZwReadRequestDataWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG DataEntryIndex,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

/*
 * XREFs of ZwWriteRequestData @ 0x140728AA0
 * Callers:
 *     DifZwWriteRequestDataWrapper @ 0x1406C3AC0 (DifZwWriteRequestDataWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG DataEntryIndex,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

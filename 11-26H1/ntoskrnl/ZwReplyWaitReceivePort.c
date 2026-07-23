/*
 * XREFs of ZwReplyWaitReceivePort @ 0x140728120
 * Callers:
 *     DifZwReplyWaitReceivePortWrapper @ 0x1406BB3F0 (DifZwReplyWaitReceivePortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

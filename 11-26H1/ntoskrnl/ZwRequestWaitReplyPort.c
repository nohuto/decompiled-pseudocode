/*
 * XREFs of ZwRequestWaitReplyPort @ 0x140728400
 * Callers:
 *     DifZwRequestWaitReplyPortWrapper @ 0x1406BB860 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

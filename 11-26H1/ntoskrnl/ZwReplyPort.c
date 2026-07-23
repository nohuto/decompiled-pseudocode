/*
 * XREFs of ZwReplyPort @ 0x140728140
 * Callers:
 *     DifZwReplyPortWrapper @ 0x1406BB0D0 (DifZwReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

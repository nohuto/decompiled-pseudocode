/*
 * XREFs of ZwReplyWaitReplyPort @ 0x14072B080
 * Callers:
 *     DifZwReplyWaitReplyPortWrapper @ 0x1406BB580 (DifZwReplyWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

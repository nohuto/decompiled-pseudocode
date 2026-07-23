/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14069B580
 * Callers:
 *     DifZwRequestWaitReplyPortWrapper @ 0x14063B460 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

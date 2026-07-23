/*
 * XREFs of ZwReplyWaitReceivePortEx @ 0x140728520
 * Callers:
 *     DifZwReplyWaitReceivePortExWrapper @ 0x1406BB240 (DifZwReplyWaitReceivePortExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

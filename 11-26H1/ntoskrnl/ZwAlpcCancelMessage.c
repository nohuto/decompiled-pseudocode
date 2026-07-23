/*
 * XREFs of ZwAlpcCancelMessage @ 0x140728F00
 * Callers:
 *     DifZwAlpcCancelMessageWrapper @ 0x14069DE70 (DifZwAlpcCancelMessageWrapper.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407EA404 (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140AA77A8 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

/*
 * XREFs of ZwAlpcDeleteResourceReserve @ 0x140729020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

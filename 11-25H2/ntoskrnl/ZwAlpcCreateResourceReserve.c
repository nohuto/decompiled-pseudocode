/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x14069C120
 * Callers:
 *     DifZwAlpcCreateResourceReserveWrapper @ 0x1406301B0 (DifZwAlpcCreateResourceReserveWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

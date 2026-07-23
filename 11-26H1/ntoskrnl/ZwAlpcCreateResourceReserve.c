/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x140728FA0
 * Callers:
 *     DifZwAlpcCreateResourceReserveWrapper @ 0x14069E740 (DifZwAlpcCreateResourceReserveWrapper.c)
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

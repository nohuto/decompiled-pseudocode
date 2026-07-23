/*
 * XREFs of ZwQueryIoRingCapabilities @ 0x14072ABC0
 * Callers:
 *     DifZwQueryIoRingCapabilitiesWrapper @ 0x1406B6350 (DifZwQueryIoRingCapabilitiesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryIoRingCapabilities(SIZE_T IoRingCapabilitiesLength, PVOID IoRingCapabilities)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingCapabilitiesLength);
}

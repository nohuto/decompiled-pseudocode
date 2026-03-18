/*
 * XREFs of ZwQueryIoRingCapabilities @ 0x140725FF0
 * Callers:
 *     DifZwQueryIoRingCapabilitiesWrapper @ 0x1406B2770 (DifZwQueryIoRingCapabilitiesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryIoRingCapabilities(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

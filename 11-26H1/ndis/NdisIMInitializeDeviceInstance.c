/*
 * XREFs of NdisIMInitializeDeviceInstance @ 0x14009B7E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisIMInitializeDeviceInstanceEx @ 0x14009B800 (NdisIMInitializeDeviceInstanceEx.c)
 */

NDIS_STATUS __fastcall NdisIMInitializeDeviceInstance(void *a1, UNICODE_STRING *a2)
{
  return NdisIMInitializeDeviceInstanceEx(a1, a2, 0LL);
}

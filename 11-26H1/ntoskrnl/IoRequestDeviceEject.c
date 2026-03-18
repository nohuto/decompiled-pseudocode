/*
 * XREFs of IoRequestDeviceEject @ 0x1405D9220
 * Callers:
 *     PipProcessRestartPhase2 @ 0x1407B4DF4 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x140B0AC1C (PipProcessStartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x1405D9240 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}

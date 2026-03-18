/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x14006C5BC
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1400B53A4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x140037230 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(const void **a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}

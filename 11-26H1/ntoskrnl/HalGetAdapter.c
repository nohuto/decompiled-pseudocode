/*
 * XREFs of HalGetAdapter @ 0x140783780
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x14078379C (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter(DeviceDescription, 0LL, NumberOfMapRegisters);
}

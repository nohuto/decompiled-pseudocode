/*
 * XREFs of ?IsValid@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EBAJXZ @ 0x1802B8260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::IsValid(__int64 a1)
{
  return IDeviceResourceMethodsT<CD3DResource,ICrossAdapterTexture>::IsValid(a1 - 120);
}

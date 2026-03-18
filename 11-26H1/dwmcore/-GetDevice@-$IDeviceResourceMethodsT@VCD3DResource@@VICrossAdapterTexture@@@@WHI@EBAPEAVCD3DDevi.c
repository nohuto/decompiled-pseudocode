/*
 * XREFs of ?GetDevice@?$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@WHI@EBAPEAVCD3DDevice@@XZ @ 0x1802B7DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD3DResource,ICrossAdapterTexture>::GetDevice(__int64 a1)
{
  return IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::GetDevice(a1 - 120);
}

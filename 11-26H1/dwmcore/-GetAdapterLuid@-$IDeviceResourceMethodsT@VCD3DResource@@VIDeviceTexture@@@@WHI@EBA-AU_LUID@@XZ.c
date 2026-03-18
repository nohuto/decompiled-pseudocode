/*
 * XREFs of ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EBA?AU_LUID@@XZ @ 0x1802B7D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return IDeviceResourceMethodsT<CD3DResource,ICrossAdapterTexture>::GetAdapterLuid(a1 - 120, a2);
}

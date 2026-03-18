/*
 * XREFs of ?IsValid@?$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@UEBAJXZ @ 0x1801C22C0
 * Callers:
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EBAJXZ @ 0x1802B8260 (-IsValid@-$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD3DResource,ICrossAdapterTexture>::IsValid(__int64 a1)
{
  return *(_BYTE *)(a1 + 118) == 0 ? 0x8898008D : 0;
}

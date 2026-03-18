/*
 * XREFs of ?GetDevice@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@UEBAPEAVCD3DDevice@@XZ @ 0x180196480
 * Callers:
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@WHI@EBAPEAVCD3DDevice@@XZ @ 0x1802B7DA0 (-GetDevice@-$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@WHI@EBAPEAVCD3DDevi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::GetDevice(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL);
}

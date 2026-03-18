/*
 * XREFs of ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@UEBA?AU_LUID@@XZ @ 0x1801B42C0
 * Callers:
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EBA?AU_LUID@@XZ @ 0x1802B7D00 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IDeviceResourceMethodsT<CD3DResource,ICrossAdapterTexture>::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL) + 944LL);
  return a2;
}

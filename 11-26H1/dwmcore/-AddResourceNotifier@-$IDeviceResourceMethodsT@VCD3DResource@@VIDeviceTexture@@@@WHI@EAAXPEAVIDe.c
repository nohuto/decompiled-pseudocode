/*
 * XREFs of ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802B7730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::AddResourceNotifier(__int64 a1, __int64 a2)
{
  return IDeviceResourceMethodsT<CD3DResource,ICrossAdapterTexture>::AddResourceNotifier(a1 - 120, a2);
}

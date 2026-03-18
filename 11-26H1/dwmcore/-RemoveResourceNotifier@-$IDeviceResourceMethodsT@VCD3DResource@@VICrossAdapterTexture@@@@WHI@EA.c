/*
 * XREFs of ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@WHI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802B87D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IDeviceResourceMethodsT<CD3DResource,ICrossAdapterTexture>::RemoveResourceNotifier(
        __int64 a1,
        const struct IDeviceResourceNotify *a2)
{
  IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::RemoveResourceNotifier((CD3DResource *)(a1 - 120), a2);
}

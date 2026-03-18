/*
 * XREFs of ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802B87C0
 * Callers:
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@WHI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802B87D0 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD3DResource@@VICrossAdapterTexture@@@@WHI@EA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::RemoveResourceNotifier(
        CD3DResource *a1,
        const struct IDeviceResourceNotify *a2)
{
  CD3DResource::RemoveResourceNotifier(a1, a2);
}

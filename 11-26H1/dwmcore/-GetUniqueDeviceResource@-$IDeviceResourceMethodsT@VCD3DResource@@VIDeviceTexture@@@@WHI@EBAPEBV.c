/*
 * XREFs of ?GetUniqueDeviceResource@?$IDeviceResourceMethodsT@VCD3DResource@@VIDeviceTexture@@@@WHI@EBAPEBVIDeviceResource@@XZ @ 0x1802B7E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall IDeviceResourceMethodsT<CD3DResource,IDeviceTexture>::GetUniqueDeviceResource(
        __int64 a1)
{
  return Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 - 120));
}

/*
 * XREFs of ?GetUniqueDeviceResource@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEBVIDeviceResource@@XZ @ 0x1802A9F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetUniqueDeviceResource(
        __int64 a1)
{
  return Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 - 256));
}

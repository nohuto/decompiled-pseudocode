/*
 * XREFs of ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F9E00
 * Callers:
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WEI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802A9520 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WEI@EAAXPEA.c)
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802A9BF0 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPE.c)
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802A9C10 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEA.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 */

__int64 __fastcall IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::AddResourceNotifier(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 *v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 16;
  v5 = a2;
  result = a2;
  v4 = *(__int64 **)(v2 + 8);
  if ( v4 == *(__int64 **)(v2 + 16) )
    return std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
             v2,
             v4,
             &v5);
  *v4 = result;
  *(_QWORD *)(v2 + 8) += 8LL;
  return result;
}

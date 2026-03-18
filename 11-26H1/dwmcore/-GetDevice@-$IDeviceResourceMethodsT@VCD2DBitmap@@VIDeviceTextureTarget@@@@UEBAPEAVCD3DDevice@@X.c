/*
 * XREFs of ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAPEAVCD3DDevice@@XZ @ 0x180175C10
 * Callers:
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EBAPEAVCD3DDevice@@XZ @ 0x1802A9980 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802A9E40 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEAVCD3DDevice@@XZ @ 0x1802A9E60 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEAVCD3DDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL);
  result = v1 - 16;
  if ( !v1 )
    return 0LL;
  return result;
}

/*
 * XREFs of ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x180173780
 * Callers:
 *     ?IsValid@CD2DBitmap@@WEI@EBAJXZ @ 0x1802A9A20 (-IsValid@CD2DBitmap@@WEI@EBAJXZ.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x1802A9C30 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ @ 0x1802AA080 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802AA0A0 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::IsValid(CD2DBitmap *this)
{
  if ( *((_QWORD *)this + 13) )
    return *(_DWORD *)((*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 40LL))(this) + 1124) != 0
         ? 0x8898008D
         : 0;
  else
    return 2291674892LL;
}

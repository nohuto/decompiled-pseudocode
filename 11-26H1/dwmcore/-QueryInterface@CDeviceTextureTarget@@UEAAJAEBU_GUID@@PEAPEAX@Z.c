/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018BE50
 * Callers:
 *     ?QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A4BE0 (-QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A9B00 (-QueryInterface@CDeviceTextureTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A9B10 (-QueryInterface@CD2DBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A9B20 (-QueryInterface@CD2DBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A9B30 (-QueryInterface@CD2DBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA110 (-QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA130 (-QueryInterface@CDeviceTextureTarget@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA150 (-QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA170 (-QueryInterface@CDeviceTextureTarget@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCrossAdapterTexture@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B8730 (-QueryInterface@CCrossAdapterTexture@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDeviceTextureTarget::QueryInterface(CDeviceTextureTarget *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}

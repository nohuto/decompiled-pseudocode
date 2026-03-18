/*
 * XREFs of ?QueryInterface@CMappedTexture@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AAD50
 * Callers:
 *     ?QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224B50 (-QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224B60 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224B70 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWICBitmapWrapper@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224B80 (-QueryInterface@CWICBitmapWrapper@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180225090 (-QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMappedTexture::QueryInterface(CMappedTexture *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}

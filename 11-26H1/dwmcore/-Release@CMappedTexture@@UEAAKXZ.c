/*
 * XREFs of ?Release@CMappedTexture@@UEAAKXZ @ 0x1800E1ED0
 * Callers:
 *     ?Release@CBitmapLock@@WBA@EAAKXZ @ 0x180224B90 (-Release@CBitmapLock@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180224BA0 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x180224BB0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x180224BC0 (-Release@CCompressedSourceBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WIA@EAAKXZ @ 0x1802250B0 (-Release@CWICBitmapWrapper@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMappedTexture::Release(CMappedTexture *this)
{
  return CMILRefCountBaseT<IBitmapLock,CMilObjectDeleter>::InternalRelease(this);
}

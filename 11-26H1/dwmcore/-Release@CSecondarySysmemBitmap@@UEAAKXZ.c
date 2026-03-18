/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@UEAAKXZ @ 0x1800F5700
 * Callers:
 *     ?Release@CSecondarySysmemBitmap@@WBA@EAAKXZ @ 0x1802B1220 (-Release@CSecondarySysmemBitmap@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CSecondarySysmemBitmap::Release(CSecondarySysmemBitmap *this)
{
  return CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease(this);
}

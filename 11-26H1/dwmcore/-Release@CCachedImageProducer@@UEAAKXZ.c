/*
 * XREFs of ?Release@CCachedImageProducer@@UEAAKXZ @ 0x180039E60
 * Callers:
 *     ?Release@CCachedImageProducer@@WBA@EAAKXZ @ 0x1802599C0 (-Release@CCachedImageProducer@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCachedImageProducer::Release(CCachedImageProducer *this)
{
  return CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(this);
}

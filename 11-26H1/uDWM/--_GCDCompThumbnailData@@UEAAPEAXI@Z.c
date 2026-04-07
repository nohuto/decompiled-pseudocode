/*
 * XREFs of ??_GCDCompThumbnailData@@UEAAPEAXI@Z @ 0x180071050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CDCompThumbnailData *__fastcall CDCompThumbnailData::`scalar deleting destructor'(CDCompThumbnailData *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}

/*
 * XREFs of ??_ECThumbnailData@@UEAAPEAXI@Z @ 0x180072C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CThumbnailData *__fastcall CThumbnailData::`vector deleting destructor'(CThumbnailData *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}

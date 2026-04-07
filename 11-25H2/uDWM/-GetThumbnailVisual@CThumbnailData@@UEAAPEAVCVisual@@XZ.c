/*
 * XREFs of ?GetThumbnailVisual@CThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18007DD40
 * Callers:
 *     ?GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18007DD00 (-GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CThumbnailData::GetThumbnailVisual(CThumbnailData *this)
{
  return (struct CVisual *)*((_QWORD *)this + 11);
}

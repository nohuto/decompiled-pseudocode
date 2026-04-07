/*
 * XREFs of ?GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18006F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThumbnailVisual@CThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18006F8F0 (-GetThumbnailVisual@CThumbnailData@@UEAAPEAVCVisual@@XZ.c)
 */

struct CVisual *__fastcall CDCompThumbnailData::GetThumbnailVisual(CDCompThumbnailData *this)
{
  int v1; // edx
  __int64 v2; // r8

  v1 = *((_DWORD *)this + 30);
  v2 = 0LL;
  if ( !v1 )
    return CThumbnailData::GetThumbnailVisual(this);
  if ( (unsigned int)(v1 - 1) <= 1 )
    return (struct CVisual *)*((_QWORD *)this + 14);
  return (struct CVisual *)v2;
}

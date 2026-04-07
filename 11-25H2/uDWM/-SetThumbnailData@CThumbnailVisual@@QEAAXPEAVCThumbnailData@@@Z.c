/*
 * XREFs of ?SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z @ 0x180060FF8
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180060520 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180060E14 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::SetThumbnailData(CThumbnailVisual *this, struct CThumbnailData *a2)
{
  *((_QWORD *)this + 41) = a2;
}

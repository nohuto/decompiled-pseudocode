/*
 * XREFs of ?OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ @ 0x18009A548
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180019850 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::OnSourceWindowVisualCreated(CThumbnailVisual *this)
{
  CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
}

/*
 * XREFs of ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x180044AA8
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180044248 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800443C4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::OnDestinationClientRectChanged(CThumbnailVisual *this)
{
  CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
}

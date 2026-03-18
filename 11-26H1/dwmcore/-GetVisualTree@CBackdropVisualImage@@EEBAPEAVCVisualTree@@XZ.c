/*
 * XREFs of ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x1800D3560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CBackdropVisualImage::GetVisualTree(CVisual **this)
{
  return CVisual::GetVisualTreeNoRef(this[15]);
}

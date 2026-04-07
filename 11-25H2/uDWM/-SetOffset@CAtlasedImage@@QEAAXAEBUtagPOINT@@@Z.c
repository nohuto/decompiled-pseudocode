/*
 * XREFs of ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180004A58
 * Callers:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18000474C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ @ 0x18000488C (-UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::SetOffset(struct tagPOINT *this, const struct tagPOINT *a2)
{
  if ( a2->x != this[2].x || a2->y != this[2].y )
  {
    this[2] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1u, 0x2000u);
  }
}

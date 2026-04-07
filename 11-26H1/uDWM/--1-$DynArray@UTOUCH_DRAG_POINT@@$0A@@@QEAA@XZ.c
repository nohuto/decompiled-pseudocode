/*
 * XREFs of ??1?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAA@XZ @ 0x18008A104
 * Callers:
 *     _CTouchDragVisual::CTouchDragVisual_::_1_::dtor$2 @ 0x1800E830F (_CTouchDragVisual--CTouchDragVisual_--_1_--dtor$2.c)
 *     _CTouchDragVisual::CTouchDragVisual_::_1_::dtor$3 @ 0x1800E8328 (_CTouchDragVisual--CTouchDragVisual_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DynArray<TOUCH_DRAG_POINT,0>::~DynArray<TOUCH_DRAG_POINT,0>(void **this)
{
  CBitmapSourceArray::~CBitmapSourceArray(this);
}

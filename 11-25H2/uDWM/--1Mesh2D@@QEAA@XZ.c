/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x18007CD88
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18002E6A0 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800CEBD8 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$0 @ 0x1800EB71E (_CTouchDragVisual--UpdateVisual_--_1_--dtor$0.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$1 @ 0x1800EB730 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$1.c)
 *     _CTetherVisual::UpdateInstructions_::_1_::dtor$0 @ 0x1800ED211 (_CTetherVisual--UpdateInstructions_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}

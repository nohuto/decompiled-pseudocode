/*
 * XREFs of ??1CTouchVisual@@MEAA@XZ @ 0x18000820C
 * Callers:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180005D1C (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180008254 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008782C (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008A6E0 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800B4D84 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800B8174 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800BBB94 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800BC05C (--1CPressTapVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800C8534 (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800CD000 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800CDCF0 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     _CTouchDragVisual::CTouchDragVisual_::_1_::dtor$0 @ 0x1800E82E4 (_CTouchDragVisual--CTouchDragVisual_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchVisual::~CTouchVisual(CBaseObject **this)
{
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRectangleVisual::~CRectangleVisual(this);
}

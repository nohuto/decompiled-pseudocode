/*
 * XREFs of ??1CTouchVisual@@MEAA@XZ @ 0x18008938C
 * Callers:
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180030114 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800305F0 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008069C (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x180097658 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800B535C (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800B9260 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800BC304 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800BC7BC (--1CPressTapVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800CE378 (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800D0C28 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800D1460 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchVisual::~CTouchVisual(void **this)
{
  *this = &CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}

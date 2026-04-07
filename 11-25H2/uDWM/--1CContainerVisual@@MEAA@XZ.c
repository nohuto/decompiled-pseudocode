/*
 * XREFs of ??1CContainerVisual@@MEAA@XZ @ 0x1800140AC
 * Callers:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180009F44 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18000FD70 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x1800103B4 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_GCContainerVisual@@MEAAPEAXI@Z @ 0x180014010 (--_GCContainerVisual@@MEAAPEAXI@Z.c)
 *     ??_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z @ 0x180014060 (--_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18003D70C (--1CWindowBorder@@UEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180096200 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?Destroy@CContainerVisual@@IEAAXXZ @ 0x1800140E4 (-Destroy@CContainerVisual@@IEAAXXZ.c)
 *     ??1VisualCollection@@QEAA@XZ @ 0x180014128 (--1VisualCollection@@QEAA@XZ.c)
 */

void __fastcall CContainerVisual::~CContainerVisual(CContainerVisual *this)
{
  *(_QWORD *)this = &CContainerVisual::`vftable';
  CContainerVisual::Destroy(this);
  VisualCollection::~VisualCollection((CContainerVisual *)((char *)this + 144));
  CVisual::~CVisual(this);
}

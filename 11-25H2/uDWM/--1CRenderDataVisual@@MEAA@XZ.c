/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x180009F44
 * Callers:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800382EC (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180052944 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180065B5C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CCanvasVisual@@MEAA@XZ @ 0x180068FDC (--1CCanvasVisual@@MEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x1800719AC (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18007546C (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180076AA0 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CImage@@EEAA@XZ @ 0x180079ADC (--1CImage@@EEAA@XZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x18008302C (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ??1CTouchVisual@@MEAA@XZ @ 0x18008938C (--1CTouchVisual@@MEAA@XZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A1088 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800AEF94 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B6F30 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800B8AC4 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800B9E54 (--1CLivePreview@@MEAA@XZ.c)
 *     ??_GCProjectionBorderVisual@@UEAAPEAXI@Z @ 0x1800BDC80 (--_GCProjectionBorderVisual@@UEAAPEAXI@Z.c)
 *     ??_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z @ 0x1800CF590 (--_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSolidRectangleVisual@@UEAAPEAXI@Z @ 0x1800D5760 (--_GCSolidRectangleVisual@@UEAAPEAXI@Z.c)
 *     ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x1800E11AC (--1CGlobalTimeTrackVisual@@MEAA@XZ.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x1800E2AE0 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$0 @ 0x1800EC4D5 (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(void **this)
{
  CBaseObject *v2; // rcx

  *this = &CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = (CBaseObject *)this[25];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[25] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 26);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}

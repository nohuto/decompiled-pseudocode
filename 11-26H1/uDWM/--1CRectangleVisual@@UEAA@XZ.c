/*
 * XREFs of ??1CRectangleVisual@@UEAA@XZ @ 0x1800063BC
 * Callers:
 *     ??_ECNineGridVisual@@UEAAPEAXI@Z @ 0x1800061B0 (--_ECNineGridVisual@@UEAAPEAXI@Z.c)
 *     ??1CButtonGlyph@@MEAA@XZ @ 0x18000629C (--1CButtonGlyph@@MEAA@XZ.c)
 *     ??_GCSolidRectangleVisual@@UEAAPEAXI@Z @ 0x180006370 (--_GCSolidRectangleVisual@@UEAAPEAXI@Z.c)
 *     ??1CTouchVisual@@MEAA@XZ @ 0x18000820C (--1CTouchVisual@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180070890 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CBorderSprite@@UEAA@XZ @ 0x180071BBC (--1CBorderSprite@@UEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180081B38 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800822D8 (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ??1CSolidRectangleVisual@@UEAA@XZ @ 0x18008CB4C (--1CSolidRectangleVisual@@UEAA@XZ.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800AE90C (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B5F84 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 *     ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x1800DA6F0 (--1CGlobalTimeTrackVisual@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall CRectangleVisual::~CRectangleVisual(CBaseObject **this)
{
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 23);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}

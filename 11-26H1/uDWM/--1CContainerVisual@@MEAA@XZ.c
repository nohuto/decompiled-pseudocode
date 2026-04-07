/*
 * XREFs of ??1CContainerVisual@@MEAA@XZ @ 0x18001BAC0
 * Callers:
 *     ??1CRectangleVisual@@UEAA@XZ @ 0x1800063BC (--1CRectangleVisual@@UEAA@XZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x1800086EC (--1CButton@@MEAA@XZ.c)
 *     ??_GCContainerVisual@@MEAAPEAXI@Z @ 0x18001B370 (--_GCContainerVisual@@MEAAPEAXI@Z.c)
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x1800587DC (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18005A16C (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18005DCBC (--1CWindowBorder@@UEAA@XZ.c)
 *     ??_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z @ 0x180062D90 (--_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z.c)
 *     ??1CAccent@@MEAA@XZ @ 0x180063B6C (--1CAccent@@MEAA@XZ.c)
 *     ??1CPrimitiveGroupVisual@@MEAA@XZ @ 0x180065DCC (--1CPrimitiveGroupVisual@@MEAA@XZ.c)
 *     ??1CDWriteText@@UEAA@XZ @ 0x18006AF7C (--1CDWriteText@@UEAA@XZ.c)
 *     ??_ECIconicSprite@@UEAAPEAXI@Z @ 0x180077AB0 (--_ECIconicSprite@@UEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x1800821A8 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180088840 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x18008D204 (--1CLegacyNonClientBackground@@UEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@UEAA@XZ @ 0x180093A68 (--1CAccentAcrylicBlurBehind@@UEAA@XZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800956B8 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??1CProjectionBorderVisual@@UEAA@XZ @ 0x18009E45C (--1CProjectionBorderVisual@@UEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800B7AA4 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800B902C (--1CLivePreview@@MEAA@XZ.c)
 * Callees:
 *     ??1VisualCollection@@QEAA@XZ @ 0x18001BD30 (--1VisualCollection@@QEAA@XZ.c)
 *     ?Destroy@CContainerVisual@@IEAAXXZ @ 0x18008E020 (-Destroy@CContainerVisual@@IEAAXXZ.c)
 */

void __fastcall CContainerVisual::~CContainerVisual(CContainerVisual *this)
{
  *(_QWORD *)this = &CContainerVisual::`vftable';
  CContainerVisual::Destroy(this);
  VisualCollection::~VisualCollection((CContainerVisual *)((char *)this + 136));
  CVisual::~CVisual(this);
}

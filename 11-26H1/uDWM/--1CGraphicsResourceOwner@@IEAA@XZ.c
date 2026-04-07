/*
 * XREFs of ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464
 * Callers:
 *     ??1CButtonGlyph@@MEAA@XZ @ 0x18000629C (--1CButtonGlyph@@MEAA@XZ.c)
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x18001B3C0 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18005DCBC (--1CWindowBorder@@UEAA@XZ.c)
 *     ??1CPrimitiveGroupVisual@@MEAA@XZ @ 0x180065DCC (--1CPrimitiveGroupVisual@@MEAA@XZ.c)
 *     ??1CDWriteText@@UEAA@XZ @ 0x18006AF7C (--1CDWriteText@@UEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180070890 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008782C (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CBorderBrushCache@CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x180090918 (--1CBorderBrushCache@CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 *     ??1CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x180090948 (--1CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@UEAA@XZ @ 0x180093A68 (--1CAccentAcrylicBlurBehind@@UEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800C8534 (--1CTetherVisual@@MEAA@XZ.c)
 *     _CTouchDragVisual::CTouchDragVisual_::_1_::dtor$1 @ 0x1800E82F6 (_CTouchDragVisual--CTouchDragVisual_--_1_--dtor$1.c)
 *     _CBitmapSource::CBitmapSource_::_1_::dtor$1 @ 0x1800E8BE4 (_CBitmapSource--CBitmapSource_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveResourceOwner@CGraphicsDeviceManager@@QEAAXPEAVCGraphicsResourceOwner@@@Z @ 0x18005DD08 (-RemoveResourceOwner@CGraphicsDeviceManager@@QEAAXPEAVCGraphicsResourceOwner@@@Z.c)
 */

void __fastcall CGraphicsResourceOwner::~CGraphicsResourceOwner(CGraphicsResourceOwner *this)
{
  if ( *((_QWORD *)this + 1) != (((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)) )
    CGraphicsDeviceManager::RemoveResourceOwner(
      *((CGraphicsDeviceManager **)CDesktopManager::s_pDesktopManagerInstance + 7),
      this);
}

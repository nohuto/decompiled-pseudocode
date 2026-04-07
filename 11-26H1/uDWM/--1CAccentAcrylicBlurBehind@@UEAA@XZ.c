/*
 * XREFs of ??1CAccentAcrylicBlurBehind@@UEAA@XZ @ 0x180093A68
 * Callers:
 *     ??_ECAccentAcrylicBlurBehind@@UEAAPEAXI@Z @ 0x180093A90 (--_ECAccentAcrylicBlurBehind@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  CGraphicsResourceOwner::~CGraphicsResourceOwner((CAccentAcrylicBlurBehind *)((char *)this + 184));
  CContainerVisual::~CContainerVisual(this);
}

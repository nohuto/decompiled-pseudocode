/*
 * XREFs of ??1?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAA@XZ @ 0x18021521C
 * Callers:
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x1802151D0 (--1CSurfaceBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::~CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[19]);
  this[19] = 0LL;
  CBrush::~CBrush((CBrush *)this);
}

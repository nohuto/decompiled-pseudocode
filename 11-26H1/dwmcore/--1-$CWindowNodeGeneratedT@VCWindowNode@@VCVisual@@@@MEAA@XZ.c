/*
 * XREFs of ??1?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAA@XZ @ 0x1801C80BC
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x18021AC68 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::~CWindowNodeGeneratedT<CWindowNode,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[100]);
  this[100] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[101]);
  this[101] = 0LL;
  CVisual::~CVisual(this);
}

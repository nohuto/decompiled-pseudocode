/*
 * XREFs of ??1CVectorShape@@MEAA@XZ @ 0x1800ACCF4
 * Callers:
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x1800ABF0C (--1CSpriteVectorShape@@UEAA@XZ.c)
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1801B033C (--1CContainerVectorShape@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVectorShape::~CVectorShape(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  CResource::~CResource((CResource *)this);
}

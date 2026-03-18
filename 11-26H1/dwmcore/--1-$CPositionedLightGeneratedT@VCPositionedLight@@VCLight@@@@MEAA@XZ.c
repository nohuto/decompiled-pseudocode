/*
 * XREFs of ??1?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@MEAA@XZ @ 0x180245C74
 * Callers:
 *     ??1CPositionedLight@@MEAA@XZ @ 0x18026CF04 (--1CPositionedLight@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CPositionedLightGeneratedT<CPositionedLight,CLight>::~CPositionedLightGeneratedT<CPositionedLight,CLight>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[29]);
  this[29] = 0LL;
  CLight::~CLight((CLight *)this);
}

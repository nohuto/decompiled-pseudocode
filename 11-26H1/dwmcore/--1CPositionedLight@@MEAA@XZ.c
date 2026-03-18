/*
 * XREFs of ??1CPositionedLight@@MEAA@XZ @ 0x18026CF04
 * Callers:
 *     ??1CSpotLight@@UEAA@XZ @ 0x1802461A0 (--1CSpotLight@@UEAA@XZ.c)
 *     ??_ECDistantLight@@UEAAPEAXI@Z @ 0x180246820 (--_ECDistantLight@@UEAAPEAXI@Z.c)
 *     ??_GCPointLight@@UEAAPEAXI@Z @ 0x180246AA0 (--_GCPointLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232194 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z.c)
 */

void __fastcall CPositionedLight::~CPositionedLight(CPositionedLight *this)
{
  struct CVisual *v2; // rcx

  if ( *((_BYTE *)this + 80) )
  {
    v2 = (struct CVisual *)*((_QWORD *)this + 29);
    if ( v2 )
      CPreWalkVisual::UnregisterLightCoordspace(v2, this);
  }
  CPositionedLightGeneratedT<CPositionedLight,CLight>::~CPositionedLightGeneratedT<CPositionedLight,CLight>((struct CResource **)this);
}

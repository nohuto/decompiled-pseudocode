/*
 * XREFs of ?OnEnabledChanged@CPositionedLight@@MEAAXXZ @ 0x18026CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232138 (-RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232194 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z.c)
 */

void __fastcall CPositionedLight::OnEnabledChanged(CPositionedLight *this)
{
  struct CVisual *v2; // rcx

  v2 = (struct CVisual *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 80) )
      CPreWalkVisual::RegisterLightCoordspace(v2, this);
    else
      CPreWalkVisual::UnregisterLightCoordspace(v2, this);
  }
  CLight::OnEnabledChanged(this);
}

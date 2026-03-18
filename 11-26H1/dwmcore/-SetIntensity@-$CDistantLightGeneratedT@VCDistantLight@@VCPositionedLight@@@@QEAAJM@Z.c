/*
 * XREFs of ?SetIntensity@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024B670
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D3B0 (-SetProperty@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_P.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?OnPropertyChanged@CPositionedLight@@IEAAXXZ @ 0x18026D010 (-OnPropertyChanged@CPositionedLight@@IEAAXXZ.c)
 */

__int64 __fastcall CDistantLightGeneratedT<CDistantLight,CPositionedLight>::SetIntensity(
        CPositionedLight *this,
        float a2)
{
  if ( a2 != *((float *)this + 67) )
  {
    *((float *)this + 67) = a2;
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CPositionedLight::OnPropertyChanged(this);
  }
  return 0LL;
}

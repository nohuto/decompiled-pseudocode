/*
 * XREFs of ?SetOuterConeColor@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024C6F4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E000 (-SetProperty@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERT.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?OnPropertyChanged@CPositionedLight@@IEAAXXZ @ 0x18026D010 (-OnPropertyChanged@CPositionedLight@@IEAAXXZ.c)
 */

__int64 __fastcall CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetOuterConeColor(
        CPositionedLight *this,
        __int128 *a2)
{
  _OWORD *v3; // rdx
  _OWORD *v4; // r8
  bool v5; // zf
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v7 = *a2;
  if ( !operator==((float *)&v7, (float *)this + 77) )
  {
    v5 = *((_QWORD *)this + 6) == 0LL;
    *v3 = *v4;
    if ( !v5 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CPositionedLight::OnPropertyChanged(this);
  }
  return 0LL;
}

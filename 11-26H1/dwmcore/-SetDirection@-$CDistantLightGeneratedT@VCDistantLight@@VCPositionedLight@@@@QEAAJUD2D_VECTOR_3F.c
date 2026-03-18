/*
 * XREFs of ?SetDirection@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024ADD8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D3B0 (-SetProperty@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_P.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??9@YA_NAEBUD2D_VECTOR_3F@@0@Z @ 0x1802463E0 (--9@YA_NAEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?NormalizeVec3@CLight@@IEBAXAEBUD2D_VECTOR_3F@@PEAU2@@Z @ 0x180264974 (-NormalizeVec3@CLight@@IEBAXAEBUD2D_VECTOR_3F@@PEAU2@@Z.c)
 *     ?OnPropertyChanged@CPositionedLight@@IEAAXXZ @ 0x18026D010 (-OnPropertyChanged@CPositionedLight@@IEAAXXZ.c)
 */

__int64 __fastcall CDistantLightGeneratedT<CDistantLight,CPositionedLight>::SetDirection(
        CPositionedLight *this,
        const struct D2D_VECTOR_3F *a2)
{
  __int64 v3; // rdx
  bool v4; // zf
  FLOAT z; // eax
  struct D2D_VECTOR_3F v7; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v7.x = 0LL;
  v7.z = 0.0;
  CLight::NormalizeVec3(this, a2, &v7);
  if ( operator!=(&v7.x, (float *)this + 64) )
  {
    v4 = *((_QWORD *)this + 6) == 0LL;
    z = v7.z;
    *(_QWORD *)v3 = *(_QWORD *)&v7.x;
    *(FLOAT *)(v3 + 8) = z;
    if ( !v4 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CPositionedLight::OnPropertyChanged(this);
  }
  return 0LL;
}

/*
 * XREFs of ?SetOffset@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024C3D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D660 (-SetProperty@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPE.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??9@YA_NAEBUD2D_VECTOR_3F@@0@Z @ 0x1802463E0 (--9@YA_NAEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?OnPropertyChanged@CPositionedLight@@IEAAXXZ @ 0x18026D010 (-OnPropertyChanged@CPositionedLight@@IEAAXXZ.c)
 */

__int64 __fastcall CPointLightGeneratedT<CPointLight,CPositionedLight>::SetOffset(CPositionedLight *this, __int64 *a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]

  v2 = *((_DWORD *)a2 + 2);
  v9 = *a2;
  v10 = v2;
  if ( operator!=((float *)&v9, (float *)this + 69) )
  {
    v6 = *((_QWORD *)this + 6) == 0LL;
    v7 = *(_DWORD *)(v5 + 8);
    *(_QWORD *)v4 = *(_QWORD *)v5;
    *(_DWORD *)(v4 + 8) = v7;
    if ( !v6 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CPositionedLight::OnPropertyChanged(this);
  }
  return 0LL;
}

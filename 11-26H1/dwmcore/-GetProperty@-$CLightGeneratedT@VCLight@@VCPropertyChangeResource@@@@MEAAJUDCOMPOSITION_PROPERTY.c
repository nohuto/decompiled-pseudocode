/*
 * XREFs of ?GetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248010
 * Callers:
 *     ?GetProperty@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247A00 (-GetProperty@-$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID.c)
 *     ?GetProperty@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247E70 (-GetProperty@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_P.c)
 *     ?GetProperty@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248050 (-GetProperty@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPE.c)
 *     ?GetProperty@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248620 (-GetProperty@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERT.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CLightGeneratedT<CLight,CPropertyChangeResource>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  __int64 result; // rax
  char v5; // bl

  if ( a2 )
    return 2147942487LL;
  v5 = *(_BYTE *)(a1 + 80);
  CExpressionValue::DestroyCurrent(a3);
  result = 0LL;
  *((_DWORD *)a3 + 16) = 17;
  *(_BYTE *)a3 = v5;
  return result;
}

/*
 * XREFs of ?GetProperty@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247A00
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248010 (-GetProperty@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY.c)
 */

__int64 __fastcall CAmbientLightGeneratedT<CAmbientLight,CLight>::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  int v6; // xmm6_4

  if ( a2 == 3 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *(_OWORD *)(a1 + 232);
  }
  else
  {
    if ( a2 != 4 )
      return CLightGeneratedT<CLight,CPropertyChangeResource>::GetProperty();
    v6 = *(_DWORD *)(a1 + 248);
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v6;
    *((_DWORD *)a3 + 16) = 18;
  }
  return 0LL;
}

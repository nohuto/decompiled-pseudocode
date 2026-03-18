/*
 * XREFs of ?GetProperty@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248050
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248010 (-GetProperty@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPointLightGeneratedT<CPointLight,CPositionedLight>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v6; // xmm6_4
  __int64 v7; // rbx

  switch ( a2 )
  {
    case 4:
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 70;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 240);
      return 0LL;
    case 5:
      v6 = *(_DWORD *)(a1 + 256);
      goto LABEL_17;
    case 6:
      v6 = *(_DWORD *)(a1 + 260);
      goto LABEL_17;
    case 7:
      v6 = *(_DWORD *)(a1 + 264);
      goto LABEL_17;
    case 8:
      v6 = *(_DWORD *)(a1 + 268);
      goto LABEL_17;
    case 9:
      v6 = *(_DWORD *)(a1 + 272);
LABEL_17:
      CExpressionValue::DestroyCurrent(a3);
      *(_DWORD *)a3 = v6;
      *((_DWORD *)a3 + 16) = 18;
      return 0LL;
  }
  if ( a2 != 10 )
  {
    if ( a2 != 11 )
      return CLightGeneratedT<CLight,CPropertyChangeResource>::GetProperty(a1, a2, a3);
    v6 = *(_DWORD *)(a1 + 288);
    goto LABEL_17;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1);
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 52;
  *(_QWORD *)a3 = *(_QWORD *)v7;
  *((_DWORD *)a3 + 2) = *(_DWORD *)(v7 + 8);
  return 0LL;
}

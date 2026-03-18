/*
 * XREFs of ?GetProperty@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247E70
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248010 (-GetProperty@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDistantLightGeneratedT<CDistantLight,CPositionedLight>::GetProperty(
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
      break;
    case 5:
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)v7;
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v7 + 8);
      break;
    case 6:
      v6 = *(_DWORD *)(a1 + 268);
      CExpressionValue::DestroyCurrent(a3);
      *(_DWORD *)a3 = v6;
      *((_DWORD *)a3 + 16) = 18;
      break;
    default:
      return CLightGeneratedT<CLight,CPropertyChangeResource>::GetProperty();
  }
  return 0LL;
}

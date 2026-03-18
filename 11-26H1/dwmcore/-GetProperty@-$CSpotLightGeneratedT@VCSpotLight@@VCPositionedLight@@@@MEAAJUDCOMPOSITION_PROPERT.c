/*
 * XREFs of ?GetProperty@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248620
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248010 (-GetProperty@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpotLightGeneratedT<CSpotLight,CPositionedLight>::GetProperty(
        __int64 a1,
        unsigned int a2,
        CExpressionValue *a3)
{
  int v5; // xmm6_4
  __int128 v6; // xmm0
  __int64 (*v7)(void); // rax
  __int64 v8; // rbx

  if ( a2 > 0xA )
  {
    if ( a2 == 11 )
    {
      v5 = *(_DWORD *)(a1 + 288);
      goto LABEL_31;
    }
    if ( a2 != 12 )
    {
      if ( a2 == 13 )
      {
        v5 = *(_DWORD *)(a1 + 304);
        goto LABEL_31;
      }
      if ( a2 != 14 )
      {
        if ( a2 == 15 )
        {
          v5 = *(_DWORD *)(a1 + 324);
          goto LABEL_31;
        }
        if ( a2 == 16 )
        {
          v5 = *(_DWORD *)(a1 + 328);
          goto LABEL_31;
        }
        return CLightGeneratedT<CLight,CPropertyChangeResource>::GetProperty(a1, a2, a3);
      }
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 70;
      v6 = *(_OWORD *)(a1 + 308);
      goto LABEL_12;
    }
    v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 232LL);
LABEL_15:
    v8 = v7();
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)v8;
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v8 + 8);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0xAu:
      v5 = *(_DWORD *)(a1 + 284);
      goto LABEL_31;
    case 4u:
      v5 = *(_DWORD *)(a1 + 240);
      goto LABEL_31;
    case 5u:
      v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 240LL);
      goto LABEL_15;
    case 6u:
      v5 = *(_DWORD *)(a1 + 256);
      goto LABEL_31;
  }
  if ( a2 != 7 )
  {
    if ( a2 == 8 )
    {
      v5 = *(_DWORD *)(a1 + 276);
      goto LABEL_31;
    }
    if ( a2 == 9 )
    {
      v5 = *(_DWORD *)(a1 + 280);
LABEL_31:
      CExpressionValue::DestroyCurrent(a3);
      *(_DWORD *)a3 = v5;
      *((_DWORD *)a3 + 16) = 18;
      return 0LL;
    }
    return CLightGeneratedT<CLight,CPropertyChangeResource>::GetProperty(a1, a2, a3);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 70;
  v6 = *(_OWORD *)(a1 + 260);
LABEL_12:
  *(_OWORD *)a3 = v6;
  return 0LL;
}

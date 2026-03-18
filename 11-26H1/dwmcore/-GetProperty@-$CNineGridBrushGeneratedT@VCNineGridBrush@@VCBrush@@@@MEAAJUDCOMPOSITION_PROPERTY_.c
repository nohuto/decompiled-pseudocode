/*
 * XREFs of ?GetProperty@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  char v12; // bl
  int v13; // xmm6_4

  if ( !a2 )
  {
    v13 = *(_DWORD *)(a1 + 104);
    goto LABEL_20;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v13 = *(_DWORD *)(a1 + 108);
    goto LABEL_20;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v13 = *(_DWORD *)(a1 + 112);
    goto LABEL_20;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v13 = *(_DWORD *)(a1 + 116);
    goto LABEL_20;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v13 = *(_DWORD *)(a1 + 120);
    goto LABEL_20;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v13 = *(_DWORD *)(a1 + 124);
    goto LABEL_20;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v13 = *(_DWORD *)(a1 + 128);
    goto LABEL_20;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v13 = *(_DWORD *)(a1 + 132);
LABEL_20:
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 16) = 18;
    return 0LL;
  }
  if ( v10 != 1 )
    return 2147942487LL;
  v12 = *(_BYTE *)(a1 + 136);
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 17;
  *(_BYTE *)a3 = v12;
  return 0LL;
}
